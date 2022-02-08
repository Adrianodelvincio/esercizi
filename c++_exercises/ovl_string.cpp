#include <iostream>
#include <string.h>

/*In questo programma vediamo come effetturare l'overloading di un operatore, cioè l'operatore +, nel caso vogliamo sommare le due stringhe. NOTARE IL PASSAGGIO PER INDIRIZZO DELLE STRINGHE*/

const int max_len = 255;

class string {
	public:
		void assign(const char* st){strcpy(s,st); len = strlen(st);}
		int lenght(){return len;}// questa funzione ritorna la lunghezzza dell'oggetto della classe
		void print(){std::cout << s <<"\nlenght : "<<len<<std::endl;}
		friend string operator+(const string& a, const string& b); //funzione definita con friend, può accedere alle variabili private. Operator fa le veci del nome della funzione, inoltre anche da "fuori" l'operatore + vede cosa c'è dentro una classe e può fare la somma. friend è molto utile 
	private: 
		int len; char s[max_len];
};

//overloading del +
string operator+(const string& a, const string& b){
/*Questa funzione richiede un minimo di spiegazione: passo come variabili alla funzione i puntatori alle stringhe a e b, siccome sono oggetti della classe string, hanno come metodo assign e tutti gli altri. Con questi posso concatenare */
	string temp;
	temp.assign(a.s);
	temp.len = a.len + b.len; // quando chiamo .assign, anche len viene definita, come variabile della classe, prima però devo definire la stringa con assign
	if (temp.len < max_len)
		strcat(temp.s,b.s); // unisco le due stringhe con questa funzione
		/*
		for (int i=0; i < 3 ; i++){
		strcat(temp.s, "Trollolololloloololloollo");
		strcat(temp.s, b.s);
		}*/
	else 
		std::cerr <<"max string lenght exceeded in concatenation.\n";
	return temp; //ritorno alla fine l'oggetto stringa con la stringa concatenata
}
void print(const char* c) //la funzione la definisco nel file direttamente
{std::cout << c << "\nlenght :" << strlen(c) << "\n";}


// adesso utilizzo tutto quanto definito per concatenare due stringhe

int main(){
	string prima, seconda, insieme;
	char three[30] = {"te piace? E piglia t'illo"};
	prima.assign("U' calippo ");
	seconda.assign(three);
	prima.print() ; seconda.print();
	insieme = prima + seconda; // ABBIAMO DEFINITO COSA FA L'OPERATORE +, CONCATENA DUE STRINGHE, UTILISSIMO!!!
	insieme.print();
	return 0;}



