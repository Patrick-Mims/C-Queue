#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main(void)
{
  queue_t queue = new_queue(20);

  enqueue(queue, 500);

  display_queue(queue);

  return 0;
}
