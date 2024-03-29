//PHVC66 - Matriz bidimensional
//Pedro Carvalho - 19/05/2023
/*
Criar uma tabela 5 linhas x 20 colunas
com numeracao sequencial a partir de 1
e entao, apresenta-la na tela
usar variaveis globais para a qtde.de linhas e colunas
*/

#include<stdio.h>
int qtlinhas = 5;
int qtcolunas = 20;

int main(){
	int mat[qtlinhas][qtcolunas];
	int i, j;
	int n = 1;
	
	for (i = 0; i < qtlinhas; i++){
    	for (j = 0; j < qtcolunas; j++){
    		mat[i][j] = n;
    		n++;
		}
	}
	
	//Apresentacao da matriz
    for (i = 0; i < qtlinhas; i++){
    	for (j = 0; j < qtcolunas; j++){
    		printf("%4d ", mat[i][j]);
		}
		printf("\n");
	}
}