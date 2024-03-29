//PHVC67 - Tabela de multiplicacao 20 x 20
//Pedro Carvalho - 19/05/2023
/*
Criar uma tabela 20 x 20 contendo:
em cada linha os multiplos de seu primeiro elemento pro ex.:
a linha 1 apresenta os elementos 1, 2, 3... 20
a linha 2: 2, 4, 6, 8... 40
a linha 3: 3, 6, 9... 60
*/

#include<stdio.h>

int main(){
	int mat[20][20];
	int i, j;
	int pri;
	int n;
	
	for(i = 0; i < 20; i++){
		pri = i + 1;
		n = pri;
		for(j = 0; j < 20; j++){
			mat[i][j] = n;
			n = n + pri;
		}
	}	
	 for (i = 0; i < 20; i++){
    	for (j = 0; j < 20; j++){
    		printf("%4d ", mat[i][j]);
		}
		printf("\n");
	}
/*
    outra solucao:
    for(i=1; i<=20; i++)
       for(j=1; j<=20; j++)
          mat[i-1][j-1] = i * j;
          
          
          
    outra solucao:
    
*/
}