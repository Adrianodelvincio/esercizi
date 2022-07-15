#include <iostream>
#include <fstream> // for both reading and writing in a file
#include <string>
using namespace std;

int main()	{
	ofstream Afile; // creating a new object file
	Afile.open("Filename.txt") ; // opening a file in modality writing, attention: don't use ios::in or the file won't open
	//Are we sure we opened the file ?
	if(!Afile.is_open()) { cout<< "Something is Wrong!" <<endl;}
	Afile << "It's possible to write in a file.\n";
	Afile.close(); // now it's simple;
	
	/*Writing other stuff*/
	
	if(Afile.is_open()){
		Afile << "A new line.\n";
		Afile.close();
	}
	else cout << "There are problems.\n";
	
	Afile.open("Filename.txt", ios::app); //vogliamo aggiungere in fondo
	if(Afile.is_open()){
		cout<< "Thanks, you open the file "<<endl;
		Afile << "A new line.\n";
		Afile.close();
	}
	else cout << "There are problems.\n";
	return 0;
	
	/*Now reading*/
	string line;
	ifstream Newfile; //attenzione, per leggere abbiamo bisogno di ifstream!!!!
	Newfile.open("Filename.txt");
	if(Newfile.is_open()){
		while( getline(Newfile, line) ){ 
		//copio una riga che leggo dal file nella stringa line!
			cout<< line << '\n';
			}
	}
	
}


