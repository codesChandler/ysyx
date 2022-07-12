#include <proc.h>
#include <elf.h>

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
  uint8_t *buf[elf_size];
  assert(ramdisk_read(buf,0,elf_size)==elf_size);
  Elf_Ehdr *Ehdr=(void *)buf;
  int phentsize=Ehdr->e_phentsize;
  int phennum=Ehdr->e_phnum;
  Elf_Phdr *Phdr[phennum];
  assert(ramdisk_read(Phdr,Ehdr-> e_ehsize,phentsize*phennum)==phentsize*phennum);
  
  return Ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

