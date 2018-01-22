#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int a,b,c;
  scanf("%d %d", &a, &b);
  c=a%b;
  int wynik=(a*b)/c;
  printf("NWW a i b= %d\n", wynik);

  return 0;
}
