#include <stdio.h>

int main(){
	int x, *puntero;
		
	/*0*/printf("Introduce el valor de la variable x: ");
	/*1*/scanf("%d", &x);
	/*2*/printf("\n2 El valor de x es: %d", x);
	/*3*/puntero=&x;
	/*4*/printf("\n4 Donde apunta el puntero se guarda: %d", *puntero);
		 printf("\n5 Almacenar en el puntero: ");
	/*5*/scanf(" %d", puntero);
	/*6*/printf("\n6 El contenido es: %d", x);
	/*7*/printf("\n7 %d", *puntero);
	/*8*/printf("\n8 La dirreción de x es: %p", x);
	/*9*/printf("\n9 La dirrecion de x es: %p", puntero);
   /*10*/printf("\n10 La direccion es:     %p ", &puntero);
   /*11*/printf("\n11 El contenido es:     %p ", puntero);
	
	return 0;
}
