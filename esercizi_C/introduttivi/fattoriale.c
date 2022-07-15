#include<stdio.h>
#include<float.h>

int main(void){
	int i,j,k;
	printf("inserisci un numero, calcolerò il suo fattoriale\n");
	scanf("%d",&i);
	for (j=1;j<=i;++j)
		k *= j ;
	printf("il valore del fattoriale è: %d", k);
	return 0;
}


