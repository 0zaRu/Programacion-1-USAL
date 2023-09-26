#include <stdio.h>

int main(){
	int w, x=14, y=8, *puntero;
	int a[4]={1000, 100, 10, 1};
	
	puntero=&x;
	
	printf("El valor de x es:                            %d", x);
	printf("\nLa direccion de x es:          %p", &x);
	printf("\nLa direccion de y es:          %p", &y);

	printf("\n-----------------------------------------------");

	printf("\nLa direccion del puntero es:            %d", puntero);
	printf("\nDonde apunta el puntero se guarda:           %d", *puntero);
	
	++puntero; /*Al sumar 1, sumas 1 casilla, es decir, 4 bits, asi que el puntero sería igual a y*/
	printf("\nLa direccion del puntero +1 (4bits) es: %d", puntero);

	printf("\n-----------------------------------------------");
	for(w=0; w<4; w++){/*Ahora, al asociarle al puntero un array, salta 4 bits por cada array al que apunta*/
		
	puntero=&a[w];
	printf("\nLa direccion del puntero es:            %d", puntero);
	printf("\nDonde apunta el puntero se guarda:         %d", *puntero);}

	return 0;
}
