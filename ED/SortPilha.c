#include<stdio.h>
#include"PraticaPilha.c"

void ordenar(Pilha *);

int main(){

	Pilha *p;
    
	pushPilhan(*p, 4);
	pushPilhan(*p, 3);
	pushPilhan(*p, 5);
	pushPilhan(*p, 2);
	pushPilhan(*p, 1);

	ordenar(p);
	mostrarPilhan(*p);

	return 0;
}

void ordenar(Pilha *p){

	Pilha a, b;
	a = criarPilha();
	b = criarPilha();

	int aux;
	int tam = obterProfundidade(*p);
	
	do{
		while(1 < tam){
			aux = acessarPilhan(*p);
			pushPilhan(a, aux); popPilha(*p);
		}
		if(verificarPilhaVazia(*p)){
			while(1 <= obterProfundidade(a)){
				aux = acessarPilhan(a);
				pushPilhan(*p,aux); popPilha(a);
			}
		}else{
			while (1 <= obterProfundidade(a)){
				aux = acessarPilhan(a);
				pushPilhan(b, aux); popPilha(a);
			}
			while(1 <= obterProfundidade(b)){
				aux = acessarPilhan(b);
				pushPilhan(*p, aux); popPilha(b);
			}	
		}
		tam--;
	}while (tam != 1);
}
