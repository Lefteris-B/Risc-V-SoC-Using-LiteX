transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+/home/iamme/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog {/home/iamme/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv.v}
vlog -vlog01compat -work work +incdir+/home/iamme/build/terasic_de10lite/gateware {/home/iamme/build/terasic_de10lite/gateware/terasic_de10lite.v}

