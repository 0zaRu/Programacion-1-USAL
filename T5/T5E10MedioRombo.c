#include <stdio.h>
#include <stdlib.h>
/*Código de Alberto Rodríguez Pérez albertorp@usal.es P5E10 Hacer medio rombo*/

int main(void){

int alto, x, y; /*Declaro la variable de la altura del rombo, x e y son para ir variando la cantidad de veces que imprimo espacios y caracteres*/
char caracter;

printf("\nIntroduce un caracter: "); scanf("%c", &caracter);
printf("Introduce un número: "    ); scanf("%d", &alto);

/*Una vez pedido el caracter y el numero empiezo con el rombo*/
printf("\nTu medio rombo de %c tiene una altura %d:\n",caracter, alto);

	for(x=0; x<alto; x++){	/*Este for es para el carto superior, marca x=o con la coondición de x<alto e incrementa en 1 la x cada vez*/
        
		for(y=0; y<alto-x; y++){ /*Este for interno es para los espacios, marco y=0, y se hará siempre que sea menor que el nº maximo-las vueltas dadas por el for*/
		printf(" ");}
		
        for(y=0; y<x; y++){		/*Este otro se hace hasta que la y es mayor que la x(piso sin espacios)*/
            printf("%c", caracter);}
            
        printf("\n");}

    for(x=0; x<=alto-1; x++){ 	/*Este segundo for es para el cuarto inferior*/
        
		for(y=0; y<x; y++){
            printf(" ");}
            
        for(y=0; y<alto-x; y++){
            printf("%c", caracter);}

		printf("\n");
		
    }

return 0;
}
