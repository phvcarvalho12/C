#include<stdio.h>
#include"Booleano.h"
#include"PraticaPilha.c"
#include"PraticaListas.c"
//#define max 20

bool verificarParenteses(Lista);

int main(){
	Lista l;
	bool ok;
	criarLista();
	
	
	//l = add(l, '(');
	//l = add(l, '(');
	l = add(l, '(');
	l = add(l, 'A');
	l = add(l, '+');
	l = add(l, 'B');
	l = add(l, ')');
	//l = add(l, '*');
	//l = add(l, 'C');
	//l = add(l, ';');
	
	ok = verificarParenteses(l);
	
	//printf("ok = %B", ok);
	printf("%s", ok?"false":"true");
	return 0;
}

bool verificarParenteses(Lista l){
	Pilha p; int i = 1;
	bool ok = true;
	criarPilha();
	
	while(i < obterTamanho(l) && ok != false){		
		if(obterElemento(l, i) == '('){
			pushPilha(p, '(');
		}else if(obterElemento(l, i) == ')'){
				if(!verificarPilhaVazia(p))
					popPilha(p);
				else
					ok = false;
		}
		//printf("f");
		i++;
	}
	if(obterProfundidade(p) != 0)
		ok = false;
	return ok;
}