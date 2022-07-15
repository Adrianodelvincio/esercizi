#include <iostream>

/* will not compile, we are passing a number of type int 10 to a reference, the way this stuff can compile is to make const the second value passed to the function, but then we can not modify it!
void myFunction(int a,int& b ){
	a +=1;
	b+=1 ;
	std::cout<< "it'compiling!" << std::endl;
}

int main() 
{	int numero = 10; int numero2 = 10;	
	myFunction(numero,numero2);
	myFunction(numero,10);
} */

void myFunction(int a,const int& b ){
	a +=1;
	std::cout<< b <<std::endl;
	std::cout<< "it'compiling!" << std::endl;
}

int main() 
{	int numero = 10; int numero2 = 10;	
	myFunction(numero,numero2);
	myFunction(numero,10);
}
