/* Lista Ligada */
/*
  Arquivo: Lista Ligada
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
        struct Celula * next;
}Celula;

typedef struct{
        int tamanho;
        Celula * inicio;
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

int main(){
	Lista L;
	int w;
	int ordem;
	
	printf("\n");
	L = criarLista();  
	mostrarLista(&L);
	
	w = 10; 
	printf(" inserir %d \n",w);
	inserir(&L,w);   	
	mostrarLista(&L);
	
	w = 20; 
	printf("\n inserir %d \n",w);
	inserir(&L,w);   	
	mostrarLista(&L);
	
	w = 30; 
	printf("\n inserir %d \n",w);
	inserir(&L,w);   	
	mostrarLista(&L);
	
	w = 40; 
	printf("\n inserir %d \n",w);
	inserir(&L,w);   	
	mostrarLista(&L);
	
	w = 50; 
	printf("\n inserir %d \n",w);
	inserir(&L,w);   	
	mostrarLista(&L);
	
	
	w = 10;
	ordem = localizarElemento(&L,w); 
	printf("\n item = %d  posicao = %d ",w,ordem);
	
	removerUlt(&L);
	printf("\n");
	mostrarLista(&L);
	//L = esvaziarLista(L);
	//mostrarLista(&L);

	printf("\n\n FIM ");
	return 0;
}

/* IMPLEMENTAÇÃO */
Lista criarLista(){     
    Lista L;
    L.tamanho = 0;
    L.inicio = NULL;
    return L;
}

bool verListaVazia(Lista * ap){
    bool ok;
	if(ap->tamanho == 0){
    	ok = true;
	}else{
		ok = false;
	}
	return ok;
}

int obterTamanho(Lista * ap){
    int tam = ap->tamanho;
    return tam;
}
     
void inserir(Lista *ap, int y){
    Celula *novo = malloc(sizeof(Celula));
    novo->item = y;
    novo->next = ap->inicio;
    ap->inicio = novo;
    ap->tamanho++;
}
       
void mostrarLista(Lista * ap){
    Celula *p;
    if(ap->inicio == NULL)
    	printf("\nLista Vazia!\n");
	else{
		p = ap->inicio;
		do{
			printf("%d\t", p->item);		
			p = p->next;	
		}while(p != NULL);
	}
}

int localizarElemento(Lista * ap, int y){
	Celula * aux;
	int cont = 1;
	aux = ap->inicio;
	while(aux != NULL && y != aux->item){
			cont++;
        	aux = aux->next;
    }
	if(aux == NULL){
        cont = 0;
    }
	return cont;
}

void removerPri(Lista * ap){
	Celula * aux = ap->inicio;
	Celula * pix = aux;
	if(ap->inicio != NULL){
		aux = aux->next;
		free(pix);
		ap->inicio = aux;
	}
}

void removerUlt(Lista * ap){
	Celula * aux = ap->inicio;
	Celula * pix = aux;
	if(ap->inicio != NULL){
		do{
			pix = aux;
			aux = aux->next;
		}while(aux != NULL);
		free(aux);
		pix->next = NULL;
		ap->tamanho--;
	}
}

Lista esvaziarLista(Lista ap){
	Celula * aux = ap.inicio;
	Celula * pix = aux;
	int cont = 0;
	while(cont <= ap.tamanho && ap.tamanho > 0){
		aux = aux->next;
		free(pix);
		pix = aux;
		cont++;
	}
	if(cont == ap.tamanho){
		free(pix);
	}
	ap.tamanho = 0;
	ap.inicio = NULL;
	return ap;
}