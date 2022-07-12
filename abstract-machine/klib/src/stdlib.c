#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

extern Area heap;
static int init_flag=0;
void *malloc_ptr;

static void ptr_init() {
  malloc_ptr = (void *)ROUNDUP(heap.start, 8);
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()

  if(init_flag==0){
    ptr_init();
    init_flag=1;
  }
  #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  //   panic("Not implemented");
      if(size == 0) return NULL;
    size  = (size_t)ROUNDUP(size, 8);
    char *old = malloc_ptr;
    malloc_ptr += size;
  // return old;
    assert(((uintptr_t)heap.start <= (uintptr_t)malloc_ptr) & ((uintptr_t)malloc_ptr< (uintptr_t)heap.end));
 
    for (uint64_t *p = (uint64_t *)old; p != (uint64_t *)malloc_ptr; p++) {
      assert(p!=NULL);
      *p = 0;
    }
  // // // assert((uintptr_t)hbrk - (uintptr_t)heap.start <= setting->mlim);
    return old;
  #endif
  return NULL;

}

void free(void *ptr) {
}

#endif
