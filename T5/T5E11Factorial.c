#include <stdio.h>
#include <stdlib.h>

/*C�digo de Alberto Rodr�guez P�rez albertorp@usal.es T5 E11 Calcular el factorial de un n�mero*/

int main(void){
	
	int y, n, fact;
	const comillas= '"';
		 
	printf("\nIntroduce un numero para hacer su factorial: ");
	scanf("%d", &n);

	/*For*/ 
	fact=1;
	
	for(y=1; y<=n; y++){
	fact*=y;}
	
	printf("\nEl factorial calculado por %cfor%c es:      %d\n", comillas, comillas, fact);
	
	/*While*/
	y=1; fact=1;
	
	while(y<=n){fact*=y; y++;}
	printf("\nEl factorial calculado por %cwhile%c es:    %d\n", comillas, comillas, fact);

	/*Do while*/
	
	y=1; fact=1;
	
	do{
		fact*=y; y++;	
		}while(y<=n);

	printf("\nEl factorial calculado por %cdo while%c es: %d\n\n", comillas, comillas, fact);

	system("pause");
	return 0;
}
