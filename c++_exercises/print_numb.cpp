#include <iostream>
#include <string.h>

/* Esempio di overloading delle funzioni, il comportamento di una funzione è diverso in base a cosa passo alla funzione! */
class string{
	public: // accesso universale alla classe!
		void assign(const char* st)
			{strcpy(s,st); len = strlen(st);}
		void print(){std::cout << s << "\n Lenght: " << len << "\n";}	
		void print(int n)
		{
		for(int i= 0; i < n; i++)
			std::cout << s << std::endl;
		}
	private:
		char s[100];//cosa è s lo faccio ora, le altre sono funzioni e 'vedono' s all'interno della definizione di classe
		int len ;
};

int main(){
	string one;
	char name[40] = {"il mio nome è nessuno"};
	one.assign(name);
	one.print(3);
	one.print();// se non passo niente, la funzione che eseguo è la prima
	return 0;
} 
