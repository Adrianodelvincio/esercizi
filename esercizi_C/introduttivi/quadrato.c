#include <stdio.h>

int main(void) 
{	
	double x,y,z,sum;
	int i;
	double j,m,k;
	printf("inserisci tre numeri\n");
	scanf("%lf%lf%lf", &x, &y, &z);
	j=x,m=y,k=z;
	for (i=1; i<3;i++){
		j *=x  , m *= y, k *= z;
	}
	sum = j+m+k;	
	printf("la somma dei quadrati è %f",sum);
	return 0;
}
