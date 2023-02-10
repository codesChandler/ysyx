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
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_22040632_top \
	Vysyx_22040632_top___024root \
	Vysyx_22040632_top___024root__1 \
	Vysyx_22040632_top___024root__2 \
	Vysyx_22040632_top___024root__3 \
	Vysyx_22040632_top___024unit \
	Vysyx_22040632_top_ysyx_22040632_divif \
	Vysyx_22040632_top_ysyx_22040632_mulif \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__1 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__2 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__3 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__4 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__5 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__6 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__7 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__8 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__9 \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__10 \
	Vysyx_22040632_top_ysyx_22040632_if2id \
	Vysyx_22040632_top_ysyx_22040632_id2ex \
	Vysyx_22040632_top_ysyx_22040632_ex2mem \
	Vysyx_22040632_top_ysyx_22040632_ex2if \
	Vysyx_22040632_top_ysyx_22040632_mem2wb \
	Vysyx_22040632_top_ysyx_22040632_wb2id \
	Vysyx_22040632_top_ysyx_22040632_id2if \
	Vysyx_22040632_top_ysyx_22040632_mem2clint \
	Vysyx_22040632_top_ysyx_22040632_if2ic \
	Vysyx_22040632_top_ysyx_22040632_mem2dc \
	Vysyx_22040632_top_ysyx_22040632_axiif \
	Vysyx_22040632_top_ysyx_22040632_imif \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_22040632_top__ConstPool_0 \
	Vysyx_22040632_top___024root__Slow \
	Vysyx_22040632_top___024root__1__Slow \
	Vysyx_22040632_top___024root__2__Slow \
	Vysyx_22040632_top___024unit__Slow \
	Vysyx_22040632_top_ysyx_22040632_divif__Slow \
	Vysyx_22040632_top_ysyx_22040632_mulif__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__1__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__2__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__3__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__4__Slow \
	Vysyx_22040632_top_ysyx_22040632_walloc_32bits__5__Slow \
	Vysyx_22040632_top_ysyx_22040632_if2id__Slow \
	Vysyx_22040632_top_ysyx_22040632_id2ex__Slow \
	Vysyx_22040632_top_ysyx_22040632_ex2mem__Slow \
	Vysyx_22040632_top_ysyx_22040632_ex2if__Slow \
	Vysyx_22040632_top_ysyx_22040632_mem2wb__Slow \
	Vysyx_22040632_top_ysyx_22040632_wb2id__Slow \
	Vysyx_22040632_top_ysyx_22040632_id2if__Slow \
	Vysyx_22040632_top_ysyx_22040632_mem2clint__Slow \
	Vysyx_22040632_top_ysyx_22040632_if2ic__Slow \
	Vysyx_22040632_top_ysyx_22040632_mem2dc__Slow \
	Vysyx_22040632_top_ysyx_22040632_axiif__Slow \
	Vysyx_22040632_top_ysyx_22040632_imif__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_22040632_top__Dpi \
	Vysyx_22040632_top__Trace \
	Vysyx_22040632_top__Trace__1 \
	Vysyx_22040632_top__Trace__2 \
	Vysyx_22040632_top__Trace__3 \
	Vysyx_22040632_top__Trace__4 \
	Vysyx_22040632_top__Trace__5 \
	Vysyx_22040632_top__Trace__6 \
	Vysyx_22040632_top__Trace__7 \
	Vysyx_22040632_top__Trace__8 \
	Vysyx_22040632_top__Trace__9 \
	Vysyx_22040632_top__Trace__10 \
	Vysyx_22040632_top__Trace__11 \
	Vysyx_22040632_top__Trace__12 \
	Vysyx_22040632_top__Trace__13 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_22040632_top__Syms \
	Vysyx_22040632_top__Trace__Slow \
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
	Vysyx_22040632_top__Trace__11__Slow \
	Vysyx_22040632_top__Trace__12__Slow \
	Vysyx_22040632_top__Trace__13__Slow \
	Vysyx_22040632_top__Trace__14__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
