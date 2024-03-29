//PHVC70 - Matriz bidimensional - passagem para funcao
//Pedro Carvalho - 26/05/2023
/*
Criar uma tabela 5x10
com numeracao sequencial a partir de 1
e entrao, apresenta-la na tela
apresentar a matriz numa funcao
criar uma funcao para dobrar todos esses valores
e entao representar a matriz
*/

#include<stdio.h>
void fmostra(int m[5][10]);
void fdobra(int m[5][10]);

int main(){
	int mat[5][10]; //reserva espaco para 5 * 10 = 50 numeros inteiros
	int i, j;       //i=linha j=coluna
	int n = 1;
	
	for(i=0; i < 5; i++)
	    for(j=0; j < 10; j++){
	    	mat[i][j] = n;
	    	n++;
		}
		
	//O nome da matriz SEM suas dimencoes, representa o endereco do primeiro elemento
	//no caso de matriz temos: mat eh o mesmo que &mat[0][0]
	fmostra(mat);
	fdobra(mat);
	printf("\nA matriz original foi alterada\n");
	fmostra(mat);
}

//No caso de matriz, a sua passagem para a funcao eh por referencia
//apresentacao da matriz
void fmostra(int m[5][10]){
	
	for(int i=0; i < 5; i++){
		for(int j=0; j < 10; j++)
		    printf("%2d ", m[i][j]);
		printf("\n");
	}
	printf("\n\n");
}

//dobra os valores da matriz
void fdobra(int m[5][10]){
	
		for(int i=0; i < 5; i++){
		   for(int j=0; j < 10; j++)
		      m[i][j] = m[i][j] * 2;
	    }
}