#include <stdio.h>
#define MAX 25
#define MIN 1
//Código de Alberto Rodríguez Pérez albertorp@usal.es T6E15 Cuadrado Mágico

int main(void){
	
	int m[MAX][MAX],
		t, f, c, copyfi, copyco, cont,
		s=0, ss=0, flag;
	 
	//1. Solicitar tamaño
	do{ printf("Introduce un tamaño para la matriz que sea impar entre 1 y 25: ");
		scanf("%d", &t);	}while(t<MIN || t>MAX || t%2==0);
	
	//2. Establecer las casillas a -1
	for(f=0; f<t; f++){for(c=0; c<t; c++){
		m[f][c]=-1;}}

	//3. Asignar valores de la matriz
	for(f=0, c=t/2, cont=0; cont<=t*t; cont++, f--, c++){
		
		if(f==-1){f=t-1;} 						//Para que corrija la fila
		if(c==t){c=0;}							//Para que corrija la columna
		if(m[f][c]!=-1){f=copyfi+1, c=copyco;}	//Para que corrija la superposición
		
		//El asignador de valores
		m[f][c]=cont+1;
		
		copyfi=f, copyco=c;}

	//4. Mostrar Matriz
	printf("\nLa matriz magica generada es: \n");
	
		for(f=0; f<t; f++){for(c=0; c<t; c++){
			printf("%d	", m[f][c]);} printf("\n");}

	//5. Suma de cada fila y presentar
	printf("\nLas sumas de cada fila son: \n");
		
		for(f=0; f<t; f++){for(c=0; c<t; c++){s+=m[f][c];}
			printf("F%d=%d	", f+1, s); ss+=s, s=0;}
	
	//6. Suma de cada columna y presentar
	printf("\n\nLas sumas de cada columna son: \n");
		
		for(c=0; c<t; c++){for(f=0; f<t; f++){s+=m[f][c];}
			printf("F%d=%d	", c+1, s); ss+=s, s=0;}
		
	//7.Suma de las diagonales
	printf("\n\nLa suma de las diagonales principales es: \n");
		
		for(c=0, f=0; c<t; c++){s+=m[f][c];}
	printf("Diagonal descendente= %d	", s); ss+=s, s=0;	
		for(c=t-1, f=t-1; c>=0; c--){s+=m[f][c];}
	printf("\nDiagonal ascendente=  %d	", s); ss+=s;

	//8. Mostrar Flag
	if(s*t*2+s*2==ss){printf("\n\nEl cuadrado es magico");}
		else{printf("\n\nEl cuadrado NO es mágico");}

return 0;
}
