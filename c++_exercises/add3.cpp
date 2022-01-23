#include <iostream>

inline void somma3(double& s, int a, int b, int c = 1){//nota che non restituisce nulla, passiamo un valore con l'indirizzo e modifichiamo quello
	s = a + b + c;
}

int main(){
	double score1, score2, score3, sum;
	std::cout <<"inserisci 3 numeri ";
	std::cin >> score1 >> score2 >> score3;
	somma3(sum, score1, score2, score3);
	std::cout<<"\nla somma è :"<< sum;
	somma3(sum, score1,score2);
	std::cout<<"\nla somma dei primi due : "<< sum << std::endl;
	return 0;
} 
