#include<stdio.h>
#include<math.h>

int main(void){ 
	int a,b;
	printf("inserisci il primo numero\n");
	scanf("%d",&a);
	printf("inserisci il secondo numero\n");
	scanf("%d",&b);
	do {
	a = a > b ? a-b : a;
	b = b > a ? b-a : b;
	} while (b != a);
	printf("MCD è uguale a : %d",a);
	return 0;
}
