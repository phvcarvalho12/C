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
	
	printf("\n\n");
	int y = localizarElemento(&x, 2);
	printf("%d", y);
	
	printf("\n\n");
	buscaRemove(&x, 2);
	mostrarLista(&x);
	
	//x = esvaziarLista(x);
	//mostrarLista(&x);
	
	printf("\n\nFIM\n");
	return 0;
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
	int cont = 0;
	if(A->inicio != NULL){
		cont++;
		Celula * aux = A->inicio;
		while(aux->suc != NULL && aux->item != y){
			aux = aux->suc;
			cont++;
		}
		if(aux->item != y){
			cont = 0;
		}
	}
	return cont;
}

void removerPri(Lista * A){
	if(A->inicio != NULL){
		Celula * aux = A->inicio;
		Celula * pix = aux;
		aux = aux->suc;
		free(pix);
		aux->pre = NULL;
		A->inicio = aux;
		A->tamanho--;
	}
}

void removerUlt(Lista * A){
	if(A->inicio != NULL){
		Celula * aux = A->fim;
		Celula * pix = aux->pre;
		free(aux);
		pix->suc = NULL;
		A->fim = pix;
		A->tamanho--;
	}
}

Lista esvaziarLista(Lista A){
	if(A.inicio != NULL){
		Celula * aux = A.inicio;
		Celula * pix = aux;
		while(aux != NULL){
			free(pix);
			aux = aux->suc;
			pix = aux;
		}
		A.inicio = NULL;
		A.fim = NULL;
		A.tamanho = 0;
	}
}

void buscaRemove(Lista * A, int y) {
	if(A->inicio!=NULL) {
		Celula *p;
		p = A->inicio;
		while(p != NULL && p->item!=y)
			p = p->suc;
		if(p!=NULL){
			Celula *ant;
			Celula *pos;
			ant = p->pre;
			pos = p->suc;
			
			if(ant!=NULL)
				ant->suc = pos;
			else
				A->inicio = pos;
			
			if(pos!=NULL)	
				pos->pre = ant;
			else
				A->fim = ant;
			
			free(p);
			
			A->tamanho--;
		}
			
	}
}