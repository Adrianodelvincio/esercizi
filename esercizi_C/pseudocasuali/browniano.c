#include "casual.h"

double xmove(void);
double ymove(void);
int A0,B0, total; // total conta i movimenti effettuati.


int main(void){
	double X,Y; 		//definisco la posizione iniziale della particella
	printf("Initial position of the particle\n");
	scanf("%lf %lf",&X,&Y);
	double lim_x,lim_y;	//definisco bordi della scatola
	printf("define x and y limits\n");
	scanf("%lf %lf",&lim_x,&lim_y);
	printf("inserisci il seed per i due generatori pseudocasuali \n");
	scanf("%d",&A0); 
	scanf("%d",&B0);
	do{
	X += xmove();
	// printf(" %lf ",xmove());   if you want to visualize 					      movements, remove the comments
		if (X>0 && X<lim_x){
			Y += ymove();
	//		printf(" %lf ",xmove());
		}
	}while(X>=0 && X<= lim_x && Y>=0 && Y<=lim_y);
	printf("final position: X = %lf Y = %lf \n",X,Y);
	printf("i movimenti effettuati dalla particella : %d",total);
	return 0;
	}
	

double xmove(void){
	static int c=0;
	double x;
	if (c==1){
	srand(A0);
	}
	x = -1+rand()/(RAND_MAX+1.0) +rand()/(RAND_MAX+1.0);
	c++,total++;
	return x;
	}

double ymove(void){
	static int c=0;
	double y;
	if (c==1){
	srand(B0);}
	y = -1+rand()/(RAND_MAX+1.0) + rand()/(RAND_MAX+1.0);
	c++,total++;
	return y;
	}
		

