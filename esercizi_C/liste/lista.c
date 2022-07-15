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
double max(lista_d_t *l);
lista_d_t * inserisci_ord ( lista_d_t * l, double v);


int main(void){
	//ho definito il tipo lista, creo adesso oggetto lista di quel tipo
	lista_d_t * lista = NULL;
	lista_d_t * elem, *p; double valore;

////////////////////////
// inserzione in coda
	/*
	do{
	printf("Inserisci un valore: \n");
	scanf("%lf",&valore);
	if (valore == 0)	break;
	// adesso inizializziamo elem
	elem = malloc(sizeof(lista_d_t));
	elem->val = valore;
	elem->next = NULL ;
	if ( lista == NULL)
	lista = elem;
	else{
	p = lista;
	while( p-> next != NULL){ // scorro tutti gli indici fino al penultimo, quello prima di NULL.
		p = p->next;}
	p->next = elem;
	elem->next = NULL;
	}
	}while(true);
	*/
/////////////////////////

	
	//inserisco in ordine
	do{
	printf("Input a double:\n");
	scanf("%lf",&valore);
	if (valore == 0.0)
		break;
	lista = inserisci_ord(lista,valore);
	}while(true);

	// adesso stampo la lista
	print_list(lista);
/*	// rimuovo alcuni valori che non mi vanno bene
	double d;
	printf("quale valore vuoi rimuovere? \n");
	scanf("%lf",&d);
	lista = remove_lista(lista,d);
	printf("\n");
	print_list(lista);
	printf("\n");
	d = max(lista);
	printf("max is : %lf\n",d);
*/	free_lista(lista);
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
		free(p); // mi sono liberato del valore	
		}
	return l;
	}


void free_lista(lista_d_t * l){
	if (l == NULL) return;
	free_lista(l->next);
	free(l);
}

double max(lista_d_t*l){
	int i ; lista_d_t * g;
	g = l;
	i = l->val;
	do {
	g = g->next;
	if (i < g->val)
	i = g->val;
	if(g->next == NULL)
		break;	
	}while(true);
	return i;
	}

lista_d_t * inserisci_ord (lista_d_t * l, double v){
	lista_d_t * elem, *p, *q;
	elem = malloc(sizeof(lista_d_t));
	elem->val = v ; 
	elem->next = NULL;
	p = l; //punto la lista con p
	q = NULL;
	if ( l == NULL){
	return elem;
	}
	else{
	// if the value is smaller than all the other
	if( elem->val <= p->val){
	elem->next = l;
	l = elem;
	return l;
	}
	while(p->val < v){
	// if the value is bigger than all the other 
	if ( p->next == NULL){
		elem->next = NULL;
		p->next = elem;
		return l;
		}
	q = p;
	p = p->next;
	}
	// adesso attacco il nuovo valore
	q->next = elem;
	elem->next = p;
	return l;}
		}










