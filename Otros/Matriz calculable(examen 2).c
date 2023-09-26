#include <stdio.h>
#include <stdlib.h>
#define MIN 3
#define MAX 25
//Código de Alberto Rodríguez Pérez albertorp@usal.es Prueba de evaluación contínua 2
int main(){
	
	int columnas, c, filas, f;
	float array[MAX][MAX], medio=0;
	
	//Pedir los valores
	printf("Introduce las filas de la matriz: ");
	do{scanf("%d", &filas); if(filas<MIN || filas>MAX){printf("\nValor no valido");}}while(filas<MIN || filas>MAX);	
	
	printf("Introduce las columnas de la matriz: ");
	do{scanf("%d", &columnas); if(columnas<MIN || columnas>MAX){printf("\nValor no valido");}}while(columnas<MIN || columnas>MAX);	
	
	//Pedir elementos de la matriz
	for(f=0; f<=filas-2; f++){for(c=0; c<=columnas-2; c++){
		printf("\nElemento[%d][%d]: ", f+1, c+1);
		scanf("%f", &array[f][c]);
	 
	//Calculo de la ultima columna
		if(c==0){array[f][columnas-1]=array[f][c];} 					  //En el examen puse (c=0) y es (c==0)
		if(array[f][columnas-1]>array[f][c]){array[f][columnas-1]=array[f][c];}
		
		if(array[filas-1][columnas-1]<array[f][c]){array[filas-1][columnas-1]=array[f][c];}}}
	
	//Media de la ultima fila
	for(c=0; c<=columnas-2; c++){for(f=0; f<=filas-2; f++){
		medio+=array[f][c];}array[filas-1][c]=medio/(filas-1); medio=0;} //En el examen puse (float)flias-2;, sobra el float y es -1
	
	//Imprimir la matriz final
	printf("\nLa matriz resultante es:\n");
		for(f=0; f<=filas-1; f++){for(c=0; c<=columnas-1; c++){
			printf("%g	", array[f][c]);}printf("\n");}		
	
system("pause");
return 0;
}
