rm -rf obj_dir/
make -C . -f /home/iamme/litex/litex/build/sim/core/Makefile CC_SRCS="--cc /home/iamme/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv.v --cc /home/iamme/build/sim/gateware/sim.v "    OPT_LEVEL=O3 
