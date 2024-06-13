/*
Dom - Model.cpp - Projeto Dominó
16/08/2023
Grupo: LLPP
Nomes dos integrantes: Lucas Ramos, Larissa Hipolito, Pedro Gabriel, Pedro Carvalho
*/

#include "Dom_LLPP_Model.h"


typedef struct peca
	{
		int lado1;
		int lado2;
		char status;
	} tipoPeca;

typedef struct mesa
{
	int ladoE;
	int ladoD;
} tipoMesa;

tipoMesa mesa[28];
	
tipoPeca peca[28];
tipoPeca pecaaux;

struct Jogo
{
	
 int qtmesaJogo; //qtd.de peÃ§as na mesa
 int jvezJogo; //jogador atual
 int jogadorComp; //2 = o computador Ã© o jogador 2
 int mesaDJogo; //extremidade direita da mesa
 int mesaEJogo; //extremidade esquerda da mesa


} sitJogo;







