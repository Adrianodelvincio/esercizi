#include<stdio.h>
#include<math.h>

int main(void){
	int m=10000000,n=9457831,mdc;
	mdc = m > n ? n : m;
	for (;mdc>1;--mdc)
		if ((m % mdc == 0) && (n % mdc== 0))
			break ;
	printf("MCD di %d e %d = %d\n",n,m,mdc);
	return 0;
}
	
