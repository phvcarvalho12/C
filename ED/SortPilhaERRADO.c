#include<stdio.h>
#include"PraticaPilha.c"

void ordenar(Pilha *); //sem passar nenhum parametro de tamanho
void ordenarPilha(Pilha *p, int x); //parametro maior tamanho

int main(){

	Pilha p;
	p = criarPilha();
    
	p = pushPilhan(p, 4);
	p = pushPilhan(p, 3);
	p = pushPilhan(p, 5);
	p = pushPilhan(p, 2);
	p = pushPilhan(p, 1);

	ordenarPilha(&p, 5);
	mostrarPilhan(p);

	return 0;
}
/*
void ordenar(Pilha *p){

	Pilha a, b;
	a = criarPilha();
	b = criarPilha();

	int aux, i;
	
	do{
		i = 1;
		while(x != obterProfundidade(*p)){
			aux = acessarPilhan(*p);
			a = pushPilhan(a, aux); (*p) = popPilha(*p);
		}
		if(verificarPilhaVazia(*p)){
			while(1 <= obterProfundidade(a)){
				aux = acessarPilhan(a);
				(*p) = pushPilhan(*p,aux); a = popPilha(a);
			}
		}else{
			while (1 <= obterProfundidade(a)){
				aux = acessarPilhan(a);
				b = pushPilhan(b, aux); a = popPilha(a);
			}
			while(1 <= obterProfundidade(b)){
				aux = acessarPilhan(b);
				(*p) = pushPilhan(*p, aux); b = popPilha(b);
			}	
		}
		tam--;
	}while (tam != 1);
}
*/
/*
void ordenarPilha(Pilha *p, int x){
	
	Pilha a, b;
	a = criarPilha();
	b = criarPilha();
	
	do{
		while(x != acessarPilha(*p)){
			aux = acessarPilha(*p);
			a = pushPilha(a, aux); (*p) = popPilha(*p);
		}
		
		switch(se){
			case 
		}
		if(acessarPilha(*p) == x){
			aux = acessarPilha(*p);
			a = pushPilha(a, aux); (*p) = popPilha(*p);
		}
		if(verificarPilhaVazia(*p)){
			while(1 <= obterProfundidade(a)){
				aux = acessarPilhan(a);
				(*p) = pushPilhan(*p,aux); a = popPilha(a);
			}
		}else{
			if(obterProfundidade(*p) == x){
				while(1<=obterProfundidade(*p)){
					aux = acessarPilha(a);
					a = pushPilhan(a, aux); (*p) = popPilha(*p);
				}
				while(1<=obterProfundidade(a)){
					aux = acessarPilha(a);
					b = pushPilha(b, aux); a = popPilha(a);
				}
				while(1 <= obterProfundidade(b)){
					aux = acessarPilhan(b);
					(*p) = pushPilhan(*p, aux); b = popPilha(b);
				}
			}
			else{
				concatenar(p, &a);
			}
		}
		x--;
	}while(tam > 1);
}
*/

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