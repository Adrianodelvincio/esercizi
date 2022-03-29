#include <iostream>
#include <string.h>

const int max_lenght = 255;

class string {
	public: //accesso universale alla classe
		void assign(const char* st){
			strcpy(s,st); len = strlen(st);}
		int lenghh(){ return len;}
		void print(){ std::cout << s <<"\nlenght: "<< len << "\n";}
	private: //accesso ristretto ai membri della funzione
		char s[max_lenght]; //cosa è s lo faccio ora, le altre sono funzioni e 'vedono' s all'interno della definizione di classe
		int len; 
};

//Test della classe

int main(){
	string one,two;
	char three[40] = {"My name is Adriano."};
	one.assign(three);
	two.assign("Il mio cognome è Del Vincio.");
	one.print();
	two.print();
	return 0;
}
