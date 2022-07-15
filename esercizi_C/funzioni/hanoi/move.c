#include "hanoi.h"

void move(int n, char a,char b,char c){
		if (n==1){
		++cnt;
		printf("%d: move disk %d from tower %c to tower %c \n",cnt,1,a,c);
		}
		else {
			move(n-1,a,c,b);
			++cnt;
			printf("%d: move disk %d from tower %c to tower %c \n",cnt,n,a,c);
			move(n-1,b,a,c);
		}
	}
