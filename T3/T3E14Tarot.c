#include <stdio.h>
#include <stdlib.h>

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
