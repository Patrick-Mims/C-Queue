#include <stdio.h>
#include <stdlib.h>

#include "email.h"
#include "queue.h"

#define INDEX 100

void email()
{
  FILE *fp = NULL;
  const int size = 100;
  char line[INDEX] = {0};

  if((fp = fopen("MOCK_DATA.csv", "r")) == NULL)
  {
    printf("File Doesn't Exist");
    exit(EXIT_FAILURE);
  }

  printf("Fetching email...\n");

  while(fgets(line, size, fp))
  {
    printf("%s", line);
  }

  fclose(fp);
}
