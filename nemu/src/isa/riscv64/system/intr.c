#include <isa.h>
#include <debug.h>

CSR csrs[CSR_LEN];
// word_t csr_index[CSR_LEN]={0x305,0x341,0x300,0x342};
// char * csr_char[CSR_LEN]={"mtvec","mepc","mstatus","mcause"};

word_t csr_r(word_t index){
  for(int i=0;i<CSR_LEN;i++){
    if(index==csrs[i].index)
      return csrs[i].reg;
  }
  panic("no control and statues register:"FMT_WORD,index);
}

void csr_w(word_t index,word_t data){
  for(int i=0;i<CSR_LEN;i++){
    if(index==csrs[i].index){
      csrs[i].reg=data;
      break;
    }
  }
}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  csr_w(MEPC_INDEX,epc);
  csr_w(MCAUSE_INDEX,NO);
  return csr_r(MTVEC_INDEX);
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}


