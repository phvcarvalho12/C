/* PilhaPan.h = problema das panquecas em pilha */
/*
  Arquivo: Pedro_Carvalho_PARTE1.h
  Autor: Pedro Henrique Vianna Carvalho
  Date: 18/05/24 18:00
  Descrição: Este programa pega uma ordem aleatoria de numeros em uma pilha e os ordena
*/

#include "Booleano.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SINAL 0
#define Fantasma 0
#define MaxPilha 201

typedef struct {
      int topo;    						//topo indica o local onde se encontra o topo da pilha
      unsigned char tabela[MaxPilha];	//os itens são colocados na pilha a partir da posição 1
} Pilha;

Pilha criarPilha();						//criar pilha vazia
Pilha construirPilha(int);				//construir pilha com n numeros de 1 a n
void mostrarPilha(Pilha);				//mostrar o conteudo da pilha e apontador topo
bool pilhaVazia(Pilha);					//devolver TRUE se a pilha eh vazia
unsigned char acessarTopo(Pilha);		//devolver o topo da pilha
int obterTamanho(Pilha);				//devolver a profundidade da pilha
int contarPilha(Pilha, unsigned char);	//contar quantos ate o valor dado

Pilha pushPilha(Pilha, unsigned char);	//colocar um item na pilha
Pilha popPilha(Pilha);					//remover um item da pilha
Pilha inverter(Pilha, int);				//inverter n itens na parte superior da pilha

Pilha criarPilha(){
	Pilha S;
	S.topo = SINAL;
	return S;
}

Pilha construirPilha(int n) {
    Pilha p = criarPilha();
    int i, aux, rd;
    // Preenche a pilha com elementos de 1 a n
    for (i = 1; i <= n; i++) {
        p = pushPilha(p, i);
    }
    // Embaralhamento de Knuth
    srand(time(NULL));
    for (i = n; i > 0; i--) {
        rd = 1 + (RAND_MAX * rand() + rand()) % i;
        aux = p.tabela[i];
        p.tabela[i] = p.tabela[rd];
        p.tabela[rd] = aux;
	}
    return p;
}

void mostrarPilha(Pilha S){
	int i;
	if(S.topo == SINAL)
		printf("Pilha Vazia!");
	else{
		for(i = S.topo; i > 0; i--)
			printf("\n        %d", S.tabela[i]);
	}
}

bool pilhaVazia(Pilha ap){
    bool vazia;
    if (ap.topo == 0) 
	 	vazia = TRUE; 
	else 
		vazia = FALSE;
    return vazia;
}

unsigned char acessarPilha(Pilha S){
	int y = Fantasma;
	if (S.topo != SINAL)
		y = S.tabela[S.topo];
	return y;
}

int obterTamanho(Pilha S){
	int tam;
	tam = S.topo;
	return tam;
}

int contarPilha(Pilha S, unsigned char y) {
	int i = 1;
	int pos = 0;
	if(S.topo != SINAL){
		while(i <= S.topo && S.tabela[i] != y)
			i++;
		if(S.tabela[i] == y) 
			pos = S.topo - i + 1;
	}
	return pos;
}

Pilha pushPilha(Pilha S, unsigned char y){
	if (S.topo+1 < MaxPilha){
		S.topo++;
		S.tabela[S.topo] = y;
	}
	return S;
}

Pilha popPilha(Pilha S){
	if(S.topo != SINAL)
		S.topo--;
	return S;
}

Pilha inverter(Pilha S, int n){
	int i = S.topo - n + 1;
	int j = S.topo;
	int aux;
	if(n >= 0 && n < MaxPilha){
		while(i < j) {
			aux = S.tabela[j];
			S.tabela[j] = S.tabela[i];
			S.tabela[i] = aux;
			i++;
			j--;
		}
	}
		//printf("%d\t", n);
	return S;
}