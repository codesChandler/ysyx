CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)
