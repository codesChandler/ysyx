#ifndef __FTRACE_H__
#define __FTRACE_H__
#include <elf.h>
#include <stdlib.h>

char *strtab = NULL;
Elf64_Sym *symtab = NULL;
int nr_symtab_entry;

#endif