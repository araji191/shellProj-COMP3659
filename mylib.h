#include "constants.h"

#ifndef MYLIB_H
#define MYLIB_H 

extern char heap[HEAP_SIZE];
extern char *freep;

char *my_alloc(unsigned int size); 
void my_free_all(void);

#endif
