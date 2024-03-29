//PHVC68 - 
//Pedro Carvalho - 24/05/2023
/*
criar uma tavela de caracteres 'x' 22 x 26
apresentar a tabela acrescentando uma linha superior
e uma coluna a esquerda com os respectivos indices
*/

#include<stdio.h>

int main(){
	char tab[22][26];
	int i, j;
	
    for (i = 0; i < 22; i++)
    	for (j = 0; j < 26; j++)
    		tab[i][j] = 'x';
		
	printf("\t");
	for(j = 0; j < 26; j++)
		printf("%2d ", j);
	printf("\n\n");
	
	for(i = 0; i < 22; i++){
		printf("%2d\t", i);
		for(j = 0; j < 26; j++)
		    printf(" %c ", tab[i][j]);
		printf("\n");
	}
}