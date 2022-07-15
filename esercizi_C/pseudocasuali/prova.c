#include "casual.h"
double xmove(void);

int main(void){
	int i;
	for(i=0;i<100;++i){
	printf(" %lf ",xmove());
	}
	return 0;
	}
double xmove(void){
	double x; 
	int A0=1;
	static int c=0;
	if (c=0){
	srand(A0);}
	++c;
	x = rand()/(RAND_MAX+1.0) + rand()/(RAND_MAX+1.0);
	return x;
	}
