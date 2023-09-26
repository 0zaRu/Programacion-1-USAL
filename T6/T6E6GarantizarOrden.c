#include <stdio.h>
#define MAX 100
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6 E6 Garantizar Orden*/

int main(){

	int x, y, valor, resta=0, v1, v2, vector[MAX];

	printf("Introduce el tamaño del vector: ");
	do{scanf("%d", &valor);}while(valor<0 || valor>MAX);
		
	printf("\nEmpieza a introducir los valores de los vectores: \n");
	scanf("%d", &vector[0]);
	 
	for(x=1; x<valor; x++){

		do{
		scanf("%d", &vector[x]);
		y=vector[x]-vector[x-1];
		
		if(vector[x]<=vector[x-1]){printf("Valor no valido, introduce un numero mayor al anterior (%d): \n", vector[x-1]);}
		if(y>resta){resta=y; v1=vector[x-1]; v2=vector[x];}
		
		}while(vector[x]<=vector[x-1]);}
		
	printf("\nLa cadena de vectores es: ");
			for(x=0; x<valor; x++){printf("%d	", vector[x]);}
	
	printf("\nLa mayor diferencia entre 2 valores contiguos es entre %d y %d, siendo el resto %d.", v1, v2, resta);
return 0;
}
