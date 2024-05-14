//Pedro Henrique Vianna Carvalho
//Problema de ordenar pilha com panqueca
//

#include "Booleano.h"
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define max 10
#define sinal 0
#define ghost 36

typedef struct{
	int topo;
	unsigned char vetor[max];
}Pilha;

Pilha criarPilha();
Pilha construirPilha(int);
void ordenarPilha(Pilha *p, int x); //parametro maior tamanho

Pilha criarPilha(){
	Pilha S;
	S.topo = sinal;
	S.vetor[0] = max - 1; // posição 0 = 9
	return S;
}
Pilha construirPilha(int y){

}
void ordenarPilha(Pilha *p, int x){
	
	
}