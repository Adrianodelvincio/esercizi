#include<stdio.h>
#include<stdlib.h>
#include<float.h>
/* La funzione ricerca è così definita: ha come parametro il puntatore all'array vec; la funzione ricerca l'elemento massimo e minimo dell'array e li restituisce in pindmax pmax e pindmin e pmin*/

void max (double * vec, int lung, double* pmax, double* pmin, double* pindmax, double *pindmin);

int main(void){
		int lung,j; 
		printf("lunghezza array:\n");
		scanf("%d",&lung);
		double *vec;
		vec = malloc(sizeof(double)*lung);
		double pmax,pmin;
		double *pindmax, *pindmin;
		printf("inserisci elementi array:\n");
		for (j=0;j<lung;++j){
		scanf("%lf",&vec[j]);}
		max(vec,lung,&pmax,&pmin,pindmax,pindmin);
		printf("\nil massimo è %lf con indice %x \n",pmax,pindmax);
		printf("il minimo è %lf con indice %x \n",pmin,pindmin);
		free(vec);
	       return 0;
	}

void max (double* vec,int lung,double* pmax,double* pmin,double* pindmax,double* pindmin){
	int i;
 	for(i=0; i<lung;++i){
		if (i == 0){
		*pmax = *vec;
		*pmin = *vec;
		 }
		if (*pmax <= *(vec+i)){	
			*pmax = *(vec+i);
			pindmax = &vec[i];
		}
		if (*pmin > *(vec+i)){
			*pmin = *(vec+i);
			pindmin = &vec[i];
		}
	}
	return ;
}
