#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue *queue_t;

queue_t new_queue();

void insert_queue();
void display_queue();
int first_item();
int last_item();
int is_queue_empty();

#endif
