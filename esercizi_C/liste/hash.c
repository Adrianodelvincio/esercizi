#include<stdio.h>
#include<stdlib.h>
#define true 1


typedef struct lista_d{
	double val;
	struct lista_d * next;
	}lista_d_t ;

void print_list(lista_d_t *);
lista_d_t* remove_lista(lista_d_t *,double);
void  free_lista(lista_d_t *);
int hash(int,int);

int main(void){
	int n,tmp,index;
	int Maxlenght = 1, jmp = 0 ;
	
	printf("Numero valori da inserire : \n");
	scanf("%d",&n);
	lista_d_t ** T, * elem, *p;
	//inizializzo la tabella di hash
	T = malloc(sizeof(lista_d_t*)*n);
	
	// metto a NULL tutti gli elementi
	for(int i=0; i<n; i++) T[i] = NULL;
	
	//leggo ed inserisco i dati
	for(int i=0;i<n;i++){
	elem = malloc(sizeof(lista_d_t));
	scanf("%d",&tmp);
	index = hash(tmp,10);
	elem->val = tmp;
	elem->next = NULL;
	//adesso metto jmp a zero per contare la lunghezza massima delle liste di trabocco
	if (Maxlenght < jmp){ Maxlenght = jmp;}
	// se il posto è vuoto, inserisco l'elemento
	if (T[index] == NULL)
	T[index] = elem ;
	
	else{	jmp = 2;
		// ora p punta la testa della lista di T[index]
		p = T[index];
		//scorro con p gli elementi della lista fino alla coda
		while( p->next != NULL){
		p = p->next;
		++jmp;
		}
		//ora posso attaccare in coda
		p->next = elem ;
		elem->next = NULL;	
	}
	}
	// ora che ho creato la tabella, la stampo
	for (int i = 0; i < n;i++){
	if (T[i] != NULL){ 
	print_list(T[i]);
	free_lista(T[i]);
	}
	}
	printf("\nla lunghezza massima è : %d \n", Maxlenght);
	return 0;
	}

void print_list(lista_d_t * l){
	if (l == NULL){
		return ;}
	printf("%lf--",l->val);
	// quando arrivo alla coda, mi fermo
	if (l->next == NULL){
	return;
	}
	else{
	print_list(l->next);
	}

	}

lista_d_t* remove_lista(lista_d_t * l,double x){
	lista_d_t * p;
	if (l == NULL)
		return l;
	// qui il punto centrale, l'indirizzo del successivo lo darà la funzione in base al fatto che il successivo sia o meno uguale ad x
	l->next = remove_lista(l->next,x);
	if (x == l->val){
		p = l; // ora p punta ad l
		l = l->next; // scorro direttamente all'elemento successivo se l'elemento in cui mi trovo è uguale ad x
		free(p);	
		}
	return l;
	}


void free_lista(lista_d_t * l){
	if (l == NULL) return;
	free_lista(l->next);
	free(l);
}

int hash(int val,int m){
	return val%m ;
}
