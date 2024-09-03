//Pedro Henrique Vianna Carvalho
//ra00333196

#include "Booleano.h"
#include<stdio.h>
#define Max 11
#define sinal 0

typedef struct{
	unsigned int card;
	unsigned char Set[Max];
}Conjunto;

void criarConjunto(Conjunto *);
bool ConjuntoVazia(Conjunto);
unsigned char acessarConjunto(Conjunto *);
void add(Conjunto *, unsigned char);//void pushConjunto(Conjunto *, unsigned char *);
void popConjunto(Conjunto);
void esvaziarConjunto(Conjunto *);
int obterProfundidade(Conjunto *);
void mostrarConjunto(Conjunto *);
void inverter(Conjunto *);
void copiarConjunto(Conjunto *, Conjunto *);

void criarConjunto(Conjunto *S){
	S->card = 0;
	//S->Set[0] = Max - 1; 
}

void add(Conjunto *S, unsigned char y){
	int i = 0;
	while(i < S->card && y != S->Set[i]){
	i++;
	}
		if(S->card+1 < Max){
			//printf("f");
			S->card++;
			S->Set[S->card] = y;
		}
}