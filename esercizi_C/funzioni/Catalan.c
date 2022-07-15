// generatore numeri di Catalan

#include<stdio.h>

int catalan(int n);

int main(void){
	int tmp, num;
	printf("inserisci il valore di Catalan di interesse\n");
	scanf("%d",&tmp);
	num = catalan(tmp);
	printf("ecco il numero = %d",num);
	}

int catalan(int n){
	if (n > 0)
	return ((4*(n-1)+2)*catalan(n-1))/(n-1+2);
	else 
	return 1;
	}
