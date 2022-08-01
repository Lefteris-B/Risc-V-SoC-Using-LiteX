// This file is Copyright (c) 2017-2020 Florent Kermarrec <florent@enjoy-digital.fr>
// This file is Copyright (c) 2019-2020 Gabriel L. Somlo <gsomlo@gmail.com>
// This file is Copyright (c) 2021 Victor Suarez Rovere <suarezvictor@gmail.com>
// This file is Copyright (c) 2019 Kees Jongenburger <kees.jongenburger@gmail.com>
// This file is Copyright (c) 2018 bunnie <bunnie@kosagi.com>
// This file is Copyright (c) 2020 Antmicro <www.antmicro.com>
// License: BSD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <generated/csr.h>
#include <generated/mem.h>
#include <generated/soc.h>
#include <system.h>

#include "sdcard.h"
#if !defined(MICROPY_VFS_FAT) && !defined(FFCONF_H)
#include <libfatfs/ff.h>
#include <libfatfs/diskio.h>
#endif

#ifdef CSR_SDCORE_BASE

#ifdef _DEBUG
#define SDCARD_DEBUG
#endif

//#define SDCARD_CMD23_SUPPORT /* SET_BLOCK_COUNT */
#define SDCARD_CMD18_SUPPORT /* READ_MULTIPLE_BLOCK */
#define SDCARD_CMD25_SUPPORT /* WRITE_MULTIPLE_BLOCK */

#ifndef SDCARD_CLK_FREQ_INIT
#define SDCARD_CLK_FREQ_INIT 400000
#endif

#if !defined(SD_SPEED_OPTION) && !defined(SDCARD_CLK_FREQ)
#define SD_SPEED_OPTION SD_SPEED_SDR50
#warning using default SD_SPEED_OPTION (50MHz)
#endif

#if SD_SPEED_OPTION == SD_SPEED_SDR12 //0
#define SDCARD_CLK_FREQ 12500000
#endif
#if SD_SPEED_OPTION == SD_SPEED_SDR25 //1
#define SDCARD_CLK_FREQ 25000000
#endif
#if SD_SPEED_OPTION == SD_SPEED_SDR50 //2
#define SDCARD_CLK_FREQ 50000000
#endif
#if SD_SPEED_OPTION == SD_SPEED_SDR104 //3
#if CONFIG_CLOCK_FREQUENCY > 200000000
#define SDCARD_CLK_FREQ 104000000
#else
#define SDCARD_CLK_FREQ 100000000
#warning setting SD clock of desired 104MHz to 100MHz
#endif
#endif
#if SD_SPEED_OPTION == SD_SPEED_DDR50
#error SD_SPEED_DDR50 not supported //4
#endif

#if SDCARD_CLK_FREQ*2 > CONFIG_CLOCK_FREQUENCY
#error SD clock speed setting is too high
#endif
/*-----------------------------------------------------------------------*/
/* Helpers                                                               */
/*-----------------------------------------------------------------------*/

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

/*-----------------------------------------------------------------------*/
/* SDCard command helpers                                                */
/*-----------------------------------------------------------------------*/

int sdcard_wait_cmd_done(void) {
	unsigned int event;
#ifdef SDCARD_DEBUG
	uint32_t r[SD_CMD_RESPONSE_SIZE/4];
#endif
	for (;;) {
		event = sdcore_cmd_event_read();
#ifdef SDCARD_DEBUG
		//printf("cmdevt: %08x\n", event);
#endif
		busy_wait_us(10);
		if (event & 0x1)
			break;
	}
#ifdef SDCARD_DEBUG
	csr_rd_buf_uint32(CSR_SDCORE_CMD_RESPONSE_ADDR,
			  r, SD_CMD_RESPONSE_SIZE/4);
	printf("%08x %08x %08x %08x\n", r[0], r[1], r[2], r[3]);
#endif
	if (event & 0x4)
		return SD_TIMEOUT;
	if (event & 0x8)
		return SD_CRCERROR;
	return SD_OK;
}

int sdcard_wait_data_done(void) {
	unsigned int event;
	for (;;) {
		event = sdcore_data_event_read();
#ifdef SDCARD_DEBUG
		printf("dataevt: %08x\n", event);
#endif
		if (event & 0x1)
			break;
		busy_wait_us(10);
	}
#ifdef SDCARD_DEBUG
	printf("sdcard_wait_data_done: dataevt: 0x%08x (valid=0x01)\n", event);
#endif
	if (event & 0x4)
		return SD_TIMEOUT;
	else if (event & 0x8)
		return SD_CRCERROR;
	return SD_OK;
}

