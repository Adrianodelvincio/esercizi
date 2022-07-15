#include<stdio.h>
#include<float.h>
#define N 5
int main(void){
	int i = 0;
	double max=0 , tmp = DBL_MIN ;
	while(i < N){
	printf("Inserisci valore %d:",i+1);
	scanf("%lf",&tmp);
	if( max< tmp) max= tmp;
	i--;
	}
	return 0;
}
