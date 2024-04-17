//Pedro Henrique Vianna Carvalho
//RA00333196
//Programa de conversao de numeros de uma conta infixa para posfixa

#include "Booleano.h"
#include "Token.h"
#include "PraticaPilha.c"
#include<stdio.h>
#include<string.h>

float avaliaPosfixa(char *, float[]);

int main(){
	float valor;
	//char * infixqa = "ABC+B*;";
	char * infixa = "((B+C)*B);";
	float V[18] = {1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5, 9.0, 9.5};
	valor = avaliainfixa(infixa, V);
	printf("\n %s %f \n", infixa, valor);
	
	printf("\n fim \n");
	return 0;
}

float avaliaPosfixa(char * infixa, float V){
	int i; char ch;
	for(i = 0; i < strlen(infixa); i++){
		ch = infixa[i];
		obterToken(ch); 	
	}
}
