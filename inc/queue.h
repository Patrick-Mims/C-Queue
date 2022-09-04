#ifndef QUEUE_H
#define QUEUE_H

typedef struct QUEUE *queue_t;

queue_t new_queue();

void insert_queue();
void display_queue();
int firstItem();
int lastItem();

#endif
