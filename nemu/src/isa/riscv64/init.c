#include <isa.h>
#include <memory/paddr.h>

// word_t mtvec;

extern CSR csrs[CSR_LEN];

word_t csr_index[CSR_LEN]={0x305,0x341,0x300,0x342};
char * csr_char[CSR_LEN]={"mtvec","mepc","mstatus","mcause"};
// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;

  for(int i=0;i<CSR_LEN;i++){
    csrs[i].index=csr_index[i];
    csrs[i].name=csr_char[i];
    if(csr_index[i]==0x300) csrs[i].reg=0xa00001800;
  }

}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
