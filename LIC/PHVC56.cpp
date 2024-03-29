//PHVC56 - 
//Pedro Carvalho - 05/05/2023
/*
Criar uma funcao que calcula a quarta potencia de um numero inteiro
Reciclar o programa saindo ao digitar zero
*/

#include <stdio.h>

int fquarta(int num); //prototipo da funcao

int main(){
	
	int n;
	
	do{
		printf("\nDigite um numero inteiro (0 para sair): ");
		scanf("%d", &n);
		if (n != 0)
		   printf("A quarta potencia de %d eh %d\n", n, fquarta(n));
		   
	} while (n != 0); 
}

//definicao da funcao
int fquarta(int num){
	return num * num * num * num;
}