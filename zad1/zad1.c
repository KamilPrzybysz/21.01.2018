#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

  int i;
  for(i=0; i<=argc; i++)
  {
    if(argc == i)
    {
      printf("argc==%d\n", i);
    }
  }

  return 0;
}
