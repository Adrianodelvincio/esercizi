#include <stdio.h>

int main(void) {
  double h,b,A;
  printf("Inserisci la base:");
  scanf("%lf",&b);
  printf("Inserisci l’altezza:");
  scanf("%lf",&h);

  A = h * b;

  printf("L’area e’: %f\n",A);
  return 0;
}
