#include "phonebook.h"
#include <iostream>
#include <string.h>
#include <vector>
int main(){
	int a = 0;
	Phonebook utenti(10);
	Telephone_num tommaso("tommaso","Parrini", 334914138,"tommaso.parrini@gmail.com");
	Telephone_num adriano("Adriano","Del Vincio",3347834292,"adriano.delvincio@gmail.com");
	utenti.assign(tommaso); utenti.assign(adriano);
	std::vector<Telephone_num> * index = utenti.give(); // prendo il puntatore all'elenco
	
	for(std::vector<Telephone_num>::iterator it = index->begin() ; it != index->end() ;  it++){
	utenti.element(a)->Print(); //stampo l'elenco
	}
	return 0;
}

