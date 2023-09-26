#include <stdio.h>
#include <stdlib.h>
#define MAX 25
//Codigo de alberto rodriguez perez albertorp@usal.es T8 E22
float media_vector(int*, int);

int main(void){
	
	int lista[MAX];
	int tam, x;
	
	printf("Introduce la cantidad de valores de tu vector (maximo 25):\n");
	
	do{scanf("%d", &tam);
	if(tam<1 || tam>MAX){printf("Valor no valido, vuelve a probar");}}while(tam<1 || tam>MAX);
	
	for(x=0; x<tam; x++){
		printf("\nValor %d: ", x+1);
		scanf("%d", &lista[x]);}
	
	printf("\nLa media es: %g", media_vector(lista, tam));	
	
return 0;
}

float media_vector(int *la, int dim){
	
	float media;
	int x;
	
	for(x=0; x<dim; x++){
	   media+=la[x];}
	   
	media/=dim;
	return media;}
