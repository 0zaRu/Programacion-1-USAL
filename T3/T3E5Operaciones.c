#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Código de Alberto Rodríguez Pérez 27/09 T3E5*/

int main(void)
{
	float x, y;

	 printf("Introduce un n%cmero mayor que 0: ", 163);
	 scanf("%g", &y);
	  x=y;
	 printf("\nEl n%cmero introducido es: 	%g", 163, x);

	  x=pow(y,2); /*serviría y*y */
	 printf("\nEl n%cmero al cuadrado es: 	%g", 163, x);

	  x=pow(y,3); /*serviría y*y*y */
	 printf("\nEl n%cmero al cubo es:		%g", 163, x);
	 
	  x=log(y);
	 printf("\nSu logaritmo neperiano es:	%g", x);

	  x=log10(y);
	 printf("\nSu logaritmo decimal es: 	%g", x);

	  x=sqrt(y);
	 printf("\nSu ra%cz cuadrada es:		%g", 161, x);

	return 0;
}
