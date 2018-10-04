#include <stdio.h>
#include <unistd.h>
int main()
{
  printf("hello word!!!");
  fflush(stdout);
  printf("hello word!!!");
  fflush(stdout);
  sleep(3);
  return 0;
}
