//PHVC69 - matriz com pontinhos 
//Pedro Carvalho - 24/05/2023
/*
criar uma tavela de caracteres 'x' 22 x 26
apresentar a tabela acrescentando uma linha superior
e uma coluna a esquerda com os respectivos indices
*/

#include<stdio.h>

int main(){
	char tab[20][30];
	int i, j;
	
    for (i = 0; i < 20; i++)
    	for (j = 0; j < 30; j++)
    		tab[i][j] = '.';
		
	do{		
	
		printf("\t");
	    for(j = 0; j < 30; j++)
		    printf("%2d ", j);
	    printf("\n\n");
	
	    for(i = 0; i < 20; i++){
		    printf("%2d\t", i);
		for(j = 0; j < 30; j++)
		    printf(" %c ", tab[i][j]);
		printf("\n");
	    }
	printf("\nDigite a coordenada (linha, coluna) para marcar x: ");	
		scanf("%d, %d", &i, &j);
		
		if((i == -1 && j == -1))
		     break;
		
		if(i < 0 || i > 19 || j < 0 || j > 29){
			printf("Coordenada invalida\n\n");
			continue;
		}
		tab[i][j] = 'x';
		
	} while (i != -1 || j != -1);
	
}