/* Introducimos los paquetes de librer�as*/
#include <stdio.h>
#include <stdlib.h>

/*Empezamos todas las funciones del c�digo con int main() y colocamos todo entre los {}*/
int main(void)
{
int x, y ,z;
/* Agregamos las variables de numeros enteros x, y, z,
siendo esta �ltima para poder hacer el intercambio entre x � y */

	printf("Introduce un numero x:");
	scanf("%d", &x);
	
	printf("Introduce un numero y:");
	scanf("%d", &y);
/*Pedimos las variables cada una por separado y las almacenamos usando "&" al lado de la variable en el comando scanf()
	Hacemos el cambio entre x � y moviendo primero "x" a "z" y mostramos el intercambio en pantalla con el �ltimo printf()*/
	
	z=x, x=y, y=z;
	
	printf("Tus numeros intercambiados son x=%d y y=%d", x, y);
	
/*Usamos el comando return 0 para terminar el programa y cerramos con el }*/	
return 0;
}
