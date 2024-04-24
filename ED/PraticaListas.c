

#include<stdio.h>
#include"Booleano.h"
#define max 10
#define fantasma '$'
#define sinal 0

typedef struct{
	int tamanho;
	char elemento[max];
}Lista;

Lista criarLista();

bool verificarListaVazia(Lista);

Lista add(Lista, char);

int obterTamanho(Lista);

void mostrarLista(Lista);

char obterElemento(Lista, int);

Lista inserirLista(Lista, char);

/*
int main(){
	
	Lista L;
	L = criarLista();
	
	mostrarLista(L);
	
	L = add(L, 'a');
	L = add(L, 'b');
	L = add(L, 'c');
	L = add(L, 'd');
	L = add(L, 'e');
	L = add(L, 'f');
	L = add(L, 'g');
	L = add(L, 'h');
	L = add(L, 'i');
	L = add(L, 'j');

	mostrarLista(L);
	
	return 0;
}
*/

Lista criarLista(){
	Lista b;
	b.tamanho = 0;
	b.elemento[0] = max - 1;
	return b;
}

bool verificarListaVazia(Lista L){
     bool vazia;
     vazia = false;
     if (L.tamanho == 0) vazia = true;
     return vazia;
}

Lista add(Lista L, char y){ //adiona um elemento do tipo caracter na lista caso não seja repetido
	int i;
	i = 0;

	if(L.tamanho+1 < max){
		while(L.elemento[i] != y && i < L.tamanho)
			i++;
		if(i == L.tamanho){
			L.tamanho++;
			L.elemento[L.tamanho] = y;
		}
	}
	return L;
}

int obterTamanho(Lista a){
	int tam;
	tam = a.tamanho;
	return tam;
}

char obterElemento(Lista a, int p){
	int ch;
	int tam;
	tam = a.tamanho;
	if ((p >= 1) && (p <= tam)) 
		ch = a.elemento[p];
	else 
		ch = fantasma; 
	return ch;
}

void mostrarLista(Lista a){
	int i;
	int n;
	n = a.tamanho;
	if(n == 0){
		printf("\nLista vazia\n");
	}else{
		for(i = 1; i <= n; i++)
			printf("\n%c", a.elemento[i]);
	}
	printf("\n");
}

Lista inserirLista(Lista a, char ch){
	int k, p;
	k = a.tamanho;
	p = k + 1;
	a.elemento[p] = ch;
	a.tamanho = p; 
	return a;
}