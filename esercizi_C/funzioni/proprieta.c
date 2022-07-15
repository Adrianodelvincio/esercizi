#include<stdio.h>

int prop();
int m, ver, n;//ver prende 1 se la proprietà è vera, 0 al contrario.All'inizio viene passata alla funzione con valore 1, poi ricorsivamente verrà aggiornata. 

int main(void){
	printf("%s","inserisci una sequenza di numeri, se ogni numero è il doppio del precedente la funzione è vera (1) altrimenti è falsa (0)\n");
	scanf("%d",&m); //leggo il primo numero, su questo non devo verificare nessuna proprietà,perciò di default vera
	ver = 1;
	prop();
	if (ver ==1)
		printf("la sequenza inserita verifica la proprietà\n");
	if (ver ==0)
		printf("la sequenza non verifica la proprietà \n");
	return 0;
	}

int prop(){
	if (m==0) {
		return 1;
		}
	scanf("%d",&n);
	if (n == 2*m && n!=0 && ver == 1){
		m = n;
		prop();
		}
	if (n!=2*m && n!=0 ){
// d'ora in poi, l'istruzione sopra verrà ignorata, perchè ver sarà sempre 0, il programma continua a leggere da std input interi, ma l'uscita sarà comunque falsa (0).
		ver = 0;
		m = n;
		prop();
		}
	else {
		return ver;
		}
	}
	
	
	
		

	
