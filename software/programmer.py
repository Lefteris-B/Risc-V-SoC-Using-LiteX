#egbatzo stream programmer using litex\migen 


#just add the bistream with name bitstream.sof 
#inside the current folder/connect the fpga/
#and call this script


from litex.build.altera.programmer import USBBlaster

prog = USBBlaster()
prog.load_bitstream("bitstream.sof")