#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
//la funzione riceve una stringa, se è una stringa vuota ritorna 0, se invece la stringa inizia con caratteri tabulazione, spazio o newline avanza s fintanto che non trova un carattere. Appena trovo un carattere aggiorno cnt e avanzo fino al prossimo carattere spazio oppure se arrivo a fine stringa e leggo /0 . A quel punto if si ferma e riparte il ciclo. Ovviamente se arrivo a fine stringa il ciclo while più grande si ferma 

int world_counter(char *s){
	int cnt = 0;
	while( *s != '\0'){
		while(isspace(*s)){ 
		++s;}
		if (*s != '\0'){
		++cnt;
		while (!isspace(*s) && *s != '\0' ){
		++s;}
		}
	}
	return cnt;
}

int main (void){
	int n;
	char *s , c[15];
	s = malloc(sizeof(char)*MAX);
	printf("Input a text\n");
	
	do {
	scanf("%s",c);
	if (*c == '0') break;
	char j[15] = " ";
	strcat(j,c);
	strcat(s,j);
	} while (*c != '0');
	
	printf("%s",s);
	n = world_counter(s);
	printf("\nnumber of words: %d",n);
	free(s);
	return 0;
	}
