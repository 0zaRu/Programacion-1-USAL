#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
#define MIN 0
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T5E15Estadisticanotas
	Mostrar:Sobresalientes 9-10, notables 7-9, aprobados 5-7, suspensos 2-5, muy suspensos 0-2, nota media y si es aprobada o suspensa*/
int main(void){
	
	int x, sobre, notable, aprob, susp, msusp;
	float nota, media;
	char final[9]="";
	
	sobre=notable=aprob=susp=msusp=0;
	
	printf("Escribe las notas en orden siempre y cuando sean entre 0 y 10,\nuna nota negativa termina con el programa y da los resultados:\nNueva nota: ");
	scanf("%f", &nota);
	 
	while(nota>=0){
	
		x++;
		media+=nota;
	
		if(nota>MAX){printf("La nota introducida no es correcta, introduce una menor a 10\n");}
			else if(nota>=9){sobre++;}
			else if(nota>=7 && nota<9){notable++;}
			else if(nota>=5 && nota<7){aprob++;}
			else if(nota>=2 && nota<5){susp++;}
			else if(nota>=0 && nota<2){msusp++;}
			
	printf("Nueva nota: ");
	scanf("%f", &nota);
	}

	media/=x;
	if(media>=5){strcat(final, "Aprobado");}
			else{strcat(final, "Suspenso");}
		printf("\nTotal de alumnos presentados a examen: %d", x);
		printf("\nCantidad de sobresalientes:            %d (%4.2f%%)", sobre, (float)sobre/x*100);
		printf("\nCantidad de notables:                  %d (%4.2f%%)", notable, (float)notable/x*100);
		printf("\nCantidad de aprobados:                 %d (%4.2f%%)", aprob, (float)aprob/x*100);
		printf("\nCantidad de suspensos:                 %d (%4.2f%%)", susp, (float)susp/x*100);
		printf("\nCantidad de notas muy deficientes:     %d (%4.2f%%)", msusp, (float)msusp/x*100);
		printf("\nNota media:                            %4.2f (%s)", media, final);
	return 0;
}
