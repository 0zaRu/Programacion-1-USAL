#include <stdio.h>
#define MAX 100
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6E7 Invertir un vector*/

int main(){
	
	int x, y, num, ventrada[MAX], vsalida[MAX],
		inver[MAX], cambio,
		s=0, z;
	char option;

do{
  printf("|=================================|\n");
  printf("|        Forma de inversion       |\n");
  printf("|=================================|\n");
  printf("|     a) Mostrar las dos cadenas  |\n");
  printf("|     b) Mostrar solo invertida   |\n");
  printf("|     s) Salir                    |\n");
  printf("|=================================|\n");
  printf("\n");
  printf("Option?: "); scanf("%c", &option);
  printf("\n");

switch (option) {
case 'a': 
case 'A': 	
	system("cls");
/*-----------------------Se pide usar dos cadenas, una normal y otra invertida-------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/

	printf("Introduce el tamaño del vector: ");
	do{scanf("%d", &num);}while(num<0 || num>MAX);
		
	printf("\nEmpieza a introducir los valores de los vectores: \n");
	 
	for(x=0; x<num; x++){

		printf("Valor[%d]: ", x+1);
		scanf("%d", &ventrada[x]);
		vsalida[num-x-1]=ventrada[x];}
		
		
	printf("\nLa cadena de vectores es:\n");
			for(x=0; x<num; x++){printf("%d	", ventrada[x]);}
	printf("\nLa cadena de vectores invertida es:\n");
			for(x=0; x<num; x++){printf("%d	", vsalida[x]);}		
				
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
		
	z=0;	do{printf("\n\nEscribe 1 para volver al menu: "); scanf("%d", &z);}while (z!=1);
	break;}
	
	
	switch (option) {
case 'b': 
case 'B':
	system("cls");
/*---------------------Se pide usar una sola cadena y despues de almacenarlo todo, invertirlo----------------*/
/*-----------------------------------------------------------------------------------------------------------*/

	printf("Introduce el tamaño del vector: ");
	do{scanf("%d", &num);}while(num<0 || num>MAX);
		
	printf("\nEmpieza a introducir los valores de los vectores: \n");
	 
	for(x=0; x<num; x++){

		printf("Valor[%d]: ", x+1);
		scanf("%d", &inver[x]);}
		
	for(x=0; x<num/2; x++){
		
		cambio=inver[x];
		inver[x]=inver[num-x-1];
		inver[num-x-1]=cambio;}
		

	printf("\nLa cadena de vectores es:\n");
		for(x=0; x<num; x++){printf("%d	", inver[x]);}

/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	do{printf("\n\nEscribe 1 para volver al menu: "); scanf("%d", &z);}while (z!=1);
	break;}
	
	
switch (option){case 's': case 'S': s=1; break;} system("cls");} while(s==0);
return 0;
}


