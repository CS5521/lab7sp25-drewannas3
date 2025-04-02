#include "param.h"

#ifndef _PSTAT_H_
#define _PSTAT_H_

typedef struct {
  int inuse; // whether slot of ptable is in use
  int tickets; // num of tickets process has
  int pid; // pid of each process
  int ticks; // the number of ticks for each process
  char name[16]; // process name
  char state; // E, R, A, S, Z
} pstat_t;

typedef pstat_t pstatTable[NPROC];

void getpinfo(pstatTable *);

#endif // _PSTAT_H_
