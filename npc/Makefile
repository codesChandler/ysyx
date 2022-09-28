ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

FILELIST_MK = $(shell find ./srcs -name "filelist.mk")
FILELIST_MK += $(shell find ./vsrc -name "filelist.mk")
include $(FILELIST_MK)

MAKEFLAGS += -j 8

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
HW_PATH  += $(addprefix -I, $(WORK_DIR)/vsrc)
INCLUDES += $(addprefix -I, $(INC_PATH))


DIRS-y = $(WORK_DIR)/srcs
SIM_PATH = $(addprefix -I, $(DIRS-y))
SRCS  = $(shell find $(DIRS-y) -name "*.c" -o -name "*.cpp" -o -name "*.cc")

SVtop-SRCS  = $(shell find $(WORK_DIR)/vsrc -name "*top.sv")
SVother-SRCS  = $(shell find $(WORK_DIR)/vsrc -name "*.sv" -o -name "*.svh")
SVother-SRCS  :=$(filter-out $(SVtop-SRCS),$(SVother-SRCS))

VERILATOR_INPUT = $(SVtop-SRCS) $(SVother-SRCS) $(SRCS)

VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += -Os -x-assign 0
VERILATOR_FLAGS += --trace -sv
VERILATOR_FLAGS += $(HW_PATH) $(INCLUDES) $(SIM_PATH)

ifeq ($(MAKECMDGOALS),gdb)
	 VERILATOR_FLAGS += --debug
#   VERILATOR_FLAGS += --gdb
	 CXXFLAGS += -g
endif

CXXFLAGS += $(INCLUDES)
LIBS += -lreadline -ldl -pie -lSDL2
export CXXFLAGS LIBS

BINARY = obj_dir/Vysyx_22040632_top
ARGS_DIFF = -d /home/chandler/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so

NPCARGS +=-b $(IMG) #binary file
NPCARGS += -f $(IMG:.bin=.elf) #elf file
NPCARGS += $(ARGS_DIFF) #difftest
NPCARGS += -p #batch mode
NPCARGS += -l /home/chandler/ysyx-workbench/npc/logs/npc-log.txt#log file

default: run

run:$(BINARY)
	$(BINARY) $(NPCARGS)
#	make wave


# Other targets
gdb: $(BINARY)
	gdb --args $(BINARY) $(NPCARGS)
	@rm -rf logs/annotated
	make clean

wave:
	gtkwave ./logs/Vysyx_22040632_top.vcd

$(BINARY):$(VERILATOR_INPUT)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo + VERILATE "->" $(BINARY) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
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