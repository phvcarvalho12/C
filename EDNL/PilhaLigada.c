#include<stdio.h>
#include<stdlib.h>
#include "Booleano.h"
#define max 100
#define fantasma !

typedef struct{
	unsigned char vetor;
	struct Celula* next;
}Celula;

typedef Celula* Pilha;

Pilha criarPilha();
//Pilha construirPilha(int);
bool verificarPilhaVazia(Pilha);
unsigned char acessarPilha(Pilha);
//unsigned int acessarPilhan(Pilha);
//Pilha pushPilha(Pilha, unsigned char);
void pushPilha(Pilha *, unsigned char);
//Pilha pushPilhan(Pilha, unsigned int);
Pilha popPilha(Pilha);
Pilha esvaziarPilha(Pilha);
int obterProfundidade(Pilha);
void mostrarPilha(Pilha *);
//void mostrarPilhan(Pilha);
void inverter(Pilha *);
void inverterPilha(Pilha *, Pilha *);
void copiarPilha(Pilha *, Pilha *);
void concatenar(Pilha *, Pilha *);

int main(){
	Pilha A;
	A = criarPilha();
	
	unsigned char y = acessarPilha(A);
	printf("%c",y);
	y = 'a';
	pushPilha(&A, y);
	mostrarPilha(&A);
	/*
	y = 'b';
	A = pushPilha(A, y);
	y = 'c';
	A = pushPilha(A, y);
	y = 'd';
	A = pushPilha(A, y);
	
	mostrarPilha(A);
	*/
	printf("\n\nFim!!\n");
	return 0;
}

Pilha criarPilha(){
	Pilha A;
	A = NULL;
	return A;
}

bool verificarPilhaVazia(Pilha A){
	bool ok = TRUE;
	if(A != NULL){
		ok = TRUE;
	}
	return ok;
}

unsigned char acessarPilha(Pilha A){
	unsigned char vet;
	if(A != NULL){
		Celula * aux = A;
		vet = aux->vetor;
	}
	return vet;
}

void pushPilha(Pilha *A, unsigned char y){
	Celula * aux = malloc(sizeof(Celula));
	aux = (*A);
	aux->vetor = y;
	aux->next = (*A);
	(*A) = aux;
	//return A;
}

Pilha popPilha(Pilha A){
	if(A != NULL){
		Celula * aux = A;
		A = A->next;
		free(aux);
	}
}

Pilha esvaziarPilha(Pilha A){
	if(A != NULL){
		Celula * aux = A;
		Celula * pix = aux;
		aux = aux->next;
		free(pix);
		while(aux != NULL){
			free(pix);
			aux = aux->next;
		}
		A = NULL;
	}
}


void mostrarPilha(Pilha *A){
	if((*A) != NULL){
		Celula * aux = (*A);
		while(aux != NULL){
			printf("\n%c", aux->vetor);
			aux = aux->next;
		}
	}
	else{
		printf("\n\nPilhaVazia!\n");
	}
}
