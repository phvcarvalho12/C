//PHVC65 - Matriz bidimensional
//Pedro Carvalho - 19/05/2023
/*
Criar uma tabela 5 linhas x 10 colunas
com numeracao sequencial a partir de 1
e entao, apresenta-la na tela
*/

#include<stdio.h>

int main(){
	
	int mat[5][10];    //reserva espacao para 5 * 10 = 50 numeros inteiros
	int i, j;          
	int n = 1;
	
    for (i = 0; i < 5; i++){
    	for (j = 0; j < 10; j++){
    		mat[i][j] = n;
    		n++;
		}
	}
	
	//Apresentacao da matriz
    for (i = 0; i < 5; i++){
    	for (j = 0; j < 10; j++){
    		printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}	
	
}