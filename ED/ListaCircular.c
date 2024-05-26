/* Lista Circular */
/*
  Arquivo: Lista Circular
  Autor: Pedro Henrique Vianna
  Date: 14/05/2024
  Descrição: Implementa o tipo Lista - uma lista encadeada com cabeça circular
             A lista contém inteiros não negativos.
*/

#include <stdlib.h>
#include <stdio.h>
#include "Booleano.h"
#define ghost -1

typedef struct Celula{
    int elemento;
    struct Celula* next;
}Celula;

typedef Celula* Lista;

Lista criarLista();                   	// cria uma lista vazia	
bool verListaVazia(Lista*);             // devolve TRUE se a lista é vazia
int obterTamanho(Lista*);              	// devolve o tamanho da lista
void mostrarLista(Lista*);              // mostra na tela os elementos da lista					
void inserir(Lista*, int);           	// acrescenta um novo elemento ao inicio da lista
int localizarElemento(Lista*, int);		// devolve a ordem do registro que contém y ou zero

int main(){


    printf("\n\nFIM\n");
    return 0;
}

Lista criarLista(){
    Lista A = NULL;
    return A;
} 

bool verListaVazia(Lista * A){
    bool ok = TRUE;
	if(A != NULL)
    	ok = FALSE;
	return ok;
}

int obterTamanho(Lista * A){
    int cont = 0;
    if(A != NULL){
        cont++;
        Celula * aux = A;
        while(aux != NULL){
            cont++;
            aux = aux->next;
        }
    }
    return cont;
}