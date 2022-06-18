ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS += -cc -exe
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += $(HW_PATH)
SV-SRCS  = $(shell find $(WORK_DIR)/hw -name "*top.sv")
VERILATOR_INPUT = $(SV_SRCS)