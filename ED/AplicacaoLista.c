//exercicio pratico lista
//Pedro Henrique Vianna Carvalho
//21/03/2024
//definir dps

#include <stdio.h>
#define MAX 100
#define fantasma '$'

typedef struct{
	int tamanho;
	char vetores[MAX];
}Lista;

//interface
Lista criarLista();

int obterTamanho(Lista);

void mostrarLista(Lista);

char obterElemento(Lista, int);

Lista inserirLista(Lista, char);

int main(){
		
}

//implementacao
Lista criarLista(){
	Lista a;
	a.tamanho = 0;
	return a;
}

int obterTamanho(Lista a){
	int tam;
	tam = a.tamanho;
	return tam;
}

void mostrarLista(Lista a){
	int i;
	int j;
	i = a.tamanho;
	if(i != 0){
		for(j = 1; j <= i; j++){
			printf("\n");
			printf("%c", a.vetores[j]);	
		}
	}else{
		printf("\nLista vazia\n");
	}
	printf("\n");
}

char obterElemento(Lista a, int p){
	int ch;
	int tam;
	tam = a.tamanho;
	if ((p >= 1) && (p <= tam)) 
		ch = a.vetores[p];
	else 
		ch = fantasma; 
	return ch;
}

Lista inserirLista(Lista a, char ch){
	int k, p;
	k = a.tamanho;
	p = k + 1;
	a.vetores[p] = ch;
	a.tamanho = p; 
	return a;
}