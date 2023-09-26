/*Realizar un programa que lea de teclado 15 claves enteras
- que todas ellas se encuentran en el rango 1000 a 7000.
- que el usuario no teclea claves repetidas.
Posteriormente deberá mostrar ordenadas las claves introducidas, pero sin modificar el vector de claves.
La forma de rellenar el vector de punteros es comprobar de una en una, comenzando por la clave 1000 y hasta la 7000, si la clave se encuentra en el vector de claves,
y si así fuera, obtenemos la dirección del elemento del vector de claves y la incluimos en el primer puntero libre del vector de punteros.
Esto nos obliga a llevar un segundo índice sobre el vector de punteros que nos vaya determinando el siguiente puntero libre.*/

#include <stdio.h>
#define MAX 70
#define MIN 10
#define CLAVE 15
//Codigo de Alberto Rodriguez Perez albertorp@usal.es
int main(void){
	 
	int array[MAX],
		*puntero[MAX],
		menor, numero,
		cont, x=0, y;
 
	printf("Introduce 15 valores entre 10 y 70 que no se repitan: ");
	for(cont=0; cont<CLAVE; cont++){
		printf("\nClave %d: ", cont+1); scanf("%d", &array[cont]);
		
			if(array[cont]<MIN || array[cont]>MAX){printf("\n-Error-Valor no valido"); cont--;}
			else{for(y=0; y<CLAVE; y++){
				if(y==cont){y++;}	
				if(array[cont]==array[y]){printf("\n-Error- Valor igual a otro"); cont--; break;}}}}
	
    for(cont=MIN; cont<MAX; cont++){
        y=-1;	menor=0;
        
		while (menor==0 && y<CLAVE-1){y+=1;	if(array[y]==cont){menor=1;}}
       	if(menor==1){puntero[x]=&array[y], x+=1;}}
        	
    printf("\nVector Ordenado:  \n");
    for(x=0; x<CLAVE; x++) printf("  %d", *puntero[x]);
	
	printf("\nVector Desordenado: \n");
	for(x=0; x<CLAVE; x++){printf("  %d", array[x]);}
	
return 0;
}
