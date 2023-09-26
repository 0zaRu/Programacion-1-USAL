#include <stdio.h> 
#define MAX 25

/*Codigo de Alberto Rodriguez Perez albertorp@usal.es T6 E11 Máximo y Mínimo*/

int main() {
	
	int  columnas, c, filas, f, a, b, x, y;
	
	int array[MAX][MAX];
	int max=array[0][0], min=array[0][0];
  
	printf("Intruduce el numero de filas de la matriz menor a 25: ");
	do{scanf("%d", &filas);			if(filas<0 || filas>MAX){printf("\nValor no valido, prueba otra vez: ");}}while (filas<0 || filas>MAX);
	
	printf("\nIntruduce el numero de comunas de la matriz menor a 25: ");
	do{scanf("%d", &columnas);		if(columnas<0 || columnas>MAX){printf("\nValor no valido, prueba otra vez: ");}}while (columnas<0 || columnas>MAX);	
	
	printf("\nIntroduzca los valores de la matriz: \n");
	
		for(f=0 ; f<filas ; f++){ 
		for(c=0 ; c<columnas ; c++){
			printf("Posicion [%d%d]: ", f+1, c+1);
			scanf("%d", &array[f][c]);
			
			if(max<array[f][c]){a=f, b=c, max=array[f][c]; }
			if(min>array[f][c]){x=f, y=c, min=array[f][c]; }}}

	printf("\nLa matriz que has introducido:\n");
	
		for(f=0 ; f<filas ; f++){
			printf("\n");
		for(c=0 ; c<columnas ; c++){
			printf ("	%d", array[f][c]);}}


	printf("\n\nEl valor mayor es: %d y su posicion es: ", max);
	for(f=0 ; f<filas ; f++){for(c=0 ; c<columnas ; c++){if(array[f][c]==max){
	printf("%d%d ", f+1, c+1);}}}

	printf ("\nEl valor menor es: %d y su posicion es: ", min);
	for(f=0 ; f<filas ; f++){for(c=0 ; c<columnas ; c++){if(array[f][c]==min){
	printf("%d%d ", f+1, c+1);}}}

return 0;
}
