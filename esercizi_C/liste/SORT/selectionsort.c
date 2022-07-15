#include<stdio.h>
#include<stdlib.h>
#define true 1


int * random_array(int );
int minPos(int *v,int from, int to);
void swap(int *,int *);
void selectionsort(int *,int,int);

int main(void){
	int n ;
	int *p;

	printf("Choose array lenght:");
	scanf("%d",&n);

	srand(1);
	p = random_array(n);
	for (int i = 0; i < n;++i)
		printf("-%d-",*(p+i));
	selectionsort(p,0,n);
	printf("\n	ordinato\n");
	for (int i = 0; i < n;++i)
		printf("-%d-",*(p+i));
	return 0;
	}
	

int * random_array(int n){
	int * a;
	a = calloc(n,sizeof(int));
	for(int b = 0; b < n; ++b){
	*(a+b) = rand();
	}
	return a;
	}

//calcola la posizione del minimo
int minPos(int *v,int from, int to){
	int pos = from;
	for(int i = from; i < to ; ++i)
		if ( *(v+i) < *(v+pos) ) //scorro e confronto
			pos = i;
	return pos;
	}

void swap(int *p,int *q){
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
	return;
	}

void selectionsort(int * v, int from,int to){
	if(from <=to ){
	int min;
	min = minPos(v,from,to);
	swap(v+from , v+min);
	selectionsort(v,from+1,to);
	}
	return;
	}



