#include <iostream>


class prova{
	public: 
	int a = 5 ;
	void printa(){std::cout<< a << std::endl;}
	void printb(){std::cout<< b << std::endl;}
	private:
	int b = 10;
	
};

int main(){
	prova chiara;
	chiara.printa();
	chiara.printb();
	//std::cout<< chiara.b << std::endl; non potrà mai funzionare
	return 0;
}
