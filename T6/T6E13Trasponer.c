#include <stdio.h>
/*Código de Alberto Rodríguez Pérez albertorp@usal.es T6E13 Trasponer una matriz*/
int main(void){

    int tabla[4][5]={11, 12, 13, 14, 15,
                     21, 22, 23, 24, 25,
                     31, 32, 33, 34, 35,
                     41, 42, 43, 44, 45};
    
	int fila=4, f, columna=5, c;

    printf("Descendente por filas, ascendente por columnas:\n");
    for(f=fila-1; f>=0; f--){
    	printf("\n");
    for(c=0; c<columna; c++){
        printf("%d ", tabla[f][c]);}}

    printf("\n\nDescendente por columnas, descendente por filas:\n");
    for(c=columna-1; c>=0; c--){
    	printf("\n");
    for(f=fila-1; f>=0; f--){
        printf("%d  ", tabla[f][c]);}}

    printf("\n\nAscendente por columnas, ascendente por filas:\n");
    for(c=0; c<columna; c++){
        printf("\n");
    for(f=0; f<fila; f++){
        printf("%d  ", tabla[f][c]);}}

return 0;
}
