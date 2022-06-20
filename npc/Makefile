ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

FILELIST_MK = $(shell find ./srcs -name "filelist.mk")
include $(FILELIST_MK)

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

INC_PATH = $(WORK_DIR)/include
HW_PATH  = $(addprefix -I, $(WORK_DIR)/hw)
INCLUDES = $(addprefix -I, $(INC_PATH))

DIRS-y = $(WORK_DIR)/srcs
SIM_PATH = $(addprefix -I, $(DIRS-y))
SRCS  = $(shell find $(DIRS-y) -name "*.c")
CPP-SRCS= $(shell find $(DIRS-y) -name "*.cpp")
CC-SRCS= $(shell find $(DIRS-y) -name "*.cc")
SV-SRCS  = $(shell find $(WORK_DIR)/hw -name "*top.sv")
VERILATOR_INPUT = $(SV-SRCS) $(SRCS) $(CPP-SRCS) $(CC-SRCS)  

VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += -Os -x-assign 0
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += $(HW_PATH) $(INCLUDES) $(SIM_PATH)
ifeq ($(MAKECMDGOALS),gdb)
	VERILATOR_FLAGS += --debug
  # VERILATOR_FLAGS += --gdb
	CXXFLAGS += -g
endif
CXXFLAGS += $(INCLUDES)
LIBS += -lreadline
export CXXFLAGS LIBS

BINARY = obj_dir/Vysyx_22040632_top
ARGS_DIFF = -d /home/chandler/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so

default: run

run:$(BINARY)
	$(BINARY) -b $(IMG) -f $(IMG:.bin=.elf) $(ARGS_DIFF)
	@rm -rf logs/annotated
	make clean


# Other targets
gdb: $(BINARY)
	gdb $(BINARY) -b $(IMG) -f $(IMG:.bin=.elf)

wave:
	gtkwave Vysyx_22040632_top.vcd

$(BINARY):
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo + VERILATE "->" $(BINARY) $(VERILATOR_INPUT)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo + BUILD "->" $(BINARY)
	$(MAKE) -j -C obj_dir -f ../Makefile_obj
	@rm -rf logs
	@mkdir -p logs

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir build logs *.log *.dmp *.vpd coverage.dat core
