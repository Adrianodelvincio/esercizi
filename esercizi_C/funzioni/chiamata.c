#include <stdio.h>

int max (int a, int b);
int k = 10;/* var globale */
int main (void){
	//int k=2;
	printf("Il massimo è %d \n", max(10,2));
	printf("Il valore di k è %d \n", k);
	return 0;
	}
int max (int a, int b) {
	k = k + 1;             /* side effect */
	return (a < b)? b : a ;}
