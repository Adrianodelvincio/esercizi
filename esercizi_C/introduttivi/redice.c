#include<stdio.h>
#include<math.h>

int main(void){
	double a,x = 1.0;
	printf("scegli un numero di cui vuoi calcolare la radice:\n");
	scanf("%lf",&a);
	printf("il residuo della successione è:\n");
		do { 
		x = (0.5)*(x+a/x);
		printf("--%lf--",fabs(sqrt(a)-x));
		} while (x != sqrt(a));
	printf("Il valore della radice è %lf\n",x);
	return 0;
}
	
	
