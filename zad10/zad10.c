#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct osoba
{
  int wiek;
  int pensja;
}osoba;

void printDat(osoba *osoba)
{
  printf("wiek: %d, pensja: %d\n",osoba->wiek,osoba->pensja);
}

int main(int argc, char const *argv[]) {


  osoba osoba1;
  osoba *wieleOsob;
  osoba1.wiek = 20;
  osoba1.pensja = 10000;
  printf("wiek: %d, pensja: %d\n",osoba1.wiek,osoba1.pensja);

  /*Tablica dat*/
  wieleOsob = (osoba*) malloc(5*sizeof(osoba));
  if(wieleOsob == NULL)
  {
    perror("Error in malloc");
  }
  wieleOsob[0].wiek=20;
  wieleOsob[0].pensja=2000;


  scanf("%d %d",&wieleOsob[1].wiek,&wieleOsob[1].pensja);


  scanf("%d %d",&wieleOsob[2].wiek,&wieleOsob[2].pensja);


  scanf("%d %d",&wieleOsob[3].wiek,&wieleOsob[3].pensja);


  scanf("%d %d",&wieleOsob[4].wiek,&wieleOsob[4].pensja);



  printDat(wieleOsob[0]);
  printDat(wieleOsob[1]);
  printDat(wieleOsob[2]);
  printDat(wieleOsob[3]);
  printDat(wieleOsob[4]);


  return EXIT_SUCCESS;
}
