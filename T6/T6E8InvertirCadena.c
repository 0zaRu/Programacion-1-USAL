#include <stdio.h>
#include <string.h>
#define MAX 100
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6E8 Invertir Cadena*/
 
int main(){
	 
	int x, cambio;
	char frase[MAX];

	printf("Introduce la frase: ");
	gets(frase);
	
	printf("\nLa frase introducida es: %s", frase);

	printf("\nLa frase invertida es:   ");
		for(x=0; x<strlen(frase)/2; x++){
		
		cambio=frase[x];
		frase[x]=frase[strlen(frase)-1-x];
		frase[strlen(frase)-x-1]=cambio;}

		//En vez de la variable "cambio" se podría usar
		//frase[strlen(frase)+1] como posición para hacer el cambio
		//aunque es menos visual pero mejor optimizado

	for(x=0; x<strlen(frase); x++){
	printf("%c", frase[x]);}

return 0;
}
