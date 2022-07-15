// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	ifstream Afile;
	string line;
	Afile.open("Filename.txt");
	if(Afile.is_open()){
		while( getline(Afile, line) ){ 
		//copio una riga che leggo dal file nella stringa line!
			cout<< line << '\n';
			}
	}
	
}
