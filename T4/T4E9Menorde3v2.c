#include <stdio.h>
#include <stdlib.h>
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T4E9v2 Mostrar el valor mas pequeño de los 3 introducidos*/
int main()
{
	int n1, n2, n3, m; /*Declaro las variables*/
	
	printf("Introduce 3 valores\nn1: ");	/*Pido que introduzcan 3 números y los almaceno en n1, n2, n3*/
		scanf("%d", &n1);
	printf("\nn2: ");
		scanf("%d", &n2);
	printf("\nn3: ");
		scanf("%d", &n3);
	
	if(n1==n2 || n1==n3 || n2==n3){			/*Si alguno es igual cierro el programa, si no sigo en el else*/
	printf("\n2 o 3 de los valores son iguales ");
	return 0;}
	else
	m=n1;
		
	if(m>n2){	/*He metido n1 en m y ahor voy comparando m con n2 y n3 hasta que se quede con la variable más pequeña*/
	m=n2;}
	
	if(m>n3){
	m=n3;}
			
	printf("\nEl menor valor es: %d", m);	/*Imprimo m, siendo el menor*/

	return 0;
}

/* Incluyo el primer programa que hice 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y, z;
	
	
	printf("Por favor, introduce 3 n%cmeros para que te pueda mostrar el m&cs peque&co:\nx:", 163, 160, 164);
		scanf("%d",&x);
	printf("\ny:");
		scanf("%d",&y);
	printf("\nz:");
		scanf("%d",&z);	
		
	if(x<y && x<z){
	printf("\nEl valor m%cs peque%co es x: %d", 160, 164, x);}
	
	else if(y<x && y<z){
		printf("\nEl valor m%cs peque%co es y: %d", 160, 164, y);}
		
		else if(z<x && z<y){
			printf("\nEl valor m%cs peque%co es z: %d", 160, 164, z);}
			
			else{
				printf("\n3 de los valores (o 2, siendo estos m%cs peque%cos que el tercero) son iguales por lo que ninguno es m%cs peque%co que los otros 2", 160, 164, 160, 164);}
				
	return 0;
}
*/
