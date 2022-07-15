#include<stdio.h>

double leggi_da_input (void){
	double tmp;
	printf("Inserisci un double:\n");
	scanf("%lf",&tmp);
	//return tmp;
	}

int main(void){
	double x;
	x = leggi_da_input();
	printf("%lf\n\n",x);
	return 0;
}
