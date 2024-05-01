//Fazendo funções de pilhas

#include"PraticaPilha.c"

Pilha criarPilha();
bool verificarPilhaVazia(Pilha);
unsigned char acessarPilha(Pilha);
Pilha pushPilha(Pilha, unsigned char);
Pilha popPilha(Pilha);
Pilha esvaziarPilha(Pilha);
int obterProfundidade(Pilha);
void mostrarPilha(Pilha);
void inverter(Pilha *);
void inverterPilha(Pilha *, Pilha *);
void copiarPilha(Pilha *, Pilha *);
