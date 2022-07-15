#include<stdio.h>
#include<stdlib.h>

/* La funzione ricerca è così definita: ha come parametro il puntatore all'array vec, la funzione confronta il valore associato all'indirizzo puntato da vec+j con il valore da ricercare x, se sono uguali assegna 1 al risultato. Tutto questo viene effettuato in un ciclo while per confrontare ogni elemento dell'array vec ad x. */


int main(void){
		int lung,j,x;
		printf("lunghezza array:\n");
		scanf("%d",&lung);
		int vec[lung];
		int *p;
		p=&vec[0];
		printf("inserisci elementi array:\n");
		for(j=0;j<=lung-1;++j){
		scanf("%d",&vec[j]);
		}
		printf("cosa vuoi cercare?:");
		scanf("%d",&x);
		if ((ricerca(p,lung,x)) == 1)
		printf("Il valore è presente \n");
		else 
		printf("il valore è assente \n");
		return 0;
}

int ricerca(int *vec,int lung,int x){
		int j=0; 
		int risultato = 0;
		do{	
			if ( x == *(vec+j)){
				risultato = 1;
			}
			++j;
		} while (j<=lung-1);
		return risultato;
}






