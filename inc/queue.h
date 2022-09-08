#ifndef QUEUE_H
#define QUEUE_H

/* Incomplete Type */
typedef struct Queue *queue_t;

queue_t new_queue();

void dequeue(queue_t);
void enqueue();
void display_queue(queue_t);
int isQueueFull();
int isQueueEmpty();

#endif
