#include<stdio.h>
#include"PraticaPilha.c"

void ordenar(Pilha *);

int main(){

	Pilha *p;
    
	return 0;
}

void ordenar(Pilha *p){
	
	Pilha aux, pix;
	aux = criarPilha();
	pix = criarPilha();
	
	int j, i = 1, tam = obterProfundidade(*p);
	unsigned int elemento;
	
	do{
		while(i != tam){
			elemento = acessarPilha(*p);
			pushPilha(aux, elemento); popPilha(*p);
		}
		if(verificarPilhaVazia(*p)){
				for(j = tam; j >= 1; j--){  
					elemento = acessarPilha(aux);
					pushPilha(*p,elemento); popPilha(aux);
				}
		}else if(){
			
		}
		tam--;
	}while(tam != 1);
}