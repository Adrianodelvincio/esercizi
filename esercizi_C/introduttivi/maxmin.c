/* calcolo massimo, minimo, somma, media e stampo su st output */

#include<stdio.h>
#include<float.h>
int main(void){
	int i=1 , n;
	double max= DBL_MIN , tmp;
	double min= DBL_MAX ,sum;
	printf("Quanti numeri valori vuoi inserire?\n");
	scanf("%d",&n);
	while(i<=n){
		printf("inserisci un numero:\n");
		scanf("%lf",&tmp);
		if(max<=tmp) 
			max = tmp ;
		if(min>=tmp) 
			min = tmp;
		sum += tmp;
		++i ; 
		}
	printf("il massimo è: %lf \n il minimo è: %lf \n e la somma è    %lf",max,min,sum);
	return 0;
}
	
	
	
	
	
