#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define MIN 1
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T5 E19 Calcular m primeros valores de la sucesión de fibonacci*/

int main(void){
	
	int m, x, n1, n2, n3;
	 
	printf("Introduce un valor entre 1 y 50: ");
	 scanf("%d", &m);

	if(m<MIN || m>MAX){printf("El valor introducido no es correcto, reinicia el programa");}
	else{

		n1=n2=1;
		printf("%d    %d    ", n1, n2);
		
		for(x=2; x<m; x++){
			n3=n1+n2;
			n1=n2; n2=n3;

		printf("%d    ", n3);
		}
	}
	
return 0;	
}
