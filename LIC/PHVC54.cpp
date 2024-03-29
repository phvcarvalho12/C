//PHVC54 - 
//Pedro Carvalho - 05/05/2023
/*
Solicitar o indicador da tabuada
Apresentar essa tabuada de 0 ate 20
reciclar o programa saindo com o indicador 0
*/

#include<stdio.h>

int main(){
	int t, n; //t de tabuada //n de numero digitado
	
	do{
		printf("Digite um numero para apresentar sua tabuada de 1 ao 20: ");
		scanf("%d", &n);
		
		for(t = 0; t <= 20; t++){
			printf("%4d * %4d = %4d\n", n, t, n * t);
			
		if (n == 0){
			printf("Opcao de sair 'escolhida'");
			break;
		}
		}
	} while(n != 0);
}