#include <stdio.h>
#include <stdlib.h>
/* Alberto Rodr�guez P�rez albertorp@usal.es
1.- Bucles controlados por contador. Muestra los 20 primeros n�meros enteros separados por tabulador.
2.- Bucles controlados por acumulador. Muestra los primeros n�meros enteros cuya suma sea menor o igual que 100.
3.- Bucles controlados por un valor centinela. Presenta los n�meros enteros positivos introducidos por teclado que desees, para terminar pulsa -1.
4.- Bucles controlados por bandera. Muestra n�meros enteros introducidos por teclado en orden creciente. No te pedir� un nuevo n�mero en el momento que pulses uno que no est� ordenado.
*/

int main(void){
	
	int cont, n, suma, x, y, z, n1, n2, salir;
	char option;
	 
	y=0;
do{
  printf("===============================\n");
  printf("|      TIPOS DE BLUCLES       |\n");
  printf("===============================\n");
  printf("|       a) Contador           |\n");
  printf("|       b) Acumulador         |\n");
  printf("|       c) Centinela          |\n");
  printf("|       d) Bandera            |\n");
  printf("|       s) Salir              |\n");
  printf("===============================\n");
  printf("\n");
  printf("Option ?: "); scanf("%c", &option);
  printf("\n\n");

/* Petici�n de datos, c�lculos y resultados seg�n la opci�n elegida */


switch (option) {
case 'a': 
case 'A': 
		/*Contador*/ z=0;
	printf("Los 20 primeros n�meros enteros:\n");
	
	cont=0;
	while(cont<=20){
		printf("%d	", cont);
		cont++;}
	
	printf("\n\n");
	
	do{printf("\n\nEscribe 1 para salir: "); scanf("%d", &z);}while (z==0);
	break;

case 'b': 
case 'B': 
   /*Acumulador*/ z=0;
	printf("\nMuestra los primeros n�meros enteros cuya suma sea menor o igual que 100:\n");
	n=1;
	suma=1;
	while(suma<=100){
		printf("%d	", n);
		n++;
		suma+=n;}
	printf("\n La suma es: %d", suma-n);
	do{printf("\n\nEscribe 1 para salir: "); scanf("%d", &z);}while (z==0);
	break;
   
case 'c': 
case 'C': 
   /*Centinela*/
	printf("\n\nIntroduce un valor(sal con -1): ");
	while(x!=-1){
		
		scanf("%d", &x);}
		break;
   
case 'd': 
case 'D':
	/*Bandera*/		
		printf("\nIntroduce valores mayores cada vez:\n");
		scanf("%d", &n1);
		salir=1;
	do{
		scanf("%d", &n2);
		
		if(n2>n1){
		n1=n2;
		}else{
		 salir=0;}
						
	}while(salir!=0);
	break;
	
case 's':
case 'S':
	
	y=1;
	break;}
	
	system("cls");
	}while(y==0);
	 
	return 0;
}
