#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define LUNG 600
#define Xi -2
#define LARG 250
#define grani 100
#define Yi 1

typedef struct complessi{
	double real;
	double img;
	} complessi_t ;

complessi_t * sum(complessi_t *,complessi_t *);
complessi_t * quadrato(complessi_t *);

int main(void){ 
	int i = 0, r = 10000;
	int l, m; // indici della griglia
	complessi_t * Z, * c ;
	Z = malloc(sizeof(complessi_t));
	c = malloc(sizeof(complessi_t));
	//scorro la griglia di lati 300x200 di estremi -2,1 e 1,-1
		for(l = 0; l <= LARG ; l++){
			printf("\n");
			for(m = 0; m <= LUNG; m++){
			i=0;
	// assegno il valore iniziale del punto 
		c->real = (double) Xi + (m/grani);
		c->img = (double) Yi + (l/grani);	
		Z->real = 0 ; Z->img = 0;
	// calcolo elemento r-1 esimo della successione
				while (i <= r){
				Z = quadrato(Z);
				Z = sum(Z,c);
				if (sqrt(Z->real + Z->img) >= 2.0){
				printf(ANSI_COLOR_GREEN "*" );
				break;
				}
				else if( i == r){
				printf(ANSI_COLOR_RED "*");
				}
				i++;
				}
			}
		}
	free(Z);
	free(c);
	return 0;
	}

//funzioni utili per le operazioni
complessi_t * sum(complessi_t * A,complessi_t * C){
	A->real = A->real + C->real ;
	A->img = A->img + C->img ;
	return A;
	}

complessi_t * quadrato(complessi_t * A){
	A->real = (A->real)*(A->real) - (A->img)*(A->img);
	A->img = 2*(A->real)*(A->img);
	return A;
	}
