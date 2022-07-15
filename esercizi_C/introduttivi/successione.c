#include<stdio.h>
#include<math.h>

int main(void){
	double a,x = 1.0;
	int h;
	printf("scegli un numero fino a cui vuoi calcolare la radice:\n");
	scanf("%lf",&a);
	for(h=1;h<=a;++h){
		printf("i residui sono:");
		do { 
		x = (0.5)*(x+h/x);
		printf("%lf",fabs(x*x-h));
		} while (fabs(x*x - h) > 1e-10 );
	printf("\nIl valore della radice di %d è %lf\n",h,x);
	}
	return 0;
}
