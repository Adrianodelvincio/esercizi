#include<stdio.h>
#include<math.h>
#define N 10

int main(void){
	int i;
	double a[N], filtro;
	printf("inserisci il filtro:\n"); scanf("%lf",&filtro);
	for(i=0;i<10;++i){
		printf("inserisci un numero: \n");
		scanf("%lf",&a[i]);
		a[i]= (a[i]>= filtro) ? a[i] : 0;
		}
	for(i=0;i<10;++i){
		if (a[i] !=0) printf("\n %lf \n",a[i]);
		}
	return 0;
}
	
	

