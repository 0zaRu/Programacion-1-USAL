#include <stdio.h>
#define MAX 25
#define MIN 3
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6E14 Matriz Marco*/

int main(void){
	
	int filas, f, columnas, c, x, y;
	float marco[MAX][MAX];
	
	printf("Intruduce el numero de filas de la matriz menor a 25: ");
	do{scanf("%d", &filas);			if(filas<MIN || filas>MAX){printf("\nValor no valido, prueba otra vez: ");}}while (filas<MIN || filas>MAX);
	
	printf("\nIntruduce el numero de comunas de la matriz menor a 25: ");
	do{scanf("%d", &columnas);		if(columnas<MIN || columnas>MAX){printf("\nValor no valido, prueba otra vez: ");}}while (columnas<MIN || columnas>MAX);	

	printf("\nIntroduzca los valores de la matriz: \n");
	
		for(f=0 ; f<filas ; f++){ 
		for(c=0 ; c<columnas ; c++){
			printf("Posicion [%d%d]: ", f+1, c+1);
			scanf("%f", &marco[f][c]);}}
		
		//suma de fuera	
		//filas
		for	(c=0; c<columnas; c++){
			x+=marco[0][c];
			x+=marco[filas-1][c];}
		
		//columnas
		for (f=1; f<filas-1; f++){
			x+=marco[f][0];
			x+=marco[f][columnas-1];}
		
		//suma de dentro (total menos marco)
		for(f=0 ; f<filas ; f++){ 
		for(c=0 ; c<columnas ; c++){
		y+=marco[f][c];}}
		y=y-x;
		 		
		//mostrar matriz
		printf("\nLa matriz que has introducido:\n");
		for(f=0 ; f<filas ; f++){
			printf("\n");
		for(c=0 ; c<columnas ; c++){
			printf ("%g ", marco[f][c]);}}
		
		//mostrar valores
	printf("\nLa suma de los elementos del marco es: %d", x);
	printf("\nLa suma de los elementos de dentro es: %d", y);
	
		//mostrar si es marco
	if(x>y){printf("\nLa matriz es marco");}
		else{printf("\nLa matriz no es marco");}
		
return 0;
}
			
	
