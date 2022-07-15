#include <iostream>
#include <iomanip>

int main () {
	std::cout<< std::setfill('x') << std::setw(4); // setto con quali caratteri riempire gli output vuoti (attenzione, deve essere un singolo carattere, non una stringa) e quanto voglio ampio l'output
	std::cout<<00<<std::endl;
	return 0;
}
