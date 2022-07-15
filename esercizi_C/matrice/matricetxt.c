#include<stdio.h>
#include<math.h>
#define N 10

int main(void){
	int i,j,n;	
	double A[N][N];
	double B[N][N];
	double sum[N][N];
	double prd[N][N]; 
	for(i = 0;i<N;++i){
		for(j = 0; j<N;++j){	
		scanf("%lf",&A[i][j]);
		}
	}
	for(i = 0;i<N;++i){
		for(j = 0; j<N;++j){	
		scanf("%lf",&B[i][j]);
		}
	}
	for(i=0;i<N;++i){
		for(j=0;j<N;++j){
		sum[i][j]= A[i][j]+B[i][j];
			for(n=0;n<N;++n){
				prd[i][j] += A[i][n]*B[n][j];
			}
		}
	}
	printf("\n la matrice somma è \n");	
	for(i = 0;i<N;++i){
		for(j = 0; j<N;++j){
			switch (j) {
				case 0: printf("|%lf ",sum[i][j]);
					break;
				case N-1: printf("%lf|\n",sum[i][j]);
					break;
				default : printf(" %lf ",sum[i][j]);
			}
		}
	}
	printf("\n la matrice prodotto è:\n");
	for(i = 0;i<N;++i){
		for(j = 0; j<N;++j){
			switch (j) {
				case 0: printf("|%lf ",prd[i][j]);
					break ;
				case N-1: printf("%lf|\n",prd[i][j]);
					break;
				default : printf(" %lf ",prd[i][j]);
			}
		}
	}
	return 0;
}
