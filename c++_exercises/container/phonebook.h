#include <iostream>
#include <string.h>
#include <vector>
#include <stdexcept>
class Telephone_num{
		public:
		Telephone_num(const char * p_name, const char * p_sur , const int & p_tel , const char * p_email){
		strcpy(name,p_name) ; strcpy(surname, p_sur); telephone = p_tel ; strcpy(email,p_email);
		}
		void Print(){
		std::cout << "user : "<< name << " " << surname << " " << telephone << " email " << email << std::endl; 
		}
		char* Name(){return name;}
		private: 
		char name[15] , surname[15];
		int telephone; 
		char email[25];
};

class Phonebook {
	public:
	Phonebook(int len): lenght(len) {}
	void assign(const Telephone_num & add ){ //assegnare i numeri
	book.push_back(add);
	}
	std::vector<Telephone_num> * give(){ return index;} // restituisco all'esterno un puntatore all'elenco telefonico
	Telephone_num*  element(int i){return &book[i];}    // ritorno l'elemento i-esimo dall'elenco
	
	std::vector<Telephone_num>::iterator Find(const char * st){
		std::vector<Telephone_num>::iterator it; 
		for(it = index->begin() ; strcmp(it->Name(), st) != 0;  ++it){
			if (it == index->end()){
			throw std::invalid_argument("Name not in the catalog");
			}
		}
		return it;
	}
	private:
	int lenght;
	std::vector<Telephone_num> book; //qui definisco il container	
	std::vector<Telephone_num> * index = &book; // puntatore al container, lo inizializzo


};


