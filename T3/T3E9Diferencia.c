#include <stdio.h>
#include <stdlib.h>
/*	Programa de diferencia de tiempo de Alberto Rodríguez Pérez
  	La parte extra la he hecho por curiosidad nada más	*/

int main(void)
{
	unsigned int h, m, s, h1, m1 , s1, h2, m2, s2, a, b, x;
	
	/*Aquí pedimos los datos del 1er corredor*/
	printf("Introduce el tiempo en horas, minutos y segundos del primer corredor:\nIntroduce las horas: ");
	 scanf("%d", &h1);

	 printf("\nIntroduce los minutos: ");
	 scanf("%d", &m1);
	 
	 printf("\nIntroduce los segundos: ");
	 scanf("%d", &s1);	


	/*Aquí pedimos los datos del 2do corredor*/
	printf("\n\nAhora, introduce el tiempo en horas, minutos y segundos del segundo corredor:\nIntroduce las horas: ");
	 scanf("%d", &h2);

	 printf("\nIntroduce los minutos: ");
	 scanf("%d", &m2);
	 
	 printf("\nIntroduce los segundos: ");
	 scanf("%d", &s2);		
	 
	/*Aquí mostramos los datos introducidos tal cual*/ 
	printf("\n\nEl tiempo del  primer corredor es: %d horas %d minutos %d segundos \nEl tiempo del segundo corredor es: %d horas %d minutos %d segundos", h1, m1 , s1, h2, m2, s2);
	
	/*Realmente para hacer el ejercicio tal cual se pide habría que hacer la resta y el printf como hago a continuación*/
	
	/*Pero como quedaba en negativo en caso de que el 2º fuese mas rápido que el 1º he usado las sentencias "if" y "else",
	para usarlas o dejar el ejercicio tal cual es, hago al usuario marcar si quiere la versión del ejercicio real o la que he hecho*/
	
printf("\n\nEscribe 1 si quieres usar la versi%cn que pide el ejercicio\nEscribe 0 si quieres usar la versi%cn que he hecho con if y else\nIntroduce 1 o 0: ", 162, 162);
	scanf("%d", &x);

	if(x==1)
	{
		h=h1-h2; m=m1-m2; s=s1-s2;
		printf("La diferencia de tiempo entre los dos corredores es: %d horas %d minutos %d segundos",h, m, s);
	}
	else
	{
		if(h1>=h2) /*Si h1 es mayor o igual a h2 se hace la resta tal cual(lo mismo para m y s)*/
		{
		
		h=h1-h2;
		 printf("\n\nLa diferencia de tiempo entre los dos corredores es: %d horas ", h);
		
		}
			else /*pero si h2 es mayor que h1 lo multiplico por -1 para que quede positivo(lo mismo para m y s) */
			{
		  
		    h=(h1-h2)*(-1);
			 printf("\n\nLa diferencia de tiempo entre los dos corredores es: %d horas ", h);
			}
		
		/*Este if else es para los minutos*/
		if(m1>=m2)
		{
		
		m=m1-m2;
		 printf("%d minutos ", m);
		
		}
			else
			{
		  
		    m=(m1-m2)*(-1);
			 printf("%d minutos ", m);
		    }

		/*Este if else es para los segundos*/
		if(s1>=s2)
		{
		
		s=s1-s2;
		 printf("%d segundos\n", s);
		
		}
			else
			{
		  
		    s=(s1-s2)*(-1);
			 printf("%d segundos", s);
			}	
	    /*Este if else lo uso para marcar al programa cual es el corredor que va por delante en funcion del tiempo que lleva*/	
		
		 
		a=(h1*3600)+(m1*60)+s1, b=(h2*3600)+(m2*60)+s2;
	
		if(a==b)
		{
		printf("\nLos dos corredores est%cn empatados", 160);
		}
		else
		{
		
			if(a>b)
			{
		
		 	printf("\nLLevando m%cs tiempo el primero", 160);
		
			}
				else
				{
		  
			 	printf("\nLLevando m%cs tiempo el segundo", 160);
				}
		}
	}
		
	return 0;
}
