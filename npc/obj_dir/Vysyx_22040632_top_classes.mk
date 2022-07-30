# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_22040632_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_22040632_top \
	Vysyx_22040632_top___024root__DepSet_h0d77cfe8__0 \
	Vysyx_22040632_top___024root__DepSet_h0d77cfe8__1 \
	Vysyx_22040632_top___024root__DepSet_hcf72544e__0 \
	Vysyx_22040632_top___024unit__DepSet_h3c35bba2__0 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__0 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__1 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__2 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__3 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__4 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__5 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__6 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_hd18e4a1e__7 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_22040632_top__ConstPool_0 \
	Vysyx_22040632_top___024root__Slow \
	Vysyx_22040632_top___024root__DepSet_h0d77cfe8__0__Slow \
	Vysyx_22040632_top___024root__DepSet_h0d77cfe8__1__Slow \
	Vysyx_22040632_top___024root__DepSet_hcf72544e__0__Slow \
	Vysyx_22040632_top___024unit__Slow \
	Vysyx_22040632_top___024unit__DepSet_hc0b44804__0__Slow \
	Vysyx_22040632_top_ysyx_22040632_divif__Slow \
	Vysyx_22040632_top_ysyx_22040632_divif__DepSet_h760af837__0__Slow \
	Vysyx_22040632_top_ysyx_22040632_mulif__Slow \
	Vysyx_22040632_top_ysyx_22040632_mulif__DepSet_h6d11eb84__0__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__DepSet_h2c1bd6a0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_22040632_top__Dpi \
	Vysyx_22040632_top__Trace__0 \
	Vysyx_22040632_top__Trace__1 \
	Vysyx_22040632_top__Trace__2 \
	Vysyx_22040632_top__Trace__3 \
	Vysyx_22040632_top__Trace__4 \
	Vysyx_22040632_top__Trace__5 \
	Vysyx_22040632_top__Trace__6 \
	Vysyx_22040632_top__Trace__7 \
	Vysyx_22040632_top__Trace__8 \
	Vysyx_22040632_top__Trace__9 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_22040632_top__Syms \
	Vysyx_22040632_top__Trace__0__Slow \
	Vysyx_22040632_top__Trace__1__Slow \
	Vysyx_22040632_top__Trace__2__Slow \
	Vysyx_22040632_top__Trace__3__Slow \
	Vysyx_22040632_top__Trace__4__Slow \
	Vysyx_22040632_top__Trace__5__Slow \
	Vysyx_22040632_top__Trace__6__Slow \
	Vysyx_22040632_top__Trace__7__Slow \
	Vysyx_22040632_top__Trace__8__Slow \
	Vysyx_22040632_top__Trace__9__Slow \
	Vysyx_22040632_top__Trace__10__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
