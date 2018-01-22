#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int i;
  for(i=1; i<argc; i++)
  {
	printf("%d\n", strlen(argv[i]));
  }

	printf("Liczone bez ./a.out tak jak w przykładzie\n");

  return EXIT_SUCCESS;
}
