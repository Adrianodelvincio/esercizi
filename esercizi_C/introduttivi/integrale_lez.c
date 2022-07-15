#include<stdio.h>
#include<math.h>
#include<float.h>

double function(double,double,double,double,double);
double integral(double,double,double);

int main(void){ 
	int n,l,nbest;
	double pars1,pars2,pars3,pars4,a,b,x;
	double sum,diff = DBL_MAX,best;
	double analiticvalue;
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
	printf("inserisci il valore analitico\n");
	scanf("%lf",&analiticvalue);
	double integral(double a,double b,double j){
	return (b-a)*function(j,pars1,pars2,pars3,pars4) ;
	}
	for(l=2;l<=n;++l){
		for(x=a;x<b;x=x+(b-a)/l){
			sum += (integral(a,b,x)+integral(a,b,x+(b-a)/l))/(2*l);
		}
		if(fabs(analiticvalue-sum)<diff){
		best=sum;
		nbest=l;
		diff =fabs(analiticvalue-sum);
		} 
	sum = 0;
	}
	printf("l'integrale vale %lf che corrisponde a %d suddivisioni",best,nbest);
	return 0;
}

double function(double x,double a,double b,double c,double d){
	return a*pow(x,3) + b*pow(x,2) + c*x + d;
}

