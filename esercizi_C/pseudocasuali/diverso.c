#include "casual.h"

int main(void){
	int j,seed,i;
	printf("inserisci N interi casuali da generare e il seme della sequenza");
	scanf("%d %d",&j,&seed);
	int n[j];
	srand(time(NULL));
	for(i=0;i<j;++i){
		n[i]=rand();
		printf(" %d ",n[i]);
	}
	return 0;
}
