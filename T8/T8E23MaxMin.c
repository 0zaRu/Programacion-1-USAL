#include <stdio.h>
#define MAX 25
//Codigo de alberto rodriguez perez albertorp@usal.es T8 E23
void mima(int*, int, int*, int*);
void cargar_vector(int*, int);
void presentar_vector(int*, int);

int main(void){
	
	int x, lista[MAX], tam, minimo, maximo;
	
	printf("Introduce la cantidad de valores de tu vector (maximo 25) para encontrar el min y el max:\n");
	do{scanf("%d", &tam);
	if(tam<1 || tam>MAX){printf("Valor no valido, vuelve a probar");}}while(tam<1 || tam>MAX);

	cargar_vector(lista, tam);	
	presentar_vector(lista, tam);
	mima(lista, tam, &maximo, &minimo);
	
	printf("\nEl maximo es: %d\nEl minimo es: %d", maximo, minimo);
	
return 0;
}


//=================================================================================================================
void cargar_vector(int *vector, int dim){
		
		int x;
		
	for(x=0; x<dim; x++){
		printf("\nValor %d: ", x+1);
		scanf("%d", &vector[x]);}}

//================================================================================================================
void presentar_vector(int *vector, int dim){
	
	int x;
	printf("\nEl vector introducido es: ");
	for(x=0; x<dim; x++){
		printf("%d ", vector[x]);}}
		
//================================================================================================================
void mima(int *vector, int dim, int *max, int *min){

	int x;
	*max=*min=vector[0];
	
	for(x=0; x<dim; x++){
		if(vector[x]>*max){*max=vector[x];}}
	
	for(x=0; x<dim; x++){
		if(vector[x]<*min){*min=vector[x];}}}
