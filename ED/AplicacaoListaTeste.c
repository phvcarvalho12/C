//Operacoes em listas
//Pedro Henrique Vianna Carvalho
//24/03/2024 : 8:25
//Fazer varios tipos de operacoes em listas, como extrair elemento, criar lista, etc

#include<stdio.h>
#define max 100
#define fantasma '$'

typedef struct{
	int tamanho;
	char vetor[max];
	
}Lista;

int tamanhoLista(Lista);

int criarListaVazia(Lista);

char obterElemento(Lista, int);

Lista inserirLista(Lista, char);

int main(){
	
}

int criarLista(){
	Lista a;
	a.tamanho = 0;
	return a;
}

int tamanhoLista(Lista a){
	int i;
	i = a.tamanho;
	return i;
}

char obterElemento(Lista a, int p){
	int i, k;
	i = a.tamanho;
	if (p <= i && p > 0){
		k = a.vetor[p];
	}
	else{
		k = fantasma;
	}
	return k;
}

Lista inserirLista(Lista a, char ch){
	int i, k;
	i = a.tamanho;
	k = i + 1;
	a.vetor[k] = ch;
	a.tamanho = k;
	return a;
}