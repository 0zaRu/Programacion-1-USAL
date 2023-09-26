#include <stdio.h>

int main (){
	float *punt;
	float f=123.456;
	punt=&f;
	
	printf("La direccion de x es: %p", &f);
	printf("\n--------------------------------------");
	printf("\nLa direccion del puntero es:   %d", punt);
	
	
	return 0;
}
