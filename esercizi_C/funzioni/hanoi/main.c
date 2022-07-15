#include "hanoi.h"

int cnt = 0; // il contantore partirà da zero

int main(void){
	int n; //numero dei dischi
	n = get_n_from_user();
	assert(n > 0);
	move(n,'A','B','C');
	return 0;
}



