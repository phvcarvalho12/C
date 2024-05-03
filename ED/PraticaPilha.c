//Fazendo funções de pilhas

//#include <bits/stdc++.h>
#include "Booleano.h"
#include<stdio.h>
#define max 10
#define sinal 0
#define ghost 36

typedef struct{
	int topo;
	unsigned char vetor[max];
}Pilha;

Pilha criarPilha();
bool verificarPilhaVazia(Pilha);
unsigned char acessarPilha(Pilha);
unsigned int acessarPilhan(Pilha);
Pilha pushPilha(Pilha, unsigned char);
Pilha pushPilhan(Pilha, unsigned int);
Pilha popPilha(Pilha);
Pilha esvaziarPilha(Pilha);
int obterProfundidade(Pilha);
void mostrarPilha(Pilha);
void mostrarPilhan(Pilha);
void inverter(Pilha *);
void inverterPilha(Pilha *, Pilha *);
void copiarPilha(Pilha *, Pilha *);
void concatenar(Pilha *, Pilha *);

/*
int main(){
	
	Pilha S;

	S = criarPilha();


	S = pushPilha(S, 'a');
	S = pushPilha(S, 'h');
	S = pushPilha(S, 'l');
	S = pushPilha(S, 'i');
	S = pushPilha(S, 'p');

	Pilha n;
	n = criarPilha();
	
	n = pushPilhan(n, 1);
	n = pushPilhan(n, 2);
	//n = pushPilhan(n, 3);
	//n = pushPilhan(n, 4);
	//n = pushPilhan(n, 5);
	
	Pilha p;
	p = criarPilha();
	
	p = pushPilhan(p, 4);
	p = pushPilhan(p, 3);
	p = pushPilhan(p, 5);
	
	concatenar(&n,&p);
	mostrarPilhan(n);
	
	return 0;
}
*/

Pilha criarPilha(){
	Pilha S;
	S.topo = sinal;
	S.vetor[0] = max - 1; // posição 0 = 9
	return S;
}

bool verificarPilhaVazia(Pilha ap){
    bool vazia;
    if (ap.topo == 0) 
	 	vazia = true; 
	else 
		vazia = false;
    return vazia;
}

unsigned char acessarPilha(Pilha S){
	unsigned char y;
	if (S.topo != sinal)
		y = S.vetor[S.topo];
	else y = 0;
	return y;
}


unsigned int acessarPilhan(Pilha S){
	unsigned int y;
	if (S.topo != sinal)
		y = S.vetor[S.topo];
	else y = 0;
	return y;
}

Pilha pushPilha(Pilha S, unsigned char y){
	if (S.topo+1 < max){
		S.topo++;
		S.vetor[S.topo] = y;
	}
	return S;
}

Pilha pushPilhan(Pilha S, unsigned int y){
	if (S.topo+1 < max){
		S.topo++;
		S.vetor[S.topo] = y;
	}
	return S;
}

Pilha popPilha(Pilha S){
	if(S.topo != sinal)
		S.topo = S.topo - 1;
	return S;
}

int obterProfundidade(Pilha S){
	int tam;
	tam = S.topo;
	return tam;
}

void mostrarPilha(Pilha S){
	int i;
	if(S.topo == sinal)
		printf("Lista Vazia!");
	else{
		for(i = S.topo; i > 0; i--)
			printf("%c", S.vetor[i]);
	}
}

void mostrarPilhan(Pilha S){
	int i;
	if(S.topo == sinal)
		printf("Pilha Vazia!");
	else{
		for(i = S.topo; i > 0; i--)
			printf("%d", S.vetor[i]);
	}
}

void inverter(Pilha *S){
    int i;
	int j = S->topo;
	unsigned char aux;
    for(i = 1; i <= S->topo/2; i++){
		aux = S->vetor[j];
		S->vetor[j] = S->vetor[i];
		S->vetor[i] = aux;
		j--;
	}
}

void inverterPilha(Pilha *A, Pilha *B){
	Pilha pix; unsigned char aux;
	pix = criarPilha();
	int i = 1;
	
	while(i <= obterProfundidade(*A)){
		aux = acessarPilha(*A);
		pix = pushPilha(pix, aux);
		(*B) = pushPilha(*B, aux);
		(*A) = popPilha(*A);
	}
	while(i <= obterProfundidade(pix)){
		aux = acessarPilha(pix);
		(*A) = pushPilha(*A, aux);
		pix = popPilha(pix);
	}
}
/*
void copiarPilha(Pilha *S, Pilha *X){
	(*X) = (*S);
}
*/

void copiarPilha(Pilha *S, Pilha *X){
	Pilha A;
	int i;
	unsigned char aux;
	A = criarPilha();

	for(i = obterProfundidade(*S); i > 0; i--){
		aux = acessarPilha(*S);
		A = pushPilha(A, aux);
		(*S) = popPilha(*S);
	}
	for(i = obterProfundidade(A); i > 0; i--){
		aux = acessarPilha(A);
		(*S) = pushPilha((*S), aux);
		(*X) = pushPilha((*X), aux);
		A = popPilha(A);
	}
}

void concatenar(Pilha *p, Pilha *f){
	int aux;
	Pilha a;
	a = criarPilha();
	
	while(1 <= obterProfundidade(*f)){
		aux = acessarPilha(*f);
		a = pushPilhan(a, aux); 
		(*f) = popPilha(*f);
	}
	while(obterProfundidade(a) >= 1){
		aux = acessarPilha(a);
		(*p) = pushPilhan(*p,aux); 
		a = popPilha(a);
	}
}