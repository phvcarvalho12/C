//PHVC55 - funcao sem retorno
//Pedro Carvalho - 05/05/2023

#include<stdio.h>
void fdobro (int num); //prototipo da funcao

int main(){
	int n;
	
	do{
		printf("\nDigite um numero inteiro (0 para sair): ");
		scanf("%d", &n);
		
		if (n!=0)
		   fdobro(n);
		   
	}while (n != 0);
}

//definicao da funcao
void fdobro (int num){
	printf("O dobro de %d eh %d\n", num, num * 2);
}