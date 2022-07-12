#include <proc.h>
#include <elf.h>
#include <stdlib.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern size_t get_ramdisk_size();
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  // TODO();
  int elf_size=get_ramdisk_size();
  uint8_t buf[elf_size];
  // printf("elf_size:%d\n",elf_size);
  int rlen=ramdisk_read(buf,0,elf_size);
  assert(rlen==elf_size);
  Elf_Ehdr *Ehdr=(void *)buf;
  int phentsize=Ehdr->e_phentsize;
  int phennum=Ehdr->e_phnum;
  printf("size:%d\n",phentsize*phennum);
  Elf_Phdr Phdr[phennum];//=(Elf_Phdr *)malloc(phentsize*phennum);
  assert(ramdisk_read(Phdr,Ehdr-> e_ehsize,phentsize*phennum)==phentsize*phennum);
  // printf("I am here-1\n");
  for(int i=0;i<phennum;i++){
    printf("for_before;%d\n",i);
    if(Phdr[i].p_type == PT_LOAD){
      printf("for_after%d\n",i);
      uint8_t pbuf[Phdr[i].p_filesz];
      assert(ramdisk_read(pbuf,Phdr[i].p_offset,Phdr[i].p_filesz)==Phdr[i].p_filesz);
    }
  }
  // return elf_size;
  printf("I am here\n");
  while(1);
  return Ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

