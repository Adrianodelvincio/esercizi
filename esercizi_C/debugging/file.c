#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 5

int z[N+1];
int a[N+1];
int i;
 
void aggiorna (int k);
 
int main(void)
{
  srand(time(NULL));
  i=0;
  while (i<N)
    {
 
      aggiorna(i);
 
      printf("iterazione %d\n",i);
      i++;
    } 
  printf("exiting ...\n"); 
  return 0;
}
 
void aggiorna (int k) {
  a[k]=rand()%2;
  z[k+1]=a[k];
}
