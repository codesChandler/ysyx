// #include <proc.h>
// #include <elf.h>
// #include <stdlib.h>

// #ifdef __LP64__
// # define Elf_Ehdr Elf64_Ehdr
// # define Elf_Phdr Elf64_Phdr
// #else
// # define Elf_Ehdr Elf32_Ehdr
// # define Elf_Phdr Elf32_Phdr
// #endif

// extern size_t get_ramdisk_size();
// extern size_t ramdisk_read(void *buf, size_t offset, size_t len);


// static uintptr_t loader(PCB *pcb, const char *filename) {
//   // TODO();
//   int elf_size=get_ramdisk_size();
//   uint8_t buf[elf_size];
//   // printf("elf_size:%d\n",elf_size);
//   int rlen=ramdisk_read(buf,0,elf_size);
//   assert(rlen==elf_size);
//   Elf_Ehdr *Ehdr=(void *)buf;
//   assert(*(uint32_t *)(Ehdr->e_ident) == 0x464C457f);

//   int phentsize=Ehdr->e_phentsize;
//   int phennum=Ehdr->e_phnum;
//   // printf("size:%d\n",phentsize*phennum);
//   Elf_Phdr Phdr[phennum];//=(Elf_Phdr *)malloc(phentsize*phennum);
//   assert(ramdisk_read(Phdr,Ehdr-> e_ehsize,phentsize*phennum)==phentsize*phennum);
//   // printf("I am here-1\n");

//   int filesz=0;
//   for(int i=0;i<phennum;i++){//find max size
//     if(filesz<Phdr[i].p_filesz) filesz=Phdr[i].p_filesz;
//   }
//   uint8_t pbuf[filesz];

//   for(int i=0;i<phennum;i++){

//     if(Phdr[i].p_type == PT_LOAD){

//       assert(ramdisk_read(pbuf,Phdr[i].p_offset,Phdr[i].p_filesz)==Phdr[i].p_filesz);
//       assert(Phdr[i].p_vaddr!=0);
//       printf("Phdr[i].p_vaddr:%x\n",Phdr[i].p_vaddr);
//       memcpy((void *)Phdr[i].p_vaddr,pbuf,Phdr[i].p_filesz);
//       printf("Phdr[i].p_vaddr+Phdr[i].p_filesz:%x\n",Phdr[i].p_vaddr+Phdr[i].p_filesz);
//       assert(Phdr[i].p_vaddr+Phdr[i].p_filesz!=0);
//       memset((void *)Phdr[i].p_vaddr+Phdr[i].p_filesz,0,Phdr[i].p_memsz-Phdr[i].p_filesz);

//     }
//   }
//   // return elf_size;
//   // printf("I am here:%d\n",(unsigned)Ehdr->e_entry);
//   // assert(0);
//   return (uint32_t)Ehdr->e_entry;
// }

// void naive_uload(PCB *pcb, const char *filename) {
//   //uintptr_t entry = (unsigned)(loader(pcb, filename) & 0xFFFFFFFF);
//   uintptr_t entry = loader(pcb, filename);
//   Log("Jump to entry = 0x%p", entry);
//   ((void(*)())entry) ();
// }

#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif
# error unsupported ISA __ISA__
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  // Log("[Loader] ELF file is reading from '%s'.", filename);
  // ELF Header
  Elf_Ehdr *elf = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  ramdisk_read(elf, 0, sizeof(Elf_Ehdr));
  // Check ELF magic number
  Log("elf->e_ident = 0x%p", *(uint32_t *)elf->e_ident);
  assert(*(uint32_t *)elf->e_ident == 0x464C457F);
  // Checl ELF machine
  Log("elf->e_machine = 0x%p", elf->e_machine);
  assert(EXPECT_TYPE == elf->e_machine);
  // Program Header
  Elf_Phdr *phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * elf->e_phnum);
  ramdisk_read(phdr, elf->e_phoff, sizeof(Elf_Phdr) * elf->e_phnum);
  // Analysis of program header table
  for (int i = 0; i < elf->e_phnum; ++i) {
    if (phdr[i].p_type != PT_LOAD) continue;
    ramdisk_read((char*)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_filesz);
    memset((char*)phdr[i].p_vaddr + phdr[i].p_filesz, 0, phdr[i].p_memsz - phdr[i].p_filesz);
  }
  return elf->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}



