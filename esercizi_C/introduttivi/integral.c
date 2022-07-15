#include<stdio.h>
#include<math.h>

double function(double,double,double,double,double);
double integral(double,double,double);

int main(void){
	int n;
	double pars1,pars2,pars3,pars4,a,b,x,sum;
	printf("In quanti intervalli vuoi suddividere il dominio?\n");
	scanf("%d",&n);
	printf("In quale dominio vuoi integrare la funzione?\ninserisci prima l'estremo inferiore e dopo l'estremo superiore \n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	printf("inserisci il termine alla 3° potenza\n");
	scanf("%lf",&pars1);
	printf("inserisci il termine alla 2° potenza\n");
	scanf("%lf",&pars2);
	printf("inserisci il termine alla 1° potenza\n");
	scanf("%lf",&pars3);
	printf(" inserisci il termine noto\n");
	scanf("%lf",&pars4);
	double integral(double a, double b,double j){
	return (b-a)*function(j,pars1,pars2,pars3,pars4) ;
	}
	for(x=a;x<b;x=x+(b-a)/n){
		sum += (integral(a,b,x)+integral(a,b,x+(b-a)/n))/(2*n);
	}
	
	printf("l'integrale vale %lf",sum);
	return 0;
}

double function(double x,double a,double b,double c,double d){
	return a*pow(x,3) + b*pow(x,2) + c*x + d;
}



