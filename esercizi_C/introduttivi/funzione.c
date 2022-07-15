#include<stdio.h>
#include<math.h>

double function(double x);
int main(void){
	int i, k=1;
	double x, f;
	printf("Quanti valori vuoi calcolare?\n");
	scanf("%d",&i);
	while(k<=i){
		printf("inserisci il %d valore:\n",k);
		scanf("%lf",&x);
		f = function(x);
		printf("il risultato è : %lf\n",f);
		++k;
		}
return 0;
}
double function(double x){
	return 3*pow(x,2)+2*x+log(42);
}
	

