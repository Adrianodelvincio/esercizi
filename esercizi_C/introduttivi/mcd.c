#include<stdio.h>
#include<math.h>

int main(void){
	int m,n,mdc;
	printf("inserisci il primo numero\n");
	scanf("%d",&m);
	printf("inserisci il secondo numero\n");
	scanf("%d",&n);
	mdc = m > n ? n : m;
	for (;mdc>1;--mdc)
		if ((m % mdc == 0) && (n % mdc== 0))
			break ;
	printf("MCD di %d e %d = %d\n",n,m,mdc);
	return 0;
}
	
