#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[100];
  int old;
  int new;
  /* TODO: Add more members if necessary */
} WP;
WP* new_wp();
void free_wp(WP *wp);
void wp_evl();
#endif
