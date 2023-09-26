#include <stdio.h>
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T5E21 Hacer 3 rombos con 2 caracteres*/

int main(void){
	
	int x, y, dentro, fuera, altura;
	
	printf("Introduce los siguientes datos:");
	printf("\nAltura del rombo: ");
		scanf("%d", &altura);
	printf("\nCaracter exterior: ");
		scanf(" %c", &fuera);
	printf("\nCaracter interior: ");
		scanf(" %c", &dentro);
		
	/*------------------------------Dentro---------------------------------*/


		for(x=0; x<altura; x++){
        
		for(y=0; y<altura-x; y++){
		printf(" ");}
		
        for(y=0; y<x; y++){
            printf("%c", dentro);}
        
		for(y=0; y<x; y++){
            printf("%c", dentro);}

		for(y=0; y<altura-x; y++){
		printf(" ");}
		    
        printf("\n");}


    for(x=0; x<altura; x++){ 
        
		for(y=0; y<x; y++){
            printf(" ");}
            
        for(y=0; y<altura-x; y++){
            printf("%c", dentro);}
            
        for(y=0; y<altura-x; y++){
            printf("%c", dentro);}
            
        for(y=0; y<x; y++){
            printf(" ");}

		printf("\n");}
		
		
	/*------------------------------Fuera---------------------------------*/
		printf("\n\n");
		
	for(x=0; x<altura; x++){
        
		for(y=0; y<altura-x; y++){
		printf("%c", fuera);}
		
        for(y=0; y<x; y++){
            printf(" ");}
        
		for(y=0; y<x; y++){
            printf(" ");}

		for(y=0; y<altura-x; y++){
		printf("%c", fuera);}
		    
        printf("\n");}


    for(x=0; x<altura; x++){ 
        
		for(y=0; y<x; y++){
            printf("%c", fuera);}
            
        for(y=0; y<altura-x; y++){
            printf(" ");}
            
        for(y=0; y<altura-x; y++){
            printf(" ");}
            
        for(y=0; y<x; y++){
            printf("%c", fuera);}

		printf("\n");}
		
	/*------------------------------Entero---------------------------------*/
		printf("\n\n");
		
	for(x=0; x<altura; x++){
        
		for(y=0; y<altura-x; y++){
		printf("%c", fuera);}
		
        for(y=0; y<x; y++){
            printf("%c", dentro);}
        
		for(y=0; y<x; y++){
            printf("%c", dentro);}

		for(y=0; y<altura-x; y++){
		printf("%c", fuera);}
		    
        printf("\n");}


    for(x=0; x<altura; x++){ 
        
		for(y=0; y<x; y++){
            printf("%c", fuera);}
            
        for(y=0; y<altura-x; y++){
            printf("%c", dentro);}
            
        for(y=0; y<altura-x; y++){
            printf("%c", dentro);}
            
        for(y=0; y<x; y++){
            printf("%c", fuera);}

		printf("\n");}
	
		
	return 0;
}
