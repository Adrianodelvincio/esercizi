#include <iostream>
#include <string.h>

/*Adesso vediamo come funziona il costruttore, è utile quando si ha a che fare con memoria allocata dinamicamente, che va inizializzata e poi naturalmente deallocata. La deallocazione avviene con il distruttore*/

class string {
	public: 
	// Qui mettiamo il costruttore, e allochiamo dimanicamente memoria per le stringhe
		string(int n) {s = new char[n+1]; len = n;}// costruttore eccolo qui, new serve ad allocare memoria per un certo tipo di dato specificato dopo dalla definizione (tipo int, double... char in questo caso) nota che il costruttore HA LA STESSO NOME DELLA CLASSE
		void assign(const char* st){ strcpy(s,st); len = strlen(st);}
		int lenght() {return len;}
		void print(){std::cout << s << std::endl;}
		// ora inserisco il distruttore della classe string, quando ho finito devo deallocare e distruggere tutto
		~string() {delete []s;}
	private: 
		int len; char* s;	
};

int main(){
	string prima(30), seconda(40);
	prima.assign("U calippo te piace? E piglia t'ill");
	prima.print();
//	prima.~string(); si chiama così, ma non + necessario, con new la funzione sarà chiamata alla fine del blocco, perciò dealloco automaticamente, però il costruttore va definito
	prima.print();
	return 0;}
