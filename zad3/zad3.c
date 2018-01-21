#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

  char str2[]="-c";
  printf("%s\n",argv[0]);

  if(argc==2)
  {
    if(strcmp(argv[1], str2)!=0)
    {
      printf("Nie użyto opcji -c\n");
    }
    else
      printf("Użyto opcji -c\n");
  }
  else
    printf("Nie użyto opcji -c\n");

    return EXIT_SUCCESS;
}
