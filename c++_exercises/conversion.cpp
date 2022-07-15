#include <iostream>


int main(){
	uint32_t * value;
	*value = 100;
	double a = 1/static_cast<double>(*value);
	std::cout << "double is " << a <<std::endl;
return 0;}
