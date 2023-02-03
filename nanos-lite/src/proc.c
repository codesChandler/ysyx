#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;

extern void naive_uload(PCB *pcb, const char *filename);

void switch_boot_pcb() {
  current = &pcb_boot;
}

void hello_fun(void *arg) {
  int j=1;
  while (1) {
    Log("Hello World from Nanos-lite with arg '%c' for the %dth time!", arg, j);
    j ++;
    yield();
  }
}

void context_kload(PCB *pcb, void (*entry) (void *), void *arg){
  Area kstack;
  kstack.start=(void *)(pcb->stack);
  kstack.end=(void*)(pcb->stack+sizeof(pcb->stack));
  kcontext(kstack,entry, arg);
}

extern uintptr_t loader(PCB *pcb, const char *filename);
void context_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Area kstack;
  kstack.start=(void *)(heap.end-sizeof(pcb->stack));
  kstack.end=(void*)heap.end;
  pcb->cp=ucontext(NULL, kstack, (void *)entry);
  pcb->cp->GPRx=(uintptr_t)heap.end;

}

void init_proc() {
  context_kload(&pcb[0], hello_fun, (void *)'A');
  context_uload(&pcb[1], "/bin/pal");
  switch_boot_pcb();

  Log("Initializing processes...");

  // load program here
  // naive_uload(NULL, "/bin/pal");
}

Context* schedule(Context *prev) {
  // save the context pointer
  current->cp = prev;

  // always select pcb[0] as the new process
  current = (current == &pcb[0]) ? &pcb[1] : &pcb[0];

  // then return the new context
  return current->cp;
}


