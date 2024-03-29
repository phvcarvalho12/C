/*
Dom - View.h - Projeto Dominó 
16/08/2023
Grupo: LLPP
Nomes dos integrantes: Lucas Ramos, Larissa Hipolito, Pedro Gabriel, Pedro Carvalho
*/

void mostraPeca(tipoPeca peca[28]);
void mostrapecajogador(tipoPeca peca[28], char jogador);
int menu();
void mostraMesa(tipoMesa mesa[28]);
int escolherpeca(tipoPeca peca[28],int pe, char jogador);
int jogar(char jogador);
void printf(char msg[100]);
void testaLado(int pj);
void ganhador(char jogador1, char jogador2);
void apresentaregras();
void ganhador(char jogador1, char jogador2);