/*-----------------------------------------------------------------------*/
/* SDCard clocker functions                                              */
/*-----------------------------------------------------------------------*/

/* round up to closest power-of-two */
static inline uint32_t pow2_round_up(uint32_t r) {
	r--;
	r |= r >>  1;
	r |= r >>  2;
	r |= r >>  4;
	r |= r >>  8;
	r |= r >> 16;
	r++;
	return r;
}

void sdcard_set_clk_freq(unsigned long clk_freq, int show) {
	uint32_t divider;
	divider = clk_freq ? CONFIG_CLOCK_FREQUENCY/clk_freq : 256;
	divider = pow2_round_up(divider);
	divider = min(max(divider, 2), 256);
#ifdef SDCARD_DEBUG
	show = 1;
#endif
	if (show) {
		/* this is the *effective* new clk_freq */
		clk_freq = CONFIG_CLOCK_FREQUENCY/divider;
		printf("Setting SDCard clk to freq option %d, effective freq ", SD_SPEED_OPTION);
		if (clk_freq > 1000000)
			printf("%u.%u MHz\n", (int) (clk_freq/1000000), (int) (clk_freq/100000) % 10);
		else
			printf("%u KHz\n", (int) (clk_freq/1000));
	}
	sdphy_clocker_divider_write(divider);
}

/*-----------------------------------------------------------------------*/
/* SDCard commands functions                                             */
/*-----------------------------------------------------------------------*/

static inline int sdcard_send_command(uint32_t arg, uint8_t cmd, uint8_t rsp) {
	sdcore_cmd_argument_write(arg);
	sdcore_cmd_command_write((cmd << 8) | rsp);
	sdcore_cmd_send_write(1);
	return sdcard_wait_cmd_done();
}

int sdcard_go_idle(void) {
#ifdef SDCARD_DEBUG
	printf("CMD0: GO_IDLE\n");
#endif
	return sdcard_send_command(0, 0, SDCARD_CTRL_RESPONSE_NONE);
}

int sdcard_send_ext_csd(void) {
	uint32_t arg = 0x000001aa;
#ifdef SDCARD_DEBUG
	printf("CMD8: SEND_EXT_CSD, arg: 0x%08x\n", arg);
#endif
	return sdcard_send_command(arg, 8, SDCARD_CTRL_RESPONSE_SHORT);
}

int sdcard_app_cmd(uint16_t rca) {
#ifdef SDCARD_DEBUG
	printf("CMD55: APP_CMD\n");
#endif
	return sdcard_send_command(rca << 16, 55, SDCARD_CTRL_RESPONSE_SHORT);
}

int sdcard_app_send_op_cond(int hcs) {
	uint32_t arg = 0x10ff8000;
	if (hcs)
		arg |= 0x60000000;
#ifdef SDCARD_DEBUG
	printf("ACMD41: APP_SEND_OP_COND, arg: %08x\n", arg);
#endif
	return sdcard_send_command(arg, 41, SDCARD_CTRL_RESPONSE_SHORT_BUSY);
}

int sdcard_all_send_cid(void) {
#ifdef SDCARD_DEBUG
	printf("CMD2: ALL_SEND_CID\n");
#endif
	return sdcard_send_command(0, 2, SDCARD_CTRL_RESPONSE_LONG);
}

int sdcard_set_relative_address(void) {
#ifdef SDCARD_DEBUG
	printf("CMD3: SET_RELATIVE_ADDRESS\n");
#endif
	return sdcard_send_command(0, 3, SDCARD_CTRL_RESPONSE_SHORT);
}

int sdcard_send_cid(uint16_t rca) {
#ifdef SDCARD_DEBUG
	printf("CMD10: SEND_CID\n");
#endif
	return sdcard_send_command(rca << 16, 10, SDCARD_CTRL_RESPONSE_LONG);
}

int sdcard_send_csd(uint16_t rca) {
#ifdef SDCARD_DEBUG
	printf("CMD9: SEND_CSD\n");
#endif
	return sdcard_send_command(rca << 16, 9, SDCARD_CTRL_RESPONSE_LONG);
}

