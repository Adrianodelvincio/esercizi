#include<stdio.h>
#include<stdlib.h>
#define MAX 10000

int insert_array(int a[]) {
  int i;
  for (i=0; i<MAX; i++) {
  	 a[i] = rand();
  }
  return MAX;
}


void quicksort(int a[MAX],int primo,int ultimo){
   int i, j, pivot, temp;
/*pivot -- inizialmente il pivot è il primo elemento
primo e ultimo sono le due variabili che servono per scorrere l'array
*/
   if(primo<ultimo){
      pivot=primo;
      i=primo;
      j=ultimo;     
      
      while(i<j){
         while(a[i]<=a[pivot]&&i<ultimo)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){   
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,primo,j-1);
      quicksort(a,j+1,ultimo);
   }
}

int main(){
   int n, *a,i;
   srand(1);
   a= malloc(sizeof(int)*MAX);
   n = insert_array(a); 
   quicksort(a,0,n-1);
//	printf("\n	ordinato\n");
//	for ( i = 0; i < MAX;++i)
//		printf("-%d-",*(a+i));
   return 0;
}
