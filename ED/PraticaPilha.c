//Fazendo funções de pilhas

#include<stdio.h>
#define max 10
#define sinal 0
#define ghost 36

typedef struct{
	int topo;
	unsigned char vetor[max];
}Pilha;

Pilha criarPilha();
//bool PilhaVazia(Pilha);
unsigned char acessarPilha(Pilha);
Pilha pushPilha(Pilha, unsigned char);
Pilha popPilha(Pilha);
Pilha esvaziarPilha(Pilha);
int obterProfundidade(Pilha);
void mostrarPilha(Pilha);

int main(){
	
	Pilha S;
	
	S = criarPilha();
	
	//printf("\n%d\n", obterProfundidade(S));
	
	S = pushPilha(S, 'o');
	S = pushPilha(S, 'r');
	S = pushPilha(S, 'd');
	S = pushPilha(S, 'e');
	S = pushPilha(S, 'p');
	
	printf("\n%d\n", obterProfundidade(S));
	
	mostrarPilha(S);
	
	return 0;
}

Pilha criarPilha(){
	Pilha S;
	S.topo = sinal;
	S.vetor[0] = max - 1; // posição 0 = 9
	return S;
}

//bool PilhaVazia(Pilha S){
//	if(S.topo == sinal){
	//	return true;
	//}
	//else{
	//	return false;
	//}
//}

unsigned char acessarPilha(Pilha S){
	unsigned char y;
	//int p;
	
	if (S.topo != sinal) {
		//p = S.topo; 
		y = S.vetor[S.topo];
	}
	
	else y = ghost;
	
	return y;
}

Pilha pushPilha(Pilha S, unsigned char y){
	if (S.topo != S.vetor[0]){
		S.topo = S.topo + 1;
		S.vetor[S.topo] = y;
	}
	return S;
}

Pilha popPilha(Pilha S){
	if(S.topo != sinal){
		S.topo = S.topo - 1;
	}
	return S;
}

int obterProfundidade(Pilha S){
	int tam;
	tam = S.topo;
	if(tam == sinal) tam = ghost;
	return tam;
}

void mostrarPilha(Pilha S){
	int i;
	if(S.topo == sinal){
		printf("%d", ghost);
	}
	else{
		for(i = S.topo; i > 0; i--) 
			printf("%c", S.vetor[i]);
	}
}