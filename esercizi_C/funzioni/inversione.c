//stampare una stringa al contrario 

#include<stdio.h>

void contrario(void);

int main(void){
	printf("inserisci una frase:\n");
	contrario();
	printf("\n\n");
	return 0;
}
void contrario(void){
	char c;
	c = getchar();
	if (c != '\n'){
	contrario();}
	putchar(c);
}



