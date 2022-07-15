#include <iostream>
// this program is useful to correctly understand the namespaces.


namespace myVars{
	int a = 1;
	int b = 4;	
	}
	
int main(){
	int *c = &myVars::a;
	std::cout << myVars::b << " "<< *c << std::endl;
	using myVars::a;
	std::cout<< a << std::endl;
}
