#include<stdio.h>
#include<math.h>
int main(void){
	int b = 9457831, a =10000000;
	do {
	a = a > b ? a-b : a;
	b = b > a ? b-a : b;
	} while (b != a);
	printf("MCD è uguale a : %d",a);
	return 0;
}
