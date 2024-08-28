/* QUAL A ÁRVORE ? */
/*
  Arquivo: Exercicio qual_a_Arvore.c
  Autor: Fubá
  Data: 19/03/13 14:49
  Descrição: Este programa implementa uma Árvore Binária para brincar.
  A função de construção liga uma raiz a duas árvores, esquerda e direita.
  Implementa o caminhamento bfs - por nível, os três caminhamentos recursivos
  e o caminhamento eRd não recursivo.
*/

#include <stdlib.h>
#include <stdio.h>
#include "FilaPointer.h"
#include "PilhaPointer.h"
#include "Booleano.h"

typedef struct No{
    int elemento;            
    struct No *esq; 
    struct No *dir;
} No;

typedef No* Arvore;

Arvore criarArvoreVazia( );
Arvore construirArvore(int, Arvore, Arvore);
Arvore construirExemplo(); // pronta
bool verificarArvoreVazia(Arvore);
void mostrarRaiz(Arvore); // pronta
void mostrarArvore_eRd(Arvore);	// pronta
void mostrarArvore_Red(Arvore);
void mostrarArvore_edR(Arvore);
void mostrarArvorebfs(Arvore);
void mostrarArvoreDFS(Arvore);

int main(){
    Arvore tree;
    printf(" \n QUAL A ARVORE ? \n");
    
	tree = construirExemplo();

	printf("\n\n Caminhamento eRd: \n\n");	mostrarArvore_eRd(tree);

//	printf("\n\n Caminhamento Red: \n\n");	mostrarArvore_Red(tree);
//	printf("\n\n Caminhamento edR: \n\n");	mostrarArvore_edR(tree);
//	printf("\n\n Caminhamento por nivel: \n\n");	mostrarArvorebfs(tree);
//	printf("\n\n Caminhamento eRd nao recursivo: \n\n");	mostrarArvoreDFS(tree);  

    printf("\n\n");
    return 0;
}

Arvore criarArvoreVazia( ){
   
    
}

Arvore construirArvore(int item, Arvore e, Arvore d){
    
    
}

Arvore construirExemplo(){
	Arvore a,b,c;
	a = construirArvore(6,NULL,NULL); 
    b = construirArvore(3,NULL,NULL);
    c = construirArvore(5,a,NULL); 
    a = construirArvore(1,c,b);
    b = construirArvore(7,NULL,NULL); 
    c = construirArvore(4,NULL,b);
	b = construirArvore(2,a,c);
	printf("\n tree \n");
	return b;
}

bool verificarArvoreVazia(Arvore ap){
    bool ok;
   
    return ok;
}

void mostrarRaiz(Arvore ap){
    if (ap != NULL) printf(" raiz = %d  ",ap->elemento);
}

void mostrarArvore_eRd(Arvore ap){ // eRd
    if (ap != NULL){
        mostrarArvore_eRd(ap->esq);
        mostrarRaiz(ap);
        mostrarArvore_eRd(ap->dir);}      
}

void mostrarArvore_Red(Arvore ap){ // Red
         
}

void mostrarArvore_edR(Arvore ap){ // edR
    
}

void mostrarArvorebfs(Arvore ap){	// nivel
    
}

void mostrarArvoreDFS(Arvore ap){   // eRd não recursivo

}
  

