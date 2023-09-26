#include <stdio.h>
#define MAX 15
#define MIN 1

int main(void){

	int tamano, f1medio, f, c, x, n;
	int magico[MAX][MAX];
	
	printf("Intruduce el numero de filas y columnas de la matriz menor o igual a 15: ");
	do{scanf("%d", &tamano);	if(tamano<MIN || tamano>MAX || tamano%2==0){printf("\nValor no valido\nIntroduce un valor menor a 15 que sea impar: ");}
	  }while(tamano<MIN || tamano>MAX || tamano%2==0);
	f1medio=tamano/2;
	
	for(f=0; f<tamano; f++){for(c=0; c<tamano; c++){magico[f][c]=-1;}}
	
	f=0, c=f1medio, n=1;
	
	for(x=0; x<tamano*tamano; n++, x++){
		
		if(f=-1){f=tamano-1;}
		if(c=tamano){c=0;}
		if(magico[f-1][c+1]!=-1){f++;}else{f--, c++;}
		magico[f][c]=n;}

	//Imprimir Matriz
	printf("\nLa matriz que has introducido:\n");
	for(f=0 ; f<tamano ; f++){
		printf("\n");
	for(c=0 ; c<tamano ; c++){
		printf ("%d ", magico[f][c]);}}


return 0;
}
