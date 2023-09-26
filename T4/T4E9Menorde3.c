#include <stdio.h>
/*Código de Alberto Rodríguez Pérez T4E9 Mostrar el valor mas pequeño de los 3 introducidos*/
int main(void)
{
	int x, y, z;
	
	/*Primero pido introducir los números*/
	
	printf("Por favor, introduce 3 n%cmeros para que te pueda mostrar el m&cs peque&co:\nx:", 163, 160, 164);
		scanf("%d",&x);
	printf("\ny:");
		scanf("%d",&y);
	printf("\nz:");
		scanf("%d",&z);	
		
	/*Ahora establezco diferentes opciones para mostrar en función del valor más pequeño*/	
	/*Este en caso de que sea x*/
	if(x<y && x<z){
	printf("\nEl valor m%cs peque%co es x: %d", 160, 164, x);}
	
	/*Este en caso de que sea y*/
	else if(y<x && y<z){
		printf("\nEl valor m%cs peque%co es y: %d", 160, 164, y);}
		
		/*Este en caso de que sea z*/
		else if(z<x && z<y){
			printf("\nEl valor m%cs peque%co es z: %d", 160, 164, z);}
			
			/*Este en caso de que los 3 números sean iguales, para mostrar al usuario lo que pide el ejercicio*/
			else{
				printf("\n3 de los valores (o 2, siendo estos m%cs peque%cos que el tercero) son iguales por lo que ninguno es m%cs peque%co que los otros 2", 160, 164, 160, 164);}
				
	return 0;
}
