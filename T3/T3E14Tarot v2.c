#include <stdio.h>
#include <stdlib.h>
/*Código Alberto Rodríguez Pérez T3E14

	La intención del código es hacer la operación a partir del dato introducido:
	AAAAMMDD=>	AAAA+MM*DD=>	A+B+C+D=>	N+N=>	Z siendo "Z" tu número del tarot*/

int main(void)
{
	int x, y, z;
	 printf("Introduce tu fecha de nacimiento con el formato AAAAMMDD (Ej: 20030401):\n");
	 scanf("%d", &x);
	 printf("Tu fecha de nacimiento es: %d", x);
/*Primero he pedido al usuario su fecha de nacimiento y la he almacenado en x,
	y jugando entre las 3 variables x, y, z, voy editando el número */
	

	y=x;					/*Este primer bloque separa AAAAMMDD en AAAA MM DD y los suma sobre z*/
	
	y=x/10000,		z=y;
	y=x%10000/100,	z=z+y;
	y=x%100,		z=z+y;

	   x=z, y=x;				/*Este segundo bloque coge los ya sumados ABCD y los separa en A B C D sumandolos sobre z*/

	   y=x%10000/1000,	z=y;
	   y=x%1000/100,	z=z+y;
	   y=x%100/10,		z=z+y;
	   y=x%10,			z=z+y;

		  x=z, y=x;					/*Este tercer bloque coge los ya sumados NN y los separa en N N sumandolos sobre z*/

		  y=x%100/10,		z=y;
		  y=x%10,			z=z+y;

	printf("\n\nTu n%cmero del Tarot es: %d", 163, z);

	return 0;
}


/*Incluyo la versión que hice la primera vez

int main(void)
{
	int k, j, x, y, z, a, m, d, n1, n2, n3, n4, n5, n6;
	 printf("Introduce tu fecha de nacimiento con el formato AAAAMMDD (Ej: 20030401):\n");
	 scanf("%d", &x);
	 printf("Tu fecha de nacimiento es: %d", x);
	y=x;
	
	a=y/10000;
	m=y%10000/100;
	d=y%10;
	z=a+m+d;	

	n1=z%10000/1000;
	n2=z%1000/100;
	n3=z%100/10;
	n4=z%10;

	j=n1+n2+n3+n4;

	n5=j%100/10;
	n6=j%10;
	
	k=n5+n6;

	printf("\n\nTu n%cmero del Tarot es: %d", 163, k);

	return 0;
}
*/
