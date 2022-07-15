#include <stdio.h>
int main(void) {
	printf("short è lungo %lu.\n", sizeof(short));
	printf("short int è lungo %lu.\n", sizeof(short int));
	printf("signed short è lungo %lu.\n",  sizeof(signed short));
	printf("int è lungo %lu.\n", sizeof(int));
	printf("signed int è lungo %lu.\n", sizeof(signed int));
	printf("long è lungo %lu.\n",  sizeof(long));
	printf("long int è lungo %lu.\n", sizeof(long int));
	printf("signed long è lungo %lu.\n", sizeof(signed long));
	return 0;}
