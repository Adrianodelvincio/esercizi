#include <iostream>


class Base{
	public: 
	Base(const int & id, const int & numero){ //passare con const significa avere una reference ad un oggetto e non poterlo modificare
		b_id = id ; b_numero = numero;
	}
	void Print(){std::cout <<"id è : "<< b_id << std::endl;}
	private:
	int b_id, b_numero;
};

class Derived : public Base {
	public:
	Derived(int a , int b ): Base(a,b) {d_a = a; d_b = b;} //inizializzo Base e nel costruttore inizializzo variabili della classe derivata
	private:
	int d_a , d_b ;	
	
	
};

int main(){
	Base studente(10,10);
	Base * professore = new Derived(10,10);
	professore->Print();
	delete professore;
	return 0;
}
