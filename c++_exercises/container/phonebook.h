#include <iostream>
#include <string.h>
#include <vector>

class Telephone_num{
		public:
		Telephone_num(const char * p_name, const char * p_sur , const int & p_tel , const char * p_email){
		strcpy(name,p_name) ; strcpy(surname, p_sur); telephone = p_tel ; strcpy(email,p_email);
		}
		void Print(){
		std::cout << "user : "<< name << " " << surname << " " << telephone << " email " << email << std::endl; 
		}
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
	Telephone_num*  element(int i){return &book[i];}
	private:
	int lenght;
	std::vector<Telephone_num> book; //qui definisco il container	
	std::vector<Telephone_num> * index = &book; // puntatore al container, lo inizializzo


};


