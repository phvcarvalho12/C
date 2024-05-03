//Fazendo funções de pilhas

#include"PraticaPilha.c"

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
