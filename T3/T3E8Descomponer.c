#include <stdio.h>
#include <stdlib.h>
/*Código de Alberto Ródriguez Pérez, Descomponer un número entero, 27/09*/
int main()
{
	int x, y;
	printf("Introduce un n%cmero entero para descomponerlo en unidades:", 163);
	scanf("%d",&x);
	 y=x;
	printf("Tu n%cmero descompuesto es:\n", 163);

	printf("Millar:  %d\n",y/1000);
		y=y%1000;
	printf("Centena: %d\n",y/100);
		y=y%100;
	printf("Decena:  %d\n",y/10);
		y=y%10;
	printf("Unidad:  %d", y);
	
	return 0;
}
