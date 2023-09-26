#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sumar(int);	
int sumapar(int, int);
int xn(int, int);
long invert(long);
void sure(int, int, int*, int*);

int main(){
	int valor, min, max, num, exp, x, y, n, inver, suma, resta,
	 
	s=0, z;
	char option;
	
do{
  printf("|=================================|\n");
  printf("|        Funciones Basicas        |\n");
  printf("|=================================|\n");
  printf("|     a) Suma                     |\n");
  printf("|     b) Suma de numeros pares    |\n");
  printf("|     c) X^n                      |\n");
  printf("|     d) Invertir valor           |\n");
  printf("|     e) Suma-Resta (extra)       |\n");
  printf("|     s) Salir                    |\n");
  printf("|=================================|\n");
  printf("\n");
  printf("Option?: "); scanf("%c", &option);
  printf("\n");

switch (option) {
case 'a': case 'A': 	
system("cls");	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	
    printf("\nIntroduce un valor para realizar la suma de los primeros numeros: ");
    scanf("%d", &valor);
    printf("La suma es: %d", sumar(valor));
    
 
	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	while(z!=1 || z!=2){printf("\n\nEscribe 1 para volver al menu y 2 para salir: "); scanf("%d", &z);
	if(z==2){return 0;}else{break;}}}
	
switch (option) {
case 'b': case 'B': 	
system("cls");	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	
	printf("\nIntroduce el valor minimo para realizar la suma de los numeros pares: ");
    	scanf("%d", &min);
	printf("\nIntroduce el valor maximo para realizar la suma de los numeros pares: ");
    	scanf("%d", &max);
    	printf("La suma es: %d", sumapar(min, max));
	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	while(z!=1 || z!=2){printf("\n\nEscribe 1 para volver al menu y 2 para salir: "); scanf("%d", &z);
	if(z==2){return 0;}else{break;}}}
	
switch (option) {
case 'c': case 'C': 	
system("cls");	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	
    printf("\nIntroduce un base X: ");
    scanf("%d", &x);
    printf("\nIntroduce un exponente n: ");
    scanf("%d", &n);
    printf("La suma es: %d", xn(x, n));
	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	while(z!=1 || z!=2){printf("\n\nEscribe 1 para volver al menu y 2 para salir: "); scanf("%d", &z);
	if(z==2){return 0;}else{break;}}}
	
switch (option) {
case 'd': case 'D': 	
system("cls");	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	
    printf("\nIntroduce un valor positivo a invertir: ");
    scanf("%ld", &inver);
    printf("El valor invertido es: %ld", invert(inver));
	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	while(z!=1 || z!=2){printf("\n\nEscribe 1 para volver al menu y 2 para salir: "); scanf("%d", &z);
	if(z==2){return 0;}else{break;}}}
	
switch (option) {
case 'e': case 'E': 	
system("cls");	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	 
    printf("\nIntroduce un valor x para la suma y la resta:");
    scanf("%d", &x);
    printf("\nIntroduce un valor y para la suma y la resta:");
    scanf("%d", &y);
    
     sure(x, y, &suma, &resta);
	printf("La suma es: %d\nLa resta es: %d", suma, resta);
	
/*-----------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------*/
	z=0;	while(z!=1 || z!=2){printf("\n\nEscribe 1 para volver al menu y 2 para salir: "); scanf("%d", &z);
	if(z==2){return 0;}else{break;}}}
	

switch (option){case 's': case 'S': s=1;break;}	system("cls");}while(s==0);
return 0;
}

//a
int sumar(int valor){
    int x, suma=0;

    for(x=1; x<=valor; x++){
		suma+=x;}
	return suma;}
    
//b    
int sumapar(int min, int max) {
    int suma=0, x;

    for(x=min; x<=max; x++){
        suma+=x; if(x%2!=0){suma-=x;}}
	return suma;}
		
//c
int xn(int x, int n){
	int suma=1, i;
	for(i=2; i<=n; i++){
		suma+=pow(x,i);}
	return suma;}
	
//d
long invert(long inver){
	long vout=0, x, vin=inver;

    do{
     x=vin%10;
     vout=vout*10+x;
     vin/=10;}while(vin!=0);
    
	return vout;}

//e
void sure(int x, int y, int *sum, int *rest){
	*sum=x+y;
	*rest=x-y;
}
