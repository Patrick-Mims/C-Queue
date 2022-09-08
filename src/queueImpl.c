#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct Queue
{
  int *data;
  int firstNode;
  int lastNode;
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

int isQueueFull(queue_t queue)
{
  return (queue->ptr == queue->size);
}

void enqueue(queue_t queue, int item)
{
  if(isQueueFull(queue)) exit(EXIT_FAILURE);

  queue->ptr++;
  queue->data[queue->ptr] = item;

  printf("Item enqueued: %d\n", queue->data[queue->ptr]);
}

void display_queue(queue_t queue)
{
  int i;

  for(i = 0; i < queue->ptr; i++)
    printf("Display-> %d\n", queue->data[queue->ptr]);
}

/*
struct CQueue
{
  int *data;
  int first;
  int front;
  int ptr;
  int size;
};

Queue newQueue(int size)
{
  Queue que;

  if((que = malloc(sizeof(Queue))) == NULL) exit(EXIT_FAILURE);

  que->data = malloc(size * sizeof(int));

  if(que->data == NULL) free(que);

  que->first = 0;
  que->ptr = 0;
  que->size = size;

  printf("Queue Created at size %d\n", size);

  return que;
}

int is_queue_empty(Queue que)
{
  return que->ptr == 0;
}

int is_queue_full(Queue que)
{
  return que->ptr == que->size;
}

void enqueue(Queue que, int item)
{
  if(is_queue_full(que)) exit(EXIT_FAILURE);

  que->data[que->ptr] = item;
  que->ptr++;
}

void display_queue(Queue que)
{
  int i;

  for(i = 0; i < que->ptr; i++)
    printf("Display-> %d\n", que->data[i]);
}

 remove the first element in the queue 
int dequeue(Queue que)
{
  if(is_queue_empty(que))
  {
    printf("The queue is empty, cannot remove an item");
    exit(EXIT_FAILURE);
  }

  que->first = que->data[que->front];
  que->ptr--;
  que->front = que->front + 1;

  return que->first;
}

*/
