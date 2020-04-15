#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  std::cout << "Hello from Docker!" << std::endl;

  FILE *file = fopen(argv[1], "r");
  char buf[1000];

  while (fgets(buf, 1000, file) != NULL)
  {
    int num = atoi(buf);
    printf("%d\n", num);
  }
  fclose(file);

  return 0;
}