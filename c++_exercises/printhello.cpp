#include <iostream>

#define MIN(a,b) ((a)<(b)?(a):(b)) //qui è definita una direttiva al preprocessore. inizia con define. Il preprocessore è runnato sul codice, prima del compitalore
int main()
{
double score1 , score2 ;
std::cout <<"Give me two numbers" << std::endl; 
std::cin >> score1 >> score2 ;
std::cout <<"Min is " << MIN(score1,score2) << std::endl;
return 0;
}
