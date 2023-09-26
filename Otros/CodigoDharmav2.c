#include <stdio.h>
#include <stdlib.h>
#define MIN 10000
#define MAX 99999
/*- Output Size: 129,1015625 KiB
  - Compilation Time: 0,30s */
int main(void){
	
	int d1, d2, d3, d4, dc, x, entidad, z;
	 
	printf("Introduce un valor para el codigo Dharma: ");
	scanf("%d", &x);
	
		d1=x/10000;
		d2=x%10000/1000;
		d3=x%1000/100;
		d4=x%100/10; 
		dc=x%10;
	
	if(x<MIN || x>MAX){printf("\nEl codigo introducido no es correcto, reinicia el programa");}
		else{
	
			if(x%2==0){
		
			d1*=4, d2*=8, d3*=5, d4*=10;
				}else{
				
				d1*=9, d2*=7, d3*=3, d4*=6;}
				
		entidad=d1+d2+d3+d4;
		entidad%=11;
		entidad=11-entidad;

		if(entidad==10 || entidad==11){entidad=1;}
	
			printf("\nDharma introducido es:           %d", x);
			printf("\nEl digito de control introducido es: %d", dc);
			printf("\nEl digito de control real es:        %d", entidad);
	
			if(entidad==dc){printf("\nEl codigo introducido es      Correcto");}
				else{	   printf("\nEl codigo introducido es         Falso");}
		}
	return 0;
	system("pause");
}