int sdcard_select_card(uint16_t rca) {
#ifdef SDCARD_DEBUG
	printf("CMD7: SELECT_CARD\n");
#endif
	return sdcard_send_command(rca << 16, 7, SDCARD_CTRL_RESPONSE_SHORT_BUSY);
}

int sdcard_app_set_bus_width(void) {
#ifdef SDCARD_DEBUG
	printf("ACMD6: SET_BUS_WIDTH\n");
#endif
	return sdcard_send_command(2, 6, SDCARD_CTRL_RESPONSE_SHORT); //'00'-1bit or '10'=4 bits 
}

int sdcard_switch(unsigned int mode, unsigned int group, unsigned int value) {
	unsigned int arg;
	arg = (mode << 31) | 0xffffff;
	arg &= ~(0xf << (group * 4));
	arg |= value << (group * 4);
#ifdef SDCARD_DEBUG
	printf("CMD6: SWITCH_FUNC\n");
#endif
	sdcore_block_length_write(64);
	sdcore_block_count_write(1);
	while (sdcard_send_command(arg, 6,
		(SDCARD_CTRL_DATA_TRANSFER_READ << 5) |
		SDCARD_CTRL_RESPONSE_SHORT) != SD_OK);
	return sdcard_wait_data_done();
}

int sdcard_app_send_scr(void) {
#ifdef SDCARD_DEBUG
	printf("CMD51: APP_SEND_SCR\n");
#endif
	sdcore_block_length_write(8);
	sdcore_block_count_write(1);
	while (sdcard_send_command(0, 51,
		(SDCARD_CTRL_DATA_TRANSFER_READ << 5) |
		SDCARD_CTRL_RESPONSE_SHORT) != SD_OK);
	return sdcard_wait_data_done();
}

int sdcard_app_set_blocklen(unsigned int blocklen) {
#ifdef SDCARD_DEBUG
	printf("CMD16: SET_BLOCKLEN\n");
#endif
	return sdcard_send_command(blocklen, 16, SDCARD_CTRL_RESPONSE_SHORT);
}

int sdcard_write_single_block(unsigned int blockaddr) {
#ifdef SDCARD_DEBUG
	printf("CMD24: WRITE_SINGLE_BLOCK\n");
#endif
	sdcore_block_length_write(512);
	sdcore_block_count_write(1);
	while (sdcard_send_command(blockaddr, 24,
	    (SDCARD_CTRL_DATA_TRANSFER_WRITE << 5) |
	    SDCARD_CTRL_RESPONSE_SHORT) != SD_OK);
	return SD_OK;
}

int sdcard_write_multiple_block(unsigned int blockaddr, unsigned int blockcnt) {
#ifdef SDCARD_DEBUG
	printf("CMD25: WRITE_MULTIPLE_BLOCK\n");
#endif
	sdcore_block_length_write(512);
	sdcore_block_count_write(blockcnt);
	while (sdcard_send_command(blockaddr, 25,
	    (SDCARD_CTRL_DATA_TRANSFER_WRITE << 5) |
	    SDCARD_CTRL_RESPONSE_SHORT) != SD_OK);
	return SD_OK;
}

int sdcard_read_single_block(unsigned int blockaddr) {
#ifdef SDCARD_DEBUG
	printf("CMD17: READ_SINGLE_BLOCK\n");
#endif
	sdcore_block_length_write(512);
	sdcore_block_count_write(1);
	while (sdcard_send_command(blockaddr, 17,
	    (SDCARD_CTRL_DATA_TRANSFER_READ << 5) |
	    SDCARD_CTRL_RESPONSE_SHORT) != SD_OK)
        {
#ifdef SDCARD_DEBUG
	printf("CMD17: retrying...\n");
#endif
        }
	return sdcard_wait_data_done();
}

int sdcard_read_multiple_block(unsigned int blockaddr, unsigned int blockcnt) {
#ifdef SDCARD_DEBUG
	printf("CMD18: READ_MULTIPLE_BLOCK\n");
#endif
	sdcore_block_length_write(512);
	sdcore_block_count_write(blockcnt);
	while (sdcard_send_command(blockaddr, 18,
	    (SDCARD_CTRL_DATA_TRANSFER_READ << 5) |
	    SDCARD_CTRL_RESPONSE_SHORT) != SD_OK);
	return sdcard_wait_data_done();
}

