// This file is Copyright (c) 2021 Victor Suarez Rovere <suarezvictor@gmail.com>
// License: BSD-2-Clause

#ifndef __LITESDK_TIMER_H_
#define __LITESDK_TIMER_H_

#include "liblitesdk/litesdk_csrdefs.h" //should be autogenerated


/*
Basic API
typedef litetimer_value_t

litetimer_set_oneshot_cycles()
litetimer_set_periodic_cycles()
litetimer_start()
litetimer_stop()
litetimer_is_active()
litetimer_is_periodic()
litetimer_get_value_cycles()
litetimer_get_value_ms()
litetimer_get_value_us()
litetimer_get_value_ns()
litetimer_get_frequency()

litetimer_freq_to_cycles()
litetimer_freqf_to_cycles() //float version
litetimer_ns_to_cycles()
litetimer_us_to_cycles()
litetimer_ms_to_cycles()
litetimer_cycles_to_ns()
litetimer_cycles_to_us()
litetimer_cycles_to_ms()

*/

///////////////////////////////
// TIMER 
///////////////////////////////
#ifdef LITETIMER_ENABLED


//conversion functions
#define LITETIMER_BASE_FREQUENCY CONFIG_CLOCK_FREQUENCY
#define LITETIMER_BASE_FREQUENCY64 ((uint64_t)LITETIMER_BASE_FREQUENCY)
#define LITETIMER_CYCLES_FROM_FREQ64(f) (litetimer_value_t) (LITETIMER_BASE_FREQUENCY64 / (f))
#define LITETIMER_CYCLES_FROM_PERIOD64(t, divfactor) (litetimer_value_t) (LITETIMER_BASE_FREQUENCY64*(t)/divfactor)
#define LITETIMER_PERIOD_FROM_CYCLES64(c, mult) (litetimer_value_t) (c*(uint64_t)mult/LITETIMER_BASE_FREQUENCY)

//TODO: provide
static inline litetimer_value_t litetimer_freqf_to_cycles(const litetimer_t *tim, float freq)
{
  (void) tim;
  return LITETIMER_CYCLES_FROM_FREQ64(freq);
}

static inline litetimer_value_t litetimer_freq_to_cycles(const litetimer_t *tim, uint32_t freq)
{
  (void) tim;
  return LITETIMER_CYCLES_FROM_FREQ64(freq);
}

static inline litetimer_value_t litetimer_ms_to_cycles(const litetimer_t *tim, uint32_t period_ms)
{
  (void) tim;
  return LITETIMER_CYCLES_FROM_PERIOD64(period_ms, 1000);
}

static inline litetimer_value_t litetimer_us_to_cycles(const litetimer_t *tim, uint32_t period_us)
{
  (void) tim;
  return LITETIMER_CYCLES_FROM_PERIOD64(period_us, 1000000);
}

static inline litetimer_value_t litetimer_ns_to_cycles(const litetimer_t *tim, uint32_t period_ns)
{
  (void) tim;
  return LITETIMER_CYCLES_FROM_PERIOD64(period_ns, 1000000000ull);
}

static inline uint32_t litetimer_cycles_to_ms(const litetimer_t *tim, litetimer_value_t cycles)
{
  (void) tim;
  return LITETIMER_PERIOD_FROM_CYCLES64(cycles, 1000);
}


//getters projectors
/*
static uint32_t litetimer_get_frequency(const litetimer_t *tim)
{
  (void) tim;
  return LITETIMER_BASE_FREQUENCY;
}
*/
#define litetimer_get_frequency(tim) LITETIMER_BASE_FREQUENCY

static inline litetimer_value_t litetimer_get_value_cycles(const litetimer_t *tim)
{
  ((litetimer_t *)tim)->UPDATE_VALUE = 1; //const removal
  return LITETIMER_READ(tim, VALUE);
}


static inline litetimer_value_t litetimer_get_value_ms(const litetimer_t *tim)
{
  return litetimer_cycles_to_ms(tim, litetimer_get_value_cycles(tim));
}

static inline bool litetimer_is_active(const litetimer_t *tim)
{
  return tim->EN;
}

static inline bool litetimer_is_periodic(const litetimer_t *tim)
{
  return !LITETIMER_READ(tim, LOAD); //LOAD is 0 in periodic timers
}

//setters projectors
static inline void litetimer_start(litetimer_t *tim)
{
  tim->EN = 1;
}

static inline void litetimer_stop(litetimer_t *tim)
{
  tim->EN = 0;
}

//needs to be start after call
static inline void litetimer_set_periodic_cycles(litetimer_t *tim, litetimer_load_t cycles)
{
/* As documented on gateware:
   To use the Timer in Periodic mode, the user needs to:
    - Disable the Timer
    - Set the ``load`` register to 0
    - Set the ``reload`` register to the expected period
    - Enable the Timer
*/
  litetimer_stop(tim);
  LITETIMER_WRITE(tim, LOAD, 0);
  LITETIMER_WRITE(tim, RELOAD, cycles);
}

//needs to be start after call
static inline void litetimer_set_oneshot_cycles(litetimer_t *tim, litetimer_load_t cycles)
{
/* As documented on gateware:
   To use the Timer in One-Shot mode, the user needs to:
    - Disable the timer
    - Set the ``load`` register to the expected duration
    - (Re-)Enable the Timer
*/
  litetimer_stop(tim);
  LITETIMER_WRITE(tim, LOAD, cycles);
}

//helpers

static inline void litetimer_init(litetimer_t *tim)
{
  litetimer_stop(tim);
}

static inline void litetimer_deinit(litetimer_t *tim)
{
  litetimer_stop(tim);
}

//lookups base address from a pheripheral id (0, 1, 2...)
static inline litetimer_t *litetimer_instance(litepheripheral_id id)
{
  if(id != 0) //only supports single timer
    return NULL; 
  return (litetimer_t *) CSR_TIMER0_BASE;
}

#endif //LITETIMER_ENABLED

#endif //__LITESDK_TIMER_H_

