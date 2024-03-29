//Exercicio 2 a da lista PYTHON
//Pedro Henrique Vianna Carvalho
//data: 26/03/2024
//Fazer uma função na qual busca um elemento e insere ele na lista somente se for distinto
//não podendo inserir um numero repetido na lista

#include<stdio.h>
#define Max 27

typedef struct{
	unsigned int card;
	unsigned char Set[Max];
}Conjunto;

Conjunto add(Conjunto, unsigned char);
void imprimir(Conjunto);
Conjunto novoConj();

int main(){
	
	Conjunto S;
	S = novoConj();
    unsigned char y = 'y';
	S = add(S, 'p');
	S = add(S, 'e');
	S = add(S, 'd');
	S = add(S, 'r');
	S = add(S, 'o');
	
	S = add(S, y);
	
	imprimir(S);

	return 0;
}

Conjunto novoConj() {
	Conjunto L;
	L.card = 0;
	return L;
}

Conjunto add(Conjunto S, unsigned char y){
	int i = 0;
	unsigned int tamanho;
	tamanho = S.card;
 	while(S.Set[i] != y && i < tamanho){
		i++;
	}
 	
	if (i == tamanho){
		S.Set[tamanho] = y;
		S.card = tamanho+1;
	}
	return S;
}

void imprimir(Conjunto S) {
	for (int i = 0; i < S.card; i++) {
		printf("%c", S.Set[i]);
	}
	printf("\n%d", S.card);
}