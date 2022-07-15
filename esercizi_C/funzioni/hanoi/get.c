#include "hanoi.h"

int get_n_from_user(void){
	int n;
	printf("%s",
		"-----\n"
		"Questa è la torre di hanoi:\n"
		"cerca le regole sulla rete, io risolverò per te la torre.\n"
		"scegli quanto alta la torre vuoi che sia :");
	scanf("%d",&n);
	if (n<=1){
	printf("Devi scegliere almeno 2 dischi!");
	exit(1);
	}
	printf("\n");
	return n;
}
	
