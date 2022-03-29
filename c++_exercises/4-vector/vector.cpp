#include <iostream>
#include <math.h>
#include <stdlib.h>
template <class T> 
class fourvector{
	public:
		//definire qui le funzioni che userai nelle classi derivate, come virtual + function
		virtual void Print() { std::cout << "unknown" << std::endl;}; 
		
		//setting the compontents
		fourvector() {} //inizializzo senza componenti
		fourvector(const T &px, const T &py, const T &pz,const T &energy) {//costruire le componenti subito con instanza 
		Px = px ; Py = py ;
		Pz = pz ; E = energy;
		if(energy < pow(px,2) + pow(py,2) + pow(pz,2)){ // controllo energia ben definita
			perror("massa negativa, errore");
			exit(1);
			}
		}
		//se volessi modificare le componenti successivamente
		void setComponet(const T &px, const T &py, const T &pz,const T &energy){
		Px = px ; Py = py ;
		Pz = pz ; E = energy;
		if(energy < pow(px,2) + pow(py,2) + pow(pz,2)){ // controllo energia ben definita
			perror("massa negativa, errore");
			exit(1);
			}
		} 
		//defining the transverse impulse along a specified direction : P - (P dot x)P
		void Transverse(const T &x, const T &y, const T &z){
		T norm = sqrt(x*x + y*y + z*z); 
		T scalar = Px*x + Py*y + Pz*z ;
		T vec[3] = {Px - (scalar)*(x/(pow(norm,2))), Py - (scalar)*(y/pow(norm,2)), Pz - (scalar)*(z/pow(norm,2))};
		//now printing the result of the transverse momentum
		for(int i = 0 ; i <3 ; i++){
			std::cout << vec[i]<<" ";
			}
		}
		
		//now printing beta-velocity of the particle
		T beta(){return (Px*Px + Py*Py + Pz*Pz)/E;}
		
		T xComponent(){return Px;} ; T yComponent(){return Py;} ; T zComponent(){return Pz;}; T Energy(){return E;}
		T mass() {return sqrt(pow(E,2) - pow(Px,2) - pow(Py,2) - pow(Pz,2));}
		//variabili della classe
		private: 
		T Px; T Py;T Pz; T E; 
		
};

template <class T> // non è strettamente necessario usare un template con la classe derivata particle
class Particle : public fourvector<T> { //qui specifico il template di fourvector per la classe derivata
	public :
		//assegno le variabili interne alla clase derivata Particle
		Particle(int a, int b , const T &px, const T &py, const T &pz,const T &energy): id(a), tau(b) , fourvector<T>(px,py,pz,energy) {} 
		void Print(){ std::cout << "vita media: "<< tau << std::endl;}
		int id , tau ;
};

//adesso usiamo il quadrivettore con le componenti in coordinate sferiche
template <class T>
class Roetaphi{
	public:
	Roetaphi(const T & ro, const T & theta , const T & phi,const T & e): Ro(ro), Theta(theta) , Phi(phi), E(e) {}
	T px() {return  Ro*sin(Theta)*cos(Phi);}
	T py() {return  Ro*sin(Theta)*sin(Phi);}
	T pz() {return  Ro*cos(Theta);}	
	// facciamo il cast, cioè mettiamo un modo di passare da sferiche a cartesiane(non si può fare il contrario)
	operator fourvector<T> const (){ return fourvector<T>(px(),py(),pz(),E);}
	private:
	T Ro, Theta , Phi, E;
};


int main(){
	//inizializzo un quadrivettore
	fourvector<double> pion;
	//leggo dallo standard input le componeti del mio vettore
	double a,b,c,d;
	std::cout<< "fourvector components"<< std::endl;
	std::cin >> a >> b >> c >> d;
	pion.setComponet(a,b,c,d);
	//stampo roba utile
	std::cout <<"x-component "<< pion.xComponent() << std::endl;
	std::cout<< "trasverse component, specify direction" << std::endl;
	std::cin >> a >> b >> c;
	std::cout <<"transverse momentum: "; pion.Transverse(a,b,c);
	std::cout<< ""<< std::endl;
	std::cout<< "velocity of the particle: " << pion.beta() << std::endl;;
	
	// adesso inizializzo un'oggetto di una classe derivata
	fourvector<double> * kaon = new  Particle<double>(10,2,a,b,c,d);
	kaon->Print();
	// adesso inizializzo un quadrivettore con coordinate sferiche
	Roetaphi<double> polar(1,0.5,0.4,19);
	pion = polar;
	//adesso le componenti sono quelle di polar! E' avvenuto il cast
	std::cout <<"x-component "<< pion.xComponent() << std::endl;
	
	delete kaon;
	return 0;
}

