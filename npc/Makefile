Vtop.vcd:Vtop
	./obj_dir/Vtop 

Vtop:Vtop.mk
	make -j -C ./obj_dir -f Vtop.mk Vtop

Vtop.mk:
	verilator --cc top.v --trace --exe top_tb.cpp


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave Vtop.vcd 

.PHONY:all

include ../Makefile
