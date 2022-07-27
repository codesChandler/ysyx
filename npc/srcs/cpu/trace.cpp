#include "cpu.h"
#include "common.h"
#include "time.h"
#include "debug.h"
#include "autoconfig.h"
#include "ftrace.h"
#include "isa.h"


extern char *strtab;
extern Elf64_Sym *symtab;
extern int nr_symtab_entry;
int space_nr=1;

extern int index_ibuf;//for iringbuf
extern char iringbuf[16][128];
extern int flag_cycle;

char logbuf[128];

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


extern bool g_print_step;

void out_of_bound(paddr_t addr)
{
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
        addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, top->pc);
}

void inst_display(){
  int value=0;
  if (index_ibuf==0) value=15;
  else value=index_ibuf-1;
  printf("*************instructions***************\n");
  for(int i=0;i<16;i++){
    if(i==value) {printf("-->%s\n",iringbuf[i]);
    if(flag_cycle==0) break;}
    else printf("   %s\n",iringbuf[i]);
  }
}

void assert_fail_msg(){
  inst_display();
}
int ftrace_imple(uint32_t inst,uint64_t dnpc,uint64_t pc){
  uint32_t inst_f=inst;
  if(!((SEXTU(BITS(inst_f, 6, 0), 7)==111)||(SEXTU(BITS(inst_f, 6, 0), 7)==103 && SEXTU(BITS(inst_f, 14, 12), 3)==0))){
    return 0;
  }
  uint32_t strindex_low=0;
  uint32_t strindex_high=0;
  for(int i=0;i<nr_symtab_entry;i++){
    if(symtab[i].st_info == 18){//STT_FUNC为2,不知道为啥不对
      if(dnpc>=symtab[i].st_value && dnpc<=symtab[i].st_value+symtab[i].st_size)
        {
          strindex_low=symtab[i].st_name;
          strindex_high=symtab[i+1].st_name;
          printf("0x%lx",pc);//(pc)
          if(inst_f==0x00008067){
            space_nr--;
            for(int i=0;i<space_nr;i++)
              printf(" ");
          printf("ret  [");
          for(int i=strindex_low;i<strindex_high;i++)
            printf("%c",*(strtab+i));   
          printf("@0x%lx]\n",dnpc);}
          else{
          for(int i=0;i<space_nr;i++)
              printf(" ");
            space_nr++;
          printf("call [");
          for(int i=strindex_low;i<strindex_high;i++)
            printf("%c",*(strtab+i));   
          printf("@0x%lx]\n",dnpc);}
    }
  }}
  return 1;
  
}

void trace(char *buf,uint32_t instr,uint64_t pc){
  char *p = buf;
  #pragma GCC diagnostic push//避免报错
  #pragma GCC diagnostic ignored "-Wformat-truncation"
  p+= snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);
  #pragma GCC diagnostic pop
  int ilen = 4;
  int i;
  struct {union {uint32_t val;} inst;} s;
  s.inst.val=instr;
  uint8_t *inst = (uint8_t *)&s.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, buf + sizeof(logbuf) - p,pc, (uint8_t *)&s.inst.val, ilen);
}
