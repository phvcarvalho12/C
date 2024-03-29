/*
Dom - Controller.h - Projeto Dominó 
16/08/2023
Grupo: LLPP
Nomes dos integrantes: Lucas Ramos, Larissa Hipolito, Pedro Gabriel, Pedro Carvalho
*/


void pecasdom(tipoPeca peca[28]);
void embaralha(tipoPeca peca[28]);
void entregarPeca (tipoPeca peca[28]);
int firstJogada(tipoPeca peca[28]);
char primeirajogada(int pos, tipoPeca peca[28], tipoMesa mesa[28]);
void iniciarPeca();
void executarMenu();
void iniciarjogo();
void carregamesaE(int pj);
void carregamesaD(int pj);
void fclear();
void comprar(char jogador);
int contagempeca(char jogador,tipoPeca peca[28]);
int testaPeca(char jogador);
void testaLado(int pj);
int testaE (int e, tipoPeca peca[28]);


void recuperaCadastro();
void gravaCadastro();
void retornajogo();