int sdcard_stop_transmission(void) {
#ifdef SDCARD_DEBUG
	printf("CMD12: STOP_TRANSMISSION\n");
#endif
	return sdcard_send_command(0, 12, SDCARD_CTRL_RESPONSE_SHORT_BUSY);
}

int sdcard_send_status(uint16_t rca) {
#ifdef SDCARD_DEBUG
	printf("CMD13: SEND_STATUS\n");
#endif
	return sdcard_send_command(rca << 16, 13, SDCARD_CTRL_RESPONSE_SHORT);
}

int sdcard_set_block_count(unsigned int blockcnt) {
#ifdef SDCARD_DEBUG
	printf("CMD23: SET_BLOCK_COUNT\n");
#endif
	return sdcard_send_command(blockcnt, 23, SDCARD_CTRL_RESPONSE_SHORT);
}

uint16_t sdcard_decode_rca(void) {
	uint32_t r[SD_CMD_RESPONSE_SIZE/4];
	csr_rd_buf_uint32(CSR_SDCORE_CMD_RESPONSE_ADDR,
			  r, SD_CMD_RESPONSE_SIZE/4);
	return (r[3] >> 16) & 0xffff;
}

#ifdef SDCARD_DEBUG
void sdcard_decode_cid(void) {
	uint32_t r[SD_CMD_RESPONSE_SIZE/4];
	csr_rd_buf_uint32(CSR_SDCORE_CMD_RESPONSE_ADDR,
			  r, SD_CMD_RESPONSE_SIZE/4);
	printf(
		"CID Register: 0x%08x%08x%08x%08x\n"
		"Manufacturer ID: 0x%x\n"
		"Application ID 0x%x\n"
		"Product name: %c%c%c%c%c\n"
		"CRC: %02x\n"
		"Production date(m/yy): %d/%d\n"
		"PSN: %08x\n"
		"OID: %c%c\n",

		r[0], r[1], r[2], r[3],

		(int) ((r[0] >> 16) & 0xffff),

		(int) (r[0] & 0xffff),

		(uint8_t) (r[1] >> 24), (uint8_t) (r[1] >> 16),
		(uint8_t) (r[1] >>  8), (uint8_t) (r[1] >>  0), (uint8_t) (r[2] >> 24),

		(uint8_t) r[3],

		(int) ((r[3] >>  8) & 0x0f), (int) ((r[3] >> 12) & 0xff),

		(r[3] >> 24) | (r[2] <<  8),

		(uint8_t) (r[0] >> 16), (uint8_t) (r[0] >>  8)
	);
}
#endif

unsigned sdcard_nsects = 0;
void sdcard_decode_csd(void) {
	uint32_t r[SD_CMD_RESPONSE_SIZE/4];
	csr_rd_buf_uint32(CSR_SDCORE_CMD_RESPONSE_ADDR, r, SD_CMD_RESPONSE_SIZE/4);

/*
According to https://github.com/micropython/micropython/blob/master/drivers/sdcard/sdcard.py
   if csd[0] & 0xC0 == 0x40:  # CSD version 2.0
            self.sectors = ((csd[8] << 8 | csd[9]) + 1) * 1024
        elif csd[0] & 0xC0 == 0x00:  # CSD version 1.0 (old, <=2GB)
            c_size = csd[6] & 0b11 | csd[7] << 2 | (csd[8] & 0b11000000) << 4
            c_size_mult = ((csd[9] & 0b11) << 1) | csd[10] >> 7
            self.sectors = (c_size + 1) * (2 ** (c_size_mult + 2))
*/

	/* FIXME: only support CSR structure version 2.0 */
	unsigned nsects = (r[2] >> 16) + ((r[1] & 0xff) << 16) + 1;
	sdcard_nsects = nsects * 1024;

#ifdef SDCARD_DEBUG
	printf(
		"CSD Register: 0x%08x%08x%08x%08x\n"
		"Max data transfer rate: %d MB/s\n"
		"Max read block length: %d bytes\n"
		"Device size: %u sectors (%u GB, %u GiB)\n",

		r[0], r[1], r[2], r[3],

		(int) (r[0] >> 24) & 0xff,

		(1 << ((r[1] >> 16) & 0xf)),

		nsects, (nsects * 512 + 500*1000) / (1000*1000), nsects / (1024*(1024/512))
	);
#endif
}

uint32_t sdcard_numblocks(void)
{
  return sdcard_nsects;
}


