#include<stdio.h>
#include<time.h>
#include<float.h>
int fattoriale(int,int*a);
int fattoriale(int n,int *a){
	if (n<= 1)
		return n;
	else
		*a += 1;
		printf("%d",n);
		return n*fattoriale(n-1,a);
}
int main(void){
	int n = 34, a=0;
	double differenza;
	int risultato;
	printf("inserisci il numero di cui vuoi calcolare il fattoriale\n");
	scanf("%d",&n);
	risultato = fattoriale(n,&a);
	printf("il risultato è: %d\n a è %d",risultato,a);
	return 0;
}

