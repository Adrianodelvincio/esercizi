#include<stdio.h>

int main(void){
int i=1 , sum = 0 , j;
printf("fino a quale numero vuoi sommare?\n");
scanf("%d",&j);
while(i<=j){
	sum +=i;
	++i;
	}
printf("la somma dei primi 100 numeri è %d",sum);
return 0;
}
	
