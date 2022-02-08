#include <iostream>
#include <string.h>

// Adesso usiamo un modo mai visto prima di definire la cose, parola chiave enum: ogni oggetto dentro le parentesi è un tipo, che prendono un insieme di valori interi costanti, la coppa nome costante costituisce l'enumeratore


enum support {ta, ra , fellowship, other};
enum year {fresh, soph, junior, senior, grad};

class student{
	public: 
		student(const char* nm, int id, double peso, year x){
		char t[10] = "Anto";
		strcpy(name,t); 
		student_id = id; gpa = peso; y = x;
		}
		void print();
	private:
		int student_id;
		double gpa;
		year   y;
		char   name[30]; 
	};
/*
class grad_student: public student {
	public:
		grad_student(char* nm, int id, double peso, year x, support t, char* d, char* th);
		void print();
	private:
		support s;
		char depth[10];
		char thesis[80];		
};
*/
int main(){
	const char name[30] = {"Nazzareno"};
	student  Nazzareno(name, 568226, 73, year::junior);
	return 0;}
