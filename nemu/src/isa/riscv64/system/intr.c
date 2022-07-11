#include <isa.h>
#include <debug.h>

CSR csrs[CSR_LEN];

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

word_t csr_r(word_t index){
  for(int i=0;i<CSR_LEN;i++){
    if(index==csrs[i].index)
      return csrs[i].index;
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
