#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{


  FILE *plik= fopen(argv[1], "r");

  char a;
  int wynik;
  while(!feof(plik))
  {
      fscanf(plik,"%c", &a);
      wynik++;

  }
  printf("Ilość znaków w pliku %s to %d\n", argv[1], wynik);

  fclose(plik);

  return 0;
}
