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

int main(){
	
	Pilha S;
	
	S = criarPilha();
	S = pushPilha(S, 'p');
	
	printf("%c", acessarPilha(S));
	
	return 0;
}

Pilha criarPilha(){
	Pilha S;
	S.topo = sinal;
	S.topo = S.topo + 1; //Essa linha não deveria existir, mas sem ela, o codigo retorna valor fantasma
	S.vetor[1] = max - 1;
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
	if (S.topo != sinal){
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