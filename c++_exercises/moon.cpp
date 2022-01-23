# include <iostream>
// la distanza terra luna convertita da miglia a kilometri

int main(){
	const int moon = 238857;
	std::cout <<"La distanza terra luna è " << moon;
	int moon_kilo = moon*1.609;
	std::cout <<" In km è pari ad " << moon_kilo;
	std::cout <<" km."<< std::endl;
	return 0;
}
