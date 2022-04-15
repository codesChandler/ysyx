#include "sdb.h"
#include <string.h>

#define NR_WP 32

word_t expr(char *e, bool *success);

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].old=0;
    wp_pool[i].new=0;
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
  head=wp_pool;
  if(free_==NULL) assert(0);
  WP *temp=free_;
  free_++;
  return temp;
};

void free_wp(WP *wp){
  if(wp==NULL) assert(0);
  WP *temp=NULL;
  for(temp=wp;temp!=free_;temp++)
    {memcpy(temp,temp+1,sizeof(*temp));
    temp->NO--;
    }
  free_--;
};

void wp_evl(){
  WP *temp=NULL;
  bool *success=false;
  int isChange=0;
  for(temp=head;temp!=free_;temp++){
    temp->new=expr(temp->expr,success);
    if(*success==true && (temp->new != temp->old))
    { isChange=1;
      printf("Hit watchpoint %d at address 0x%p\n",temp->NO,temp);
      printf("expr       = %s\n",temp->expr);
      printf("old value  = 0x%08x\n",temp->old);
      printf("new value  = 0x%08x\n",temp->new);
      printf("program paused\n");
      temp->old=temp->new;
    }
  }
  if(isChange==1) nemu_state.state=NEMU_STOP;
};
