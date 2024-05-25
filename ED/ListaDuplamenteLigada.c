/* Lista Duplamente Ligada */
/*
  Arquivo: Lista Duplamente Ligada 
  Autor: Pedro Henrique Vianna
  Date: 14/05/2024
  Descrição: Implementa o tipo Lista - uma lista encadeada com cabeça
             A lista contém inteiros não negativos.
*/

#include <stdlib.h>
#include <stdio.h>
#include "Booleano.h"
#define ghost -1

typedef struct Celula{
        int item;
        struct Celula * pre;
        struct Celula * suc;
}Celula;

typedef struct{
	int tamanho;
	Celula * inicio;
	Celula * fim;
}Lista;

/* INTERFACE */

Lista criarLista();                   	// cria uma lista vazia	
bool verListaVazia(Lista*);             // devolve TRUE se a lista é vazia
int obterTamanho(Lista*);              	// devolve o tamanho da lista
void mostrarLista(Lista*);              // mostra na tela os elementos da lista					
void inserir(Lista*, int);           	// acrescenta um novo elemento ao inicio da lista
int localizarElemento(Lista*, int);		// devolve a ordem do registro que contém y ou zero
void removerPri(Lista *);
void removerUlt(Lista *);
Lista esvaziarLista(Lista);
void buscaRemove(Lista *, int);
void buscaInsere(Lista *, int);

int main(){
	Lista x;
	x = criarLista();
	
	//bool ok = verListaVazia(&x);
	mostrarLista(&x);
	printf("\n\n");
	inserir(&x, 1);
	inserir(&x, 2);
	inserir(&x, 3);
	mostrarLista(&x);
}

Lista criarLista(){
	Lista A;
	A.inicio = NULL;
	A.fim = NULL;
	A.tamanho = 0;
	return A;	
}

bool verListaVazia(Lista * A){
	bool ok = TRUE;
	if(A->tamanho != 0){
		ok = FALSE;
	}
	return ok;
}

int obterTamanho(Lista * A){
	int tam = A->tamanho;
	return tam;	
}

void mostrarLista(Lista * A){
	if(A->tamanho == 0){
		printf("Lista Vazia!");
	}else{
		Celula * aux = A->inicio;
		while(aux != NULL){
			printf("%d\t", aux->item);
			aux = aux->suc;
		}
	}
}

void inserir(Lista * A, int y){
	Celula * nova = malloc(sizeof(Celula));
	nova->item = y;
	if(A->tamanho == 0){
		nova->pre = NULL;
		nova->suc = NULL;
		A->inicio = nova;
		A->fim = nova;
	}else{
		Celula * aux = A->fim;
		aux->suc = nova;
		nova->pre = aux;
		nova->suc = NULL;
		A->fim = nova;
	}
		A->tamanho++;
}

int localizarElemento(Lista * A, int y){
	
}