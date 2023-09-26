#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int v;
	int w;
	
	int a, b, x, y, z, n1, n2, f, g, h, i, j, k;
	int  e, chain[8], faltantes[8], repe, repes[1], save[8], bsave[8], savef[8];
	int  eq3[15], eq2[15], eq1[15], eq0[15]; 
	int  s[15], sq3[15], sq2[15], sq1[15], sq0[15];
// 	int  s[16]={-1, -1, 8, -1, -1, -1, 12, 9, 14, 6, -1, -1, 2, 7, 13, -1};
	char j3[15], k3[15], j2[15], k2[15], j1[15], k1[15], j0[15], k0[15];	
	
	printf("Introduce de 1 en 1 la sucesion de numeros inicial que tienes: \n");
	for(x=0; x<=7; x++){
	printf("%d: ", x+1);
	scanf("%d", &chain[x]);}
	n1=chain[0];
	chain[8]=n1;
	n2=n1;
	for(x=0; x<=8; x++){save[x]=chain[x];}	
	for(x=0; x<=8; x++){bsave[x]=chain[x];}	
		
	printf("\nLa cadena introducida es:\n");
	for(y=0; y<=8; y++){printf("%d ", chain[y]);}

	printf("\nCadena Save: ");
	for(x=0; x<=8; x++){printf("%d ", save[x]);}

	printf("\nIntroduce de 1 en 1 los numeros (del 0 al 15) NO incluidos en la sucesion: \n");
	for(y=0; y<=8; y++){
	printf("%d: ", y+1);
	scanf("%d", &faltantes[y]);}

	printf("\nLos numeros faltantes son:\n");
	for(z=0; z<=8; z++){printf("%d ", faltantes[z]);}
 
	printf("\nIntroduce la posición del primer valor repetido: ");
	scanf("%d", &v);
	v-=1;
	printf("\nIntroduce la posición del segundo valor repetido: ");
	scanf("%d", &w);
	w-=1;
	
printf("\nLas posiciones con valores son: %d y %d\n", v+1, w+1);


	for(x=0; x<=8; x++){savef[x]=faltantes[x];}	

	for(a=0; a<=8; a++){
	
	
	chain[v]=savef[a];	

	n1=chain[0];
	chain[8]=n1;

	
	
	for(e=0; e<=15; e++){	
		switch (e) {
			
			case   0 :	eq3[e]=0, eq2[e]=0, eq1[e]=0, eq0[e]=0; break;
			case   1 :	eq3[e]=0, eq2[e]=0, eq1[e]=0, eq0[e]=1; break;
			case   2 :	eq3[e]=0, eq2[e]=0, eq1[e]=1, eq0[e]=0; break;
			case   3 :	eq3[e]=0, eq2[e]=0, eq1[e]=1, eq0[e]=1; break;
			case   4 :	eq3[e]=0, eq2[e]=1, eq1[e]=0, eq0[e]=0; break;	
			case   5 :	eq3[e]=0, eq2[e]=1, eq1[e]=0, eq0[e]=1; break;
			case   6 :	eq3[e]=0, eq2[e]=1, eq1[e]=1, eq0[e]=0; break;
			case   7 :	eq3[e]=0, eq2[e]=1, eq1[e]=1, eq0[e]=1; break;
			case   8 :	eq3[e]=1, eq2[e]=0, eq1[e]=0, eq0[e]=0; break;
			case   9 :	eq3[e]=1, eq2[e]=0, eq1[e]=0, eq0[e]=1; break;
			case  10 :	eq3[e]=1, eq2[e]=0, eq1[e]=1, eq0[e]=0; break;
			case  11 :	eq3[e]=1, eq2[e]=0, eq1[e]=1, eq0[e]=1; break;
			case  12 :	eq3[e]=1, eq2[e]=1, eq1[e]=0, eq0[e]=0; break;
			case  13 :	eq3[e]=1, eq2[e]=1, eq1[e]=0, eq0[e]=1; break;
			case  14 :	eq3[e]=1, eq2[e]=1, eq1[e]=1, eq0[e]=0; break;
			case  15 :	eq3[e]=1, eq2[e]=1, eq1[e]=1, eq0[e]=1; break;}}
	
	
		for(e=0; e<=15; e++){
			for(y=0; y<=7; y++){
			s[e]=-1;
			if(chain[y]==e){s[e]=chain[y+1]; break;}}}
	
		for(e=0; e<=15; e++){
		      if(s[e]==0){sq3[e]=0, sq2[e]=0, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==1){sq3[e]=0, sq2[e]=0, sq1[e]=0, sq0[e]=1;}
		 else if(s[e]==2){sq3[e]=0, sq2[e]=0, sq1[e]=1, sq0[e]=0;}
		 else if(s[e]==3){sq3[e]=0, sq2[e]=0, sq1[e]=1, sq0[e]=1;}
		 else if(s[e]==4){sq3[e]=0, sq2[e]=1, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==5){sq3[e]=0, sq2[e]=1, sq1[e]=0, sq0[e]=1;}
		 else if(s[e]==6){sq3[e]=0, sq2[e]=1, sq1[e]=1, sq0[e]=0;}
		 else if(s[e]==7){sq3[e]=0, sq2[e]=1, sq1[e]=1, sq0[e]=1;}
		 else if(s[e]==8){sq3[e]=1, sq2[e]=0, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==9){sq3[e]=1, sq2[e]=0, sq1[e]=0, sq0[e]=1;}
		else if(s[e]==10){sq3[e]=1, sq2[e]=0, sq1[e]=1, sq0[e]=0;}
		else if(s[e]==11){sq3[e]=1, sq2[e]=0, sq1[e]=1, sq0[e]=1;}
		else if(s[e]==12){sq3[e]=1, sq2[e]=1, sq1[e]=0, sq0[e]=0;}
		else if(s[e]==13){sq3[e]=1, sq2[e]=1, sq1[e]=0, sq0[e]=1;}
		else if(s[e]==14){sq3[e]=1, sq2[e]=1, sq1[e]=1, sq0[e]=0;}
		else if(s[e]==15){sq3[e]=1, sq2[e]=1, sq1[e]=1, sq0[e]=1;}
		else if(s[e]==-1){sq3[e]=-1, sq2[e]=-1, sq1[e]=-1, sq0[e]=-1;}}
	
	
	
	for(e=0; e<=15; e++){
		
			   if(eq3[e]==0 && sq3[e]==0){j3[e]='0', k3[e]='x';}
		  else if(eq3[e]==0 && sq3[e]==1){j3[e]='1', k3[e]='x';}
		  else if(eq3[e]==1 && sq3[e]==0){j3[e]='x', k3[e]='1';}
		  else if(eq3[e]==1 && sq3[e]==1){j3[e]='x', k3[e]='0';}
			else{j3[e]='x', k3[e]='x';}
			   
			   if(eq2[e]==0 && sq2[e]==0){j2[e]='0', k2[e]='x';}
		  else if(eq2[e]==0 && sq2[e]==1){j2[e]='1', k2[e]='x';}
		  else if(eq2[e]==1 && sq2[e]==0){j2[e]='x', k2[e]='1';}
		  else if(eq2[e]==1 && sq2[e]==1){j2[e]='x', k2[e]='0';}
			else{j2[e]='x', k2[e]='x';}
			
			   if(eq1[e]==0 && sq1[e]==0){j1[e]='0', k1[e]='x';}
		  else if(eq1[e]==0 && sq1[e]==1){j1[e]='1', k1[e]='x';}
		  else if(eq1[e]==1 && sq1[e]==0){j1[e]='x', k1[e]='1';}
		  else if(eq1[e]==1 && sq1[e]==1){j1[e]='x', k1[e]='0';}
			else{j1[e]='x', k1[e]='x';}
						
		       if(eq0[e]==0 && sq0[e]==0){j0[e]='0', k0[e]='x';}
		  else if(eq0[e]==0 && sq0[e]==1){j0[e]='1', k0[e]='x';}
		  else if(eq0[e]==1 && sq0[e]==0){j0[e]='x', k0[e]='1';}
		  else if(eq0[e]==1 && sq0[e]==1){j0[e]='x', k0[e]='0';}
			else{j0[e]='x', k0[e]='x';}}
	
	
	printf("\n\n");
	printf("==========================================================================================\n");
	printf("                                 Caso primer repetido = %d                                \n", faltantes[a]);
	printf("                                  %d %d %d %d %d %d %d %d                                 \n", chain[0], chain[1], chain[2], chain[3], chain[4], chain[5], chain[6], chain[7]);
	printf("==========================================================================================\n");
	printf("|  E | Q3 | Q2 | Q1 | Q0 | ==>|  S | Q3 | Q2 | Q1 | Q0 | ==> | J3K3 | J2K2 | J1K1 | J0K0 |\n");
	for(e=0; e<=15; e++){if(e<=9){printf("|  ");}else{printf("| ");}
	printf("%d |  %d |  %d |  %d |  %d | ==>",
			 e, eq3[e], eq2[e], eq1[e], eq0[e]);
	
	if(s[e]<=9){printf("|  ");}else{printf("| ");}
	if(s[e]==-1){printf("x");}else{printf("%d", s[e]);}
	
	if(s[e]==-1){printf(" |  x |  x |  x |  x | ==> |   xx |   xx |   xx |   xx |\n");}else{
	printf(" |  %d |  %d |  %d |  %d | ==> |   %c%c |   %c%c |   %c%c |   %c%c |\n", 
		    sq3[e], sq2[e], sq1[e], sq0[e],  j3[e], k3[e], j2[e], k2[e], j1[e], k1[e], j0[e], k0[e]);}}
	printf("==========================================================================================\n");

	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J3: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K3: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j3[0], j3[4], j3[12], j3[8], k3[0], k3[4], k3[12], k3[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j3[1], j3[5], j3[13], j3[9], k3[1], k3[5], k3[13], k3[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j3[3], j3[7], j3[15], j3[11], k3[3], k3[7], k3[15], k3[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j3[2], j3[6], j3[14], j3[10], k3[2], k3[6], k3[14], k3[10]);
	printf("    ===============================                                        ===============================\n");

	
	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J2: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K2: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j2[0], j2[4], j2[12], j2[8], k2[0], k2[4], k2[12], k2[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j2[1], j2[5], j2[13], j2[9], k2[1], k2[5], k2[13], k2[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j2[3], j2[7], j2[15], j2[11], k2[3], k2[7], k2[15], k2[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j2[2], j2[6], j2[14], j2[10], k2[2], k2[6], k2[14], k2[10]);
	printf("    ===============================                                        ===============================\n");
	
	
	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J1: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K1: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j1[0], j1[4], j1[12], j1[8], k1[0], k1[4], k1[12], k1[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j1[1], j1[5], j1[13], j1[9], k1[1], k1[5], k1[13], k1[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j1[3], j1[7], j1[15], j1[11], k1[3], k1[7], k1[15], k1[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j1[2], j1[6], j1[14], j1[10], k1[2], k1[6], k1[14], k1[10]);
	printf("    ===============================                                        ===============================\n");
	
	

	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J0: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K0: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j0[0], j0[4], j0[12], j0[8], k0[0], k0[4], k0[12], k0[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j0[1], j0[5], j0[13], j0[9], k0[1], k0[5], k0[13], k0[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j0[3], j0[7], j0[15], j0[11], k0[3], k0[7], k0[15], k0[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j0[2], j0[6], j0[12], j0[10], k0[2], k0[6], k0[12], k0[10]);
	printf("    ===============================                                        ===============================\n");	

}

 




	for(x=0; x<=8; x++){chain[x]=bsave[x];}
	chain[0]=n2;

	for(a=0; a<=8; a++){
	
		chain[w]=savef[a];	
	
		n1=chain[0];
		chain[8]=n1;
	
	
	
	for(e=0; e<=15; e++){	
		switch (e) {
			
			case   0 :	eq3[e]=0, eq2[e]=0, eq1[e]=0, eq0[e]=0; break;
			case   1 :	eq3[e]=0, eq2[e]=0, eq1[e]=0, eq0[e]=1; break;
			case   2 :	eq3[e]=0, eq2[e]=0, eq1[e]=1, eq0[e]=0; break;
			case   3 :	eq3[e]=0, eq2[e]=0, eq1[e]=1, eq0[e]=1; break;
			case   4 :	eq3[e]=0, eq2[e]=1, eq1[e]=0, eq0[e]=0; break;	
			case   5 :	eq3[e]=0, eq2[e]=1, eq1[e]=0, eq0[e]=1; break;
			case   6 :	eq3[e]=0, eq2[e]=1, eq1[e]=1, eq0[e]=0; break;
			case   7 :	eq3[e]=0, eq2[e]=1, eq1[e]=1, eq0[e]=1; break;
			case   8 :	eq3[e]=1, eq2[e]=0, eq1[e]=0, eq0[e]=0; break;
			case   9 :	eq3[e]=1, eq2[e]=0, eq1[e]=0, eq0[e]=1; break;
			case  10 :	eq3[e]=1, eq2[e]=0, eq1[e]=1, eq0[e]=0; break;
			case  11 :	eq3[e]=1, eq2[e]=0, eq1[e]=1, eq0[e]=1; break;
			case  12 :	eq3[e]=1, eq2[e]=1, eq1[e]=0, eq0[e]=0; break;
			case  13 :	eq3[e]=1, eq2[e]=1, eq1[e]=0, eq0[e]=1; break;
			case  14 :	eq3[e]=1, eq2[e]=1, eq1[e]=1, eq0[e]=0; break;
			case  15 :	eq3[e]=1, eq2[e]=1, eq1[e]=1, eq0[e]=1; break;}}
	
	
		for(e=0; e<=15; e++){
			for(y=0; y<=7; y++){
			s[e]=-1;
			if(chain[y]==e){s[e]=chain[y+1]; break;}}}
	
		for(e=0; e<=15; e++){
		      if(s[e]==0){sq3[e]=0, sq2[e]=0, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==1){sq3[e]=0, sq2[e]=0, sq1[e]=0, sq0[e]=1;}
		 else if(s[e]==2){sq3[e]=0, sq2[e]=0, sq1[e]=1, sq0[e]=0;}
		 else if(s[e]==3){sq3[e]=0, sq2[e]=0, sq1[e]=1, sq0[e]=1;}
		 else if(s[e]==4){sq3[e]=0, sq2[e]=1, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==5){sq3[e]=0, sq2[e]=1, sq1[e]=0, sq0[e]=1;}
		 else if(s[e]==6){sq3[e]=0, sq2[e]=1, sq1[e]=1, sq0[e]=0;}
		 else if(s[e]==7){sq3[e]=0, sq2[e]=1, sq1[e]=1, sq0[e]=1;}
		 else if(s[e]==8){sq3[e]=1, sq2[e]=0, sq1[e]=0, sq0[e]=0;}
		 else if(s[e]==9){sq3[e]=1, sq2[e]=0, sq1[e]=0, sq0[e]=1;}
		else if(s[e]==10){sq3[e]=1, sq2[e]=0, sq1[e]=1, sq0[e]=0;}
		else if(s[e]==11){sq3[e]=1, sq2[e]=0, sq1[e]=1, sq0[e]=1;}
		else if(s[e]==12){sq3[e]=1, sq2[e]=1, sq1[e]=0, sq0[e]=0;}
		else if(s[e]==13){sq3[e]=1, sq2[e]=1, sq1[e]=0, sq0[e]=1;}
		else if(s[e]==14){sq3[e]=1, sq2[e]=1, sq1[e]=1, sq0[e]=0;}
		else if(s[e]==15){sq3[e]=1, sq2[e]=1, sq1[e]=1, sq0[e]=1;}
		else if(s[e]==-1){sq3[e]=-1, sq2[e]=-1, sq1[e]=-1, sq0[e]=-1;}}
	
	
	
	for(e=0; e<=15; e++){
		
			   if(eq3[e]==0 && sq3[e]==0){j3[e]='0', k3[e]='x';}
		  else if(eq3[e]==0 && sq3[e]==1){j3[e]='1', k3[e]='x';}
		  else if(eq3[e]==1 && sq3[e]==0){j3[e]='x', k3[e]='1';}
		  else if(eq3[e]==1 && sq3[e]==1){j3[e]='x', k3[e]='0';}
			else{j3[e]='x', k3[e]='x';}
			   
			   if(eq2[e]==0 && sq2[e]==0){j2[e]='0', k2[e]='x';}
		  else if(eq2[e]==0 && sq2[e]==1){j2[e]='1', k2[e]='x';}
		  else if(eq2[e]==1 && sq2[e]==0){j2[e]='x', k2[e]='1';}
		  else if(eq2[e]==1 && sq2[e]==1){j2[e]='x', k2[e]='0';}
			else{j2[e]='x', k2[e]='x';}
			
			   if(eq1[e]==0 && sq1[e]==0){j1[e]='0', k1[e]='x';}
		  else if(eq1[e]==0 && sq1[e]==1){j1[e]='1', k1[e]='x';}
		  else if(eq1[e]==1 && sq1[e]==0){j1[e]='x', k1[e]='1';}
		  else if(eq1[e]==1 && sq1[e]==1){j1[e]='x', k1[e]='0';}
			else{j1[e]='x', k1[e]='x';}
						
		       if(eq0[e]==0 && sq0[e]==0){j0[e]='0', k0[e]='x';}
		  else if(eq0[e]==0 && sq0[e]==1){j0[e]='1', k0[e]='x';}
		  else if(eq0[e]==1 && sq0[e]==0){j0[e]='x', k0[e]='1';}
		  else if(eq0[e]==1 && sq0[e]==1){j0[e]='x', k0[e]='0';}
			else{j0[e]='x', k0[e]='x';}}
	
	
	printf("\n\n");
	printf("==========================================================================================\n");
	printf("                                Caso segundo repetido = %d                                \n", savef[a]);
	printf("                                  %d %d %d %d %d %d %d %d                                 \n", chain[0], chain[1], chain[2], chain[3], chain[4], chain[5], chain[6], chain[7]);
	printf("==========================================================================================\n");
	printf("|  E | Q3 | Q2 | Q1 | Q0 | ==>|  S | Q3 | Q2 | Q1 | Q0 | ==> | J3K3 | J2K2 | J1K1 | J0K0 |\n");
	for(e=0; e<=15; e++){if(e<=9){printf("|  ");}else{printf("| ");}
	printf("%d |  %d |  %d |  %d |  %d | ==>",
			 e, eq3[e], eq2[e], eq1[e], eq0[e]);
	
	if(s[e]<=9){printf("|  ");}else{printf("| ");}
	if(s[e]==-1){printf("x");}else{printf("%d", s[e]);}
	
	if(s[e]==-1){printf(" |  x |  x |  x |  x | ==> |   xx |   xx |   xx |   xx |\n");}else{
	printf(" |  %d |  %d |  %d |  %d | ==> |   %c%c |   %c%c |   %c%c |   %c%c |\n", 
		    sq3[e], sq2[e], sq1[e], sq0[e],  j3[e], k3[e], j2[e], k2[e], j1[e], k1[e], j0[e], k0[e]);}}
	printf("==========================================================================================\n");

	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J3: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K3: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j3[0], j3[4], j3[12], j3[8], k3[0], k3[4], k3[12], k3[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j3[1], j3[5], j3[13], j3[9], k3[1], k3[5], k3[13], k3[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j3[3], j3[7], j3[15], j3[11], k3[3], k3[7], k3[15], k3[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j3[2], j3[6], j3[14], j3[10], k3[2], k3[6], k3[14], k3[10]);
	printf("    ===============================                                        ===============================\n");

	
	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J2: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K2: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j2[0], j2[4], j2[12], j2[8], k2[0], k2[4], k2[12], k2[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j2[1], j2[5], j2[13], j2[9], k2[1], k2[5], k2[13], k2[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j2[3], j2[7], j2[15], j2[11], k2[3], k2[7], k2[15], k2[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j2[2], j2[6], j2[14], j2[10], k2[2], k2[6], k2[14], k2[10]);
	printf("    ===============================                                        ===============================\n");
	
	
	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J1: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K1: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j1[0], j1[4], j1[12], j1[8], k1[0], k1[4], k1[12], k1[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j1[1], j1[5], j1[13], j1[9], k1[1], k1[5], k1[13], k1[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j1[3], j1[7], j1[15], j1[11], k1[3], k1[7], k1[15], k1[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j1[2], j1[6], j1[14], j1[10], k1[2], k1[6], k1[14], k1[10]);
	printf("    ===============================                                        ===============================\n");
	
	

	printf("\n\n");
	printf("    ===============================                                        ===============================\n");
	printf("J0: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |                                    K0: |Q3Q2/Q1Q0| 00 | 01 | 11 | 10 |\n");
	printf("    |     00  |  %c |  %c |  %c |  %c |                                        |     00  |  %c |  %c |  %c |  %c |\n", j0[0], j0[4], j0[12], j0[8], k0[0], k0[4], k0[12], k0[8]);
	printf("    |     01  |  %c |  %c |  %c |  %c |                                        |     01  |  %c |  %c |  %c |  %c |\n", j0[1], j0[5], j0[13], j0[9], k0[1], k0[5], k0[13], k0[9]);
	printf("    |     11  |  %c |  %c |  %c |  %c |                                        |     11  |  %c |  %c |  %c |  %c |\n", j0[3], j0[7], j0[15], j0[11], k0[3], k0[7], k0[15], k0[11]);
	printf("    |     10  |  %c |  %c |  %c |  %c |                                        |     10  |  %c |  %c |  %c |  %c |\n", j0[2], j0[6], j0[14], j0[10], k0[2], k0[6], k0[14], k0[10]);
	printf("    ===============================                                        ===============================\n");	


	}


return 0;
}





/*
	for(e=0; e<=15; e++){
		
	     if(strcmp(eq3[e], "0") && strcmp(sq3[e],"0")==0){j3[e]=0, k3[e]=x;}
	else if(strcmp(eq3[e], "0") && strcmp(sq3[e],"1")==0){j3[e]=1, k3[e]=x;}
	else if(strcmp(eq3[e], "1") && strcmp(sq3[e],"0")==0){j3[e]=x, k3[e]=1;}
	else if(strcmp(eq3[e], "1") && strcmp(sq3[e],"1")==0){j3[e]=x, k3[e]=0;}
	     
	     if(strcmp(eq2[e], "0") && strcmp(sq2[e],"0")==0){j2[e]=0, k2[e]=x;}
	else if(strcmp(eq2[e], "0") && strcmp(sq2[e],"1")==0){j2[e]=1, k2[e]=x;}
	else if(strcmp(eq2[e], "1") && strcmp(sq2[e],"0")==0){j2[e]=x, k2[e]=1;}
	else if(strcmp(eq2[e], "1") && strcmp(sq2[e],"1")==0){j2[e]=x, k2[e]=0;}
	     
	     if(strcmp(eq1[e], "0") && strcmp(sq1[e],"0")==0){j1[e]=0, k1[e]=x;}
	else if(strcmp(eq1[e], "0") && strcmp(sq1[e],"1")==0){j1[e]=1, k1[e]=x;}
	else if(strcmp(eq1[e], "1") && strcmp(sq1[e],"0")==0){j1[e]=x, k1[e]=1;}
	else if(strcmp(eq1[e], "1") && strcmp(sq1[e],"1")==0){j1[e]=x, k1[e]=0;}
	     
	     if(strcmp(eq0[e], "0") && strcmp(sq0[e],"0")==0){j0[e]=0, k0[e]=x;}
	else if(strcmp(eq0[e], "0") && strcmp(sq0[e],"1")==0){j0[e]=1, k0[e]=x;}
	else if(strcmp(eq0[e], "1") && strcmp(sq0[e],"0")==0){j0[e]=x, k0[e]=1;}
	else if(strcmp(eq0[e], "1") && strcmp(sq0[e],"1")==0){j0[e]=x, k0[e]=0;}}
	
	
	
	
	
	
		chain[8]=chain[0];
	for(e=0; e<=15; e++){
		for(y=0; y<=7; y++){
			
			if(e==chain[y]){s[e]=chain[y+1]; break;}
			else{s[e]='-1';}}

	*/
