#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef struct lista_d{
	double val;
	struct lista_d * next;
	}lista_d_t ;

void print_list(lista_d_t *);
void  free_lista(lista_d_t *);
int verifica(lista_d_t *);

int main(void){
	//ho definito il tipo lista, creo adesso oggetto lista di quel tipo
	lista_d_t * lista = NULL;
	lista_d_t * elem; double valore;
	//attacco in testa
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
	elem->next = lista;
	lista = elem;
	}
	}while(true);
	print_list(lista);
	int k = verifica(lista);
	if (k == false)
		printf("False!");
	else{
		printf("True");
	}
	free(lista);
	}

int verifica(lista_d_t *l){
	lista_d_t * p, *q ;
	if (l == NULL)
		return true;
	q = l;
	p = l->next;
	if (p == NULL)
		return true;
	else{
	if (p != NULL && p->val == 2*q->val)
		verifica(p->next);
	else{
	return false;}
	}
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

void free_lista(lista_d_t * l){
	if (l == NULL) return;
	free_lista(l->next);
	free(l);
}
