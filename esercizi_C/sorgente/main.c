#include <stdio.h>
#include "somma.h"
int main(void) {
int a, b, c;
scanf("%d %d", &a, &b);
c = somma(a,b);
printf("%d\n", c);
return 0;
}
