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
  int elf_size=get_ramdisk_size();
  uint8_t buf[elf_size];

  int rlen=ramdisk_read(buf,0,elf_size);
  assert(rlen==elf_size);
  Elf_Ehdr *Ehdr=(void *)buf;
  assert(*(uint32_t *)(Ehdr->e_ident) == 0x464C457f);

  int phentsize=Ehdr->e_phentsize;
  int phennum=Ehdr->e_phnum;

  Elf_Phdr Phdr[phennum];
  assert(ramdisk_read(Phdr,Ehdr-> e_ehsize,phentsize*phennum)==phentsize*phennum);


  int filesz=0;
  for(int i=0;i<phennum;i++){//find max size
    if(filesz<Phdr[i].p_filesz) filesz=Phdr[i].p_filesz;
  }
  printf("p_filesz:%d\n",filesz);
  uint8_t pbuf[200];
  // uint8_t *bbuf=pbuf;

  for(int i=0;i<phennum;i++){

    if(Phdr[i].p_type == PT_LOAD){
      // ramdisk_read((void *)Phdr[i].p_vaddr,Phdr[i].p_offset,Phdr[i].p_filesz);
    
      ramdisk_read((void *)pbuf,Phdr[i].p_offset,Phdr[i].p_filesz);
      printf("pbuf:%x\n",pbuf);
      printf("pbuf+1:%x\n",&pbuf[1]);
      memcpy((void *)Phdr[i].p_vaddr,(void *)pbuf,Phdr[i].p_filesz);
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
