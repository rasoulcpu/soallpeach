#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
  int i = 2, result;
  do
  {
    result = n % i;
    if (result == 0)
      break;
    i++;
  } while (n != i);
  if (n == i)
    return 1;
  else
    return 0;
}

int main(int argc, char const *argv[])
{
  //std::cout << "Hello from Docker!" << std::endl;

  FILE *file = fopen(argv[1], "r");
  char buf[1000];

  while (fgets(buf, 1000, file) != NULL)
  {
    int num = atoi(buf);
    printf("%d\n", isPrime(num));
  }
  fclose(file);

  return 0;
}