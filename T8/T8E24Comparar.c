#include <stdio.h>
#define MAX 25
//Codigo de Alberto Rodriguez Perez T8 E24 Comparar 2 vectores
void cargar_vector(double*, int);
void presentar_vector(double*, int);
int compara_listas(double* , double* , int);

int main(void){
	
	int tam; 
	double lista1[MAX], lista2[MAX];
	
	printf("Introduce la cantidad de valores de tu vector (maximo 25) para encontrar el min y el max:\n");
	do{scanf("%d", &tam);
	if(tam<1 || tam>MAX){printf("Valor no valido, vuelve a probar:\n");}}while(tam<1 || tam>MAX);	
	
		printf("\nIntroduce los valores del vector 1: ");
		cargar_vector(lista1, tam);		

		printf("\nIntroduce los valores del vector 2: ");
		cargar_vector(lista2, tam);
		
		presentar_vector(lista1, tam);
		presentar_vector(lista2, tam);
				
		if(compara_listas(lista1, lista2, tam)){printf("\nLa comparacion es verdadera");}
			else {printf("\nLa comparacion es falsa");}

return 0;
}

void cargar_vector(double *vector, int dim){
	
		int x;
	
		for(x=0; x<dim; x++){
		printf("\nValor %d: ", x+1);
		scanf("%lf", &vector[x]);}}


void presentar_vector(double *vector, int dim){
	
	int x;
	printf("\nEl vector introducido es: ");
	for(x=0; x<dim; x++){
		printf("%.0lf ", vector[x]);}}


int compara_listas(double *v1, double *v2, int dim){
	
	int x;
	
	for(x=0; x<dim; x++){
		if(v1[x]!=v2[x])return 0;}

	return 1;}
