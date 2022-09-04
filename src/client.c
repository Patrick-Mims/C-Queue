#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct Queue
{
  int *data;
  int ptr;
  int size;
};

void insert();
void remove();
void first();
void last();
void isEmpty();
void isFull();
