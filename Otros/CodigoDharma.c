#include <stdio.h>
#include <stdlib.h>
#define MIN 10000
#define MAX 99999
/*- Output Size: 129,1015625 KiB
  - Compilation Time: 0,25s */

int main(void){
	
	int x, y, z;
	 
	printf("Introduce un valor para el codigo Dharma: ");
	scanf("%d", &x);
	if(x<MIN || x>MAX){printf("\nEl codigo introducido no es correcto, reinicia el programa");}
		else{
	
	z=0;
	y=x/10000;
	if(x==2 || x==4 || x==6 || x==8){
		
							y*=4; z+=y;
		y=x%10000/1000; 	y*=8; z+=y;
		y=x%1000/100; 		y*=5; z+=y;
		y=x%100/10; 		y*=10; z+=y;
	}else{

		y=x/10000;			y*=9; z+=y;
		y=x%10000/1000; 	y*=7; z+=y;
		y=x%1000/100; 		y*=3; z+=y;
		y=x%100/10; 		y*=6; z+=y;}
		
			z%=11;	z=11-z;	y=x%10;
			if(z==10 || z==11){z=1;}
	
			printf("\nDharma introducido es:           %d", x);
			printf("\nEl digito de control introducido es: %d", y);
			printf("\nEl digito de control real es:        %d", z);
	
			if(y==z){printf("\nEl codigo introducido es      Correcto");}
				else{printf("\nEl codigo introducido es         Falso");}
		}
	return 0;
	system("pause");
}
