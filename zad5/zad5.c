#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
  FILE *plik= fopen("test.txt", "r");
  FILE *wynik= fopen("wynik.txt", "w");
  int i;
  int tab[1];
  for(i=0; i<=1; i++)
  {
    if(feof(plik)) break;
      fscanf(plik,"%d",&tab[i]);
      printf("%d liczba= %d\n",i+1,tab[i]);
  }

  int *tablica;
  tablica= malloc(tab[0]*sizeof(int));

  srand(time(NULL));
  for(i=0; i<tab[0]; i++)
  {
    tablica[i]=rand()%tab[1];
    fprintf(wynik, "%d liczba w tablicy to %d\n", i+1, tablica[i]);
  }




  fclose(plik);
  fclose(wynik);
  return 0;
}
