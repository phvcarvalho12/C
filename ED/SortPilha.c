#include<stdio.h>
#include"PraticaPilha.c"

void ordenar(Pilha *); //sem passar nenhum parametro de tamanho
void ordenarPilha(Pilha *p, int x); //parametro maior tamanho

void ordenarPilha(Pilha *p, int x){
	
	Pilha a, b;
	a = criarPilha();
	b = criarPilha();
	
	do{	
		if(acessarPilha(*p) == x){
			inverter(p);
			x--;
		}
		else{
			inverterPilha(p, &a);
			if(!verificarPilhaVazia(*p)){
				inverterPilha(&a, &b);
				inverterPilha(&b, p);
			}else{
				inverterPilha(&a, p);
				x--;
			}
		}
	}while(x != 1);
}