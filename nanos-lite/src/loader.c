#include <proc.h>
#include <elf.h>
#include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern size_t get_ramdisk_size();
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

extern int fs_open(const char *pathname, int flags, int mode);
extern size_t fs_read(int fd, void *buf, size_t len);
extern int fs_size(int fd);
extern size_t fs_lseek(int fd, size_t offset, int whence);

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd=fs_open(filename, 0, 0);

  int elf_size=fs_size(fd);
  printf("elf_size:%d\n",elf_size);
  uint8_t buf[elf_size];

  int rlen=fs_read(fd,buf,elf_size);
  assert(rlen==elf_size);

  Elf_Ehdr *Ehdr=(void *)buf;
  assert(*(uint32_t *)(Ehdr->e_ident) == 0x464C457f);

  assert(Ehdr->e_machine == EXPECT_TYPE);

  int phentsize=Ehdr->e_phentsize;
  int phennum=Ehdr->e_phnum;

  Elf_Phdr Phdr[phennum];
  assert(fs_lseek(fd,Ehdr-> e_ehsize,SEEK_SET)==Ehdr-> e_ehsize);
  assert(fs_read(fd,Phdr,phentsize*phennum)==phentsize*phennum);

  for(int i=0;i<phennum;i++){

    if(Phdr[i].p_type == PT_LOAD){

      assert(fs_lseek(fd,Phdr[i].p_offset,SEEK_SET)==Phdr[i].p_offset);
      assert(fs_read(fd,(void *)Phdr[i].p_vaddr,Phdr[i].p_filesz)==Phdr[i].p_filesz);

      memset((void *)Phdr[i].p_vaddr+Phdr[i].p_filesz,0,Phdr[i].p_memsz-Phdr[i].p_filesz);

    }
  }

  return (uint32_t)Ehdr->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  //uintptr_t entry = (unsigned)(loader(pcb, filename) & 0xFFFFFFFF);
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%p", entry);
  ((void(*)())entry) ();
}

