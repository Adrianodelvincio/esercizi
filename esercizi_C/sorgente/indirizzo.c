#include<stdio.h>
/*
  Valore e indirizzo sono diversi.
*/

int main() {
  double a=60;
  double *p,*q;

  p=&a;

  printf("&a=%x a=%d\n", &a, a);
  printf("&p=%x p=%x\n", &p, p);
  return 0;
}

