HW_PATH  += $(addprefix -I, $(shell pwd)/hw/alu_ext/div)
HW_PATH  += $(addprefix -I, $(shell pwd)/hw/alu_ext/mul)

VERILATOR_FLAGS += --report-unoptflat