#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct Queue
{
  int *data;
  int ptr;
  int size;
};

queue_t new_queue(int size)
{
  queue_t queue;

  if((queue = malloc(sizeof(queue_t))) == NULL) exit(EXIT_FAILURE);

  if((queue->data = malloc(size * sizeof(int))) == NULL)
  {
    free(queue);
    exit(EXIT_FAILURE);
  }

  queue->size = size;
  queue->ptr = 0;

  printf("New Queue Created!\n");

  return queue;
}