/*-----------------------------------------------------------------------*/
/* SDCard user functions                                                 */
/*-----------------------------------------------------------------------*/

int sdcard_init(void) {
	uint16_t rca, timeout;

#ifdef SDCARD_DEBUG
	printf("sdcard_init()\n");
#endif
	sdcard_nsects = 0; //initialize number of sectors

	/* Set SD clk freq to Initialization frequency */
	sdcard_set_clk_freq(SDCARD_CLK_FREQ_INIT, 0);
	busy_wait(1);

	for (timeout=1000; timeout>0; timeout--) {
		/* Set SDCard in SPI Mode (generate 80 dummy clocks) */
		sdphy_init_initialize_write(1);
		busy_wait(1);

		/* Set SDCard in Idle state */
		if (sdcard_go_idle() == SD_OK)
			break;
		busy_wait(1);
	}
	if (timeout == 0)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: timeout at setting SPI Mode\n");
#endif
		return 0;
        }

	/* Set SDCard voltages, only supported by ver2.00+ SDCards */
	if (sdcard_send_ext_csd() != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: SDCard voltages\n");
#endif
		return 0;
        }

	/* Set SD clk freq to Operational frequency */
	sdcard_set_clk_freq(SDCARD_CLK_FREQ, 0);
	busy_wait(1);

	/* Set SDCard in Operational state */
	for (timeout=1000; timeout>0; timeout--) {
		sdcard_app_cmd(0);
		if (sdcard_app_send_op_cond(1) != SD_OK)
			break;
		busy_wait(1);
	}
	if (timeout == 0)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: SDCARD_CLK_FREQ\n");
#endif
	    return 0;
//		printf("*** ignoring SDCARD_CLK_FREQ error ***\n");
//      #warning SDCARD_CLK_FREQ error is being ignored!
        }

	/* Send identification */
	if (sdcard_all_send_cid() != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: sdcard_all_send_cid\n");
#endif
		return 0;
        }

#ifdef SDCARD_DEBUG
	sdcard_decode_cid();
#endif
	/* Set Relative Card Address (RCA) */
	if (sdcard_set_relative_address() != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: set RCA\n");
#endif
		return 0;
        }
	rca = sdcard_decode_rca();

	/* Set CID */
	if (sdcard_send_cid(rca) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: send CID\n");
#endif
		return 0;
        }

#ifdef SDCARD_DEBUG
	/* FIXME: add cid decoding (optional) */
#endif

	/* Set CSD */
	if (sdcard_send_csd(rca) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: send CSD\n");
#endif
		return 0;
        }

	sdcard_decode_csd(); //always performed to get card size

	/* Select card */
	if (sdcard_select_card(rca) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: select card\n");
#endif
		return 0;
        }

	/* Set bus width */
	if (sdcard_app_cmd(rca) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: set bus width *\n");
#endif
		return 0;
        }
	if(sdcard_app_set_bus_width() != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: set bus width **\n");
#endif
		return 0;
        }
/***************************************************

	/* Switch speed */
	if (sdcard_switch(SD_SWITCH_SWITCH, SD_GROUP_ACCESSMODE, SD_SPEED_SDR25) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: switch speed *\n");
#endif
		return 0;
        }

	/* Send SCR */
	/* FIXME: add scr decoding (optional) */
	if (sdcard_app_cmd(rca) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: send SCR *\n");
#endif
		return 0;
        }
	if (sdcard_app_send_scr() != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: send SCR **\n");
#endif
		return 0;
        }

	/* Set block length */
	if (sdcard_app_set_blocklen(512) != SD_OK)
        {
#ifdef SDCARD_DEBUG
		printf("sdcard_init error: set block length\n");
#endif
		return 0;
        }

#ifdef SDCARD_DEBUG
        printf("sdcard_init: OK\n");
#endif

	return 1; //1=OK
}

#ifdef CSR_SDBLOCK2MEM_BASE

