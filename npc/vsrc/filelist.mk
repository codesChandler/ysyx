HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/alu_ext/div)
HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/alu_ext/mul)
HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/core)
HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/axi)
HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/cache)
HW_PATH  += $(addprefix -I, $(shell pwd)/vsrc/csr)