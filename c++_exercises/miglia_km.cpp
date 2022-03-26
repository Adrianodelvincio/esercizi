// programma che converte da miglia a kilometri un valore inserito dall'utente.
#include<iostream>

const double m_to_k = 1.609;

inline double convert(double mi){ return mi * m_to_k; } //ricorda di inserire alla fine sempre ; alla fine. Novità di c++ funzione che viene compilata come riga di codice, evita costo chiamata a funzione.
 
int main(){
	double miles;
	do {
	std::cout << "Inserisci la distanza in miglia: ";
	std::cin >> miles;
	std::cout << "In km è " << convert(miles) << " km." << std::endl;
	}while(miles != 0);
	return 0;
}