void sdcard_read(uint32_t block, uint32_t count, uint8_t* buf)
{
#ifdef SDCARD_DEBUG
	printf("sdcard_read: block=%lu, count=%ld, buf=%p\n", block, count, buf);
#endif
	while (count) {
		uint32_t nblocks;
#ifdef SDCARD_CMD18_SUPPORT
		nblocks = count;
#else
		nblocks = 1;
#endif
		/* Initialize DMA Writer */
		sdblock2mem_dma_enable_write(0);
		sdblock2mem_dma_base_write((uint64_t)(uintptr_t) buf);
		sdblock2mem_dma_length_write(512*nblocks);
		sdblock2mem_dma_enable_write(1);

		/* Read Block(s) from SDCard */
#ifdef SDCARD_CMD23_SUPPORT
		sdcard_set_block_count(nblocks);
#endif
		if (nblocks > 1)
			sdcard_read_multiple_block(block, nblocks);
		else
			sdcard_read_single_block(block);

		/* Wait for DMA Writer to complete */
		while ((sdblock2mem_dma_done_read() & 0x1) == 0);

		/* Stop transmission (Only for multiple block reads) */
		if (nblocks > 1)
			sdcard_stop_transmission();

		/* Update Block/Buffer/Count */
		block += nblocks;
		buf   += 512*nblocks;
		count -= nblocks;
	}

#ifndef CONFIG_CPU_HAS_DMA_BUS
	/* Flush caches */
	flush_cpu_dcache();
	flush_l2_cache();
#endif
}

#endif

#ifdef CSR_SDMEM2BLOCK_BASE

void sdcard_write(uint32_t block, uint32_t count, const uint8_t* buf)
{
#ifdef SDCARD_DEBUG
	printf("sdcard_write: block=%lu, count=%ld, buf=%p\n", block, count, buf);
#endif
	while (count) {
		uint32_t nblocks;
#ifdef SDCARD_CMD25_SUPPORT
		nblocks = count;
#else
		nblocks = 1;
#endif
		/* Initialize DMA Reader */
		sdmem2block_dma_enable_write(0);
		sdmem2block_dma_base_write((uint64_t)(uintptr_t) buf);
		sdmem2block_dma_length_write(512*nblocks);
		sdmem2block_dma_enable_write(1);

		/* Write Block(s) to SDCard */
#ifdef SDCARD_CMD23_SUPPORT
		sdcard_set_block_count(nblocks);
#endif
		if (nblocks > 1)
			sdcard_write_multiple_block(block, nblocks);
		else
			sdcard_write_single_block(block);

		/* Stop transmission (Only for multiple block writes) */
		sdcard_stop_transmission();

		/* Wait for DMA Reader to complete */
#ifdef SDCARD_DEBUG
    	//printf("sdcard_write: waiting DMA...\n");
#endif
		while ((sdmem2block_dma_done_read() & 0x1) == 0);

#ifdef SDCARD_DEBUG
    	printf("sdcard_write: DMA done!\n");
        printf("final DMA offset %u\n", sdmem2block_dma_offset_read());
#endif



		/* Update Block/Buffer/Count */
		block += nblocks;
		buf   += 512*nblocks;
		count -= nblocks;
	}
}
#endif

/*-----------------------------------------------------------------------*/
/* SDCard FatFs disk functions                                           */
/*-----------------------------------------------------------------------*/
#if MICROPY_VFS_FAT
#else

static DSTATUS sdcardstatus = STA_NOINIT;

static DSTATUS sd_disk_status(BYTE drv) {
#ifdef SDCARD_DEBUG
	printf("SPI disk_status: dvr=%p\n", drv);
#endif
	if (drv) return STA_NOINIT;
	return sdcardstatus;
}

static DSTATUS sd_disk_initialize(BYTE drv) {
#ifdef _DEBUG
	printf("disk_initialize: dvr=%p\n", drv);
#endif
	if (drv) return STA_NOINIT;
	if (sdcardstatus)
		sdcardstatus = sdcard_init() ? 0 : STA_NOINIT;
	return sdcardstatus;
}

static DRESULT sd_disk_read(BYTE drv, BYTE *buf, LBA_t block, UINT count) {
#ifdef _DEBUG
	printf("disk_read: dvr=%p, buf=%p, sector=%d count=%d\n", drv, buf, block, count);
#endif
	sdcard_read(block, count, buf);
	return RES_OK;
}

static DISKOPS SdCardDiskOps = {
	.disk_initialize = sd_disk_initialize,
	.disk_status = sd_disk_status,
	.disk_read = sd_disk_read,
};

void fatfs_set_ops_sdcard(void) {
	FfDiskOps = &SdCardDiskOps;
}

#endif // MICROPY_VFS_FAT

#endif /* CSR_SDCORE_BASE */
