/* Fila */
/*
  Arquivo: Fila
  Autor: Pedro Henrique Vianna
  Date: 25/05/2024
  Descrição: Implementa o tipo fila.
*/

#include<stdio.h>
#define Geist 0
#define sinal -1
#define Max 10
typedef struct{
int inicio;
int fim;
int Vetor[Max];
} Fila;

Fila criarFilaVazia( );
bool FilaVazia( Fila );
int acessarPrimeiro( Fila );
Fila pushFila( Fila, int );
Fila popFila( Fila );
Fila esvaziarFila( Fila );

int main(){
	
	
	printf("\n\nFIM\n");
	return 0;
}

Fila criarFilaVazia(){
	Fila Q;
	Q.inicio = sinal;
	Q.fim = sinal;
	return Q;
}

bool FilaVazia( Fila Q ) {
	bool vazia;
	vazia = FALSE;
	if ( Q.inicio == sinal ) vazia = TRUE;
	return vazia;
}

int acessarPrimeiro( Fila Q ) {
	int y, p;
	y = Geist; 
	if ( Q.inicio != sinal ) {
		p = Q.inicio;
		y = Q.Vetor[ p ];
	}
	return y;
}

Fila pushFila ( Fila Q, int y ) {
	int seg;
	seg = (Q.fim + 1) % Max; 
	if (seg != Q.inicio) {
		Q.Vetor[seg] = y;
		if (Q.inicio == sinal) 
			Q.inicio = seg; 
		Q.fim = seg;
	}
	return Q;
}

Fila popFila ( Fila Q ) {
	int seg;
	if ( Q.inicio != sinal ) {
		if ( Q.inicio == Q.fim ) {
			Q.inicio = sinal; 
			Q.fim = sinal; 
		} else { 
			seg = (Q.inicio + 1) % Max;
			Q.inicio = seg;
			}
		}
	return Q;
}
