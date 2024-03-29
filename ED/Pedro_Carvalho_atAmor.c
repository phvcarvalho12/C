//Atividade Amor
//Arquivo: Pedro_Carvalho_atAmor
//Autor: Pedro Henrique Vianna Carvalho
//Data: 19/03/2024
//Descrição: Definir a palavra amor e exibir na tela a palavra amor

#include<stdio.h>
#define max 50

typedef struct{
	int tamanho;
	char p[max];
}Lista;

char * amor();

int main(){
	//char *a = "AMOR";
	//for(int i = 1; i <= 5; i++){
		printf("%s", amor());
    //}
	
	printf("\n FIM \n"); //¬¬¬¬¬ saida com %c //UHëÕHâýHìd* saida com %s
	return 0;
} 

char * amor(){
	//char a[] = {'$', 'A', 'M', 'O', 'R', '\0'};
	//char *a = "AMOR";
	return "AMOR";
}
