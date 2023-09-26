#include <stdio.h>
#include <stdlib.h>

int main()
{
float g, r;
const p=3.141592;

 printf("Introduce un valor para los grados:");
 scanf("%f", &g);
 
 r=g*p/180;
 
 printf("El valor de esos grados en radianes es: %f", r);
 
return 0;
}
