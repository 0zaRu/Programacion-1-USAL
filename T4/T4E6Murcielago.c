#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NMIN 0
#define NMAX 9999
 
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T4E6 Código muerciélago*/
int main(void)
{
	/*Declaro las variables*/
	int x, z;
	char y[5]= "";

	/*Pido el número*/
	printf("Escribe el valor que quieras de hasta 4 cifras: ");
	scanf("%d", &x);
	
	/*Voy editando z para que las letras se coloquen en el orden correcto a la vez que las coloco con switchs*/
  if (x > NMAX  || x < NMIN)
     printf("\nEl valor %d tecleado no es correcto.", x);
  else
  {
	
	z=x/1000;
	
	switch (z) {
	case  0 : strcat(y, "o"); break;
	case  1 : strcat(y, "g"); break;
	case  2 : strcat(y, "a"); break;
	case  3 : strcat(y, "l"); break;
	case  4 : strcat(y, "e"); break;
	case  5 : strcat(y, "i"); break;
	case  6 : strcat(y, "c"); break;
	case  7 : strcat(y, "r"); break;
	case  8 : strcat(y, "u"); break;
	case  9 : strcat(y, "m"); break;
      }	

	
	z=x%1000/100;
	
	switch (z) {
	case  0 : strcat(y, "o"); break;
	case  1 : strcat(y, "g"); break;
	case  2 : strcat(y, "a"); break;
	case  3 : strcat(y, "l"); break;
	case  4 : strcat(y, "e"); break;
	case  5 : strcat(y, "i"); break;
	case  6 : strcat(y, "c"); break;
	case  7 : strcat(y, "r"); break;
	case  8 : strcat(y, "u"); break;
	case  9 : strcat(y, "m"); break;
      }	

	
	z=x%100/10;
		  
	switch (z) {
	case  0 : strcat(y, "o"); break;
	case  1 : strcat(y, "g"); break;
	case  2 : strcat(y, "a"); break;
	case  3 : strcat(y, "l"); break;
	case  4 : strcat(y, "e"); break;
	case  5 : strcat(y, "i"); break;
	case  6 : strcat(y, "c"); break;
	case  7 : strcat(y, "r"); break;
	case  8 : strcat(y, "u"); break;
	case  9 : strcat(y, "m"); break;
      }	

	
	z=x%10;  
	  
	switch (z) {
	case  0 : strcat(y, "o"); break;
	case  1 : strcat(y, "g"); break;
	case  2 : strcat(y, "a"); break;
	case  3 : strcat(y, "l"); break;
	case  4 : strcat(y, "e"); break;
	case  5 : strcat(y, "i"); break;
	
	case  6 : strcat(y, "c"); break;
	case  7 : strcat(y, "r"); break;
	case  8 : strcat(y, "u"); break;
	case  9 : strcat(y, "m"); break;
      }	
        
	  
	printf("\nEl valor %d encriptado se escribe %s\n", x, y);	
	}
	return 0;
}
