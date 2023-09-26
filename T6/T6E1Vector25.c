#include <stdio.h>
#include <stdlib.h>
#define MAX 25
#define MIN 1
int main(){

int x, num, suma=0, vector[MAX];

	printf("Introduce la cantidad de numero que quieres que tenga el vector siendo 25 el maximo: ");
		
	do{
	scanf("%d", &num);
	}while(num>MAX || num<MIN);
	
	printf("\nIntroduce los valores: ");
	
	for(x=0; x<num; x++){
		
		scanf("%d", &vector[x]);
		suma+=vector[x];}
		
	for(x=0; x<num; x++){
	printf("%d	", vector[x]);}
	
	printf("\nLa suma es: %d\n", suma);


system ("pause");
return 0;
}
