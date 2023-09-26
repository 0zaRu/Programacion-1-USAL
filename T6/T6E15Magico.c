#include <stdio.h>
#define MAX 15
#define MIN 1
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6E1% Matriz Mágica*/

int main(void){
	
	int filas, f, columnas, c, x, y, s=0;
	int magico[MAX][MAX]={0, 0, 0, 0, 0, 0, 
		   			  	  0, 0, 0, 0, 0, 
					  	  0, 0, 0, 0, 0, 
					  	  0, 0, 0, 0, 0, 
					  	  0, 0, 0, 0, 0, };
	
	printf("Intruduce el numero de filas y columnas de la matriz menor a 25: ");
	do{scanf("%d", &filas);	 	if(filas<MIN || filas>MAX || filas%2==0){printf("\nValor no valido, prueba otra vez: ");}}while (filas<MIN || filas>MAX || filas%2==0);
	columnas=filas;
	
	
	printf("\nIntroduzca los valores de la matriz: \n");

	
	for(x=0; x<=filas; x++){
	for(f=1, c=columnas/2+1.5, y=0; y<=filas; f--, c++, y++){
		if(f<=0){f=filas;}
		if(c>columnas){c=1;}}
		filas++;}
	f=2, c=columnas/2+1.5;
	do{
		if(f=0){f=filas;}
		if(c>columnas){c=1;}
		if(magico[f][c]!=0){filas++; if(magico[f][c]!=0){s=1;}}
		
		printf("Posicion [%d%d]: ", f, c);
			scanf("%d", &magico[f][c]);
			
		printf("\nLa matriz que has introducido:\n");
		for(f=1 ; f=filas ; f++){
			printf("\n");
		for(c=1 ; c=columnas ; c++){
			printf ("%d ", magico[f][c]);}}
			
			
			
			f--, c++;
			}while(s==0);


			//mostrar matriz
		printf("\nLa matriz que has introducido:\n");
		for(f=1 ; f=filas ; f++){
			printf("\n");
		for(c=1 ; c=columnas ; c++){
			printf ("%d ", magico[f][c]);}}
	
return 0;	
}
