#include <iostream>

/* Vediamo funzionamento di New e Delete per creare un'istanza della classe */

using namespace std;

class Test {
	public:
		Test() { cout<< "created" << this << endl;} // il costruttore crea un puntatore alla classe test e mi stampa indirizzo in memoria
		~Test()  {cout<< "deleting" << this << endl;} //distruggo
	
};

int main(){
	Test a;
	{ 
		Test b;  // inizializzo puntatore all'oggetto
		Test *c = new Test(); // ho inizializzator un puntatore ad un oggetto
		Test *d = new Test();
		delete d; 
		cout<< "--last line of the inner scope" <<endl;
	}
cout<<"last line of the main scope"<<endl; 
}

//nota, nessuno elimina l'istanza *c, che infatti rimane salvata in memoria
