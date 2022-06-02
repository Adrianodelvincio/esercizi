#include "phonebook.h"


int main(){
	int a = 0;
	Phonebook utenti(10);
	
	Telephone_num tommaso("tommaso","Parrini", 334914138,"tommaso.parrini@gmail.com");
	Telephone_num adriano("Adriano","Del Vincio",33434292,"adriano.delvincio@gmail.com");
	Telephone_num filippo("Filippo","Guerri",3425324,"filippo.guerri@stocazzo.com");
	
	utenti.assign(tommaso); utenti.assign(adriano); utenti.assign(filippo);
	std::vector<Telephone_num> * index = utenti.give(); // prendo il puntatore all'elenco
	for(std::vector<Telephone_num>::iterator it = index->begin() ; it != index->end() ;  it++, a++){
	utenti.element(a)->Print(); //stampo l'elenco
	it->Print(); //anche questo è un modo utile di stampare l'elenco, usando direttamente l'iteratore
	}
	std::cout << "Adesso cerco nell'elenco " << std::endl;
	try{
	utenti.Find("Adriano")->Print();}
	catch(std::invalid_argument & e){
	std::cout <<"Name not found" << std::endl; 
	}
	try{
	utenti.Find("Federico")->Print();}
	catch(std::invalid_argument & e){
	std::cerr << e.what() << std::endl;
	}
	
	return 0;
}

