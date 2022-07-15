#include<stdio.h>

int main(void){
	int i = 0,j=1,n;
	char p,d;
	for(i;i<j;){
		printf("inserisci un carattere : ");
		scanf("%c%c",&p,&d);
		printf("in decimale è : %d \n", p);
		printf("in codice binario è :");
		for(n=0;n<=8;++n){
			if ((1<<n) & p)
				printf("1");
			else 
				printf("0");
			if (n==8)
				printf("\n");
	
		}
	}
	return 0;
}
