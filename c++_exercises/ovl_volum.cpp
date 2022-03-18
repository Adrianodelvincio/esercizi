#include <iostream>
#include <string.h>
#define PI  3.1415926

// Volume of a cube
int Volume(int s){
	return s*s*s;
}

// volume of cylinder
double Volume(double r, int h){
	return PI*r*r*h;
}

int main(){
	std::cout<< Volume(10) << std::endl;
	std::cout<< Volume(2.5,3)<< std::endl;
	return 0;
}


