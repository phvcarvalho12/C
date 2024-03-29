//PHVC60 - Funcao fatorial
//Pedro Carvalho - 12/05/2023
/*
Implementar a funcao fatorial(n)
Onde n e um numero inteiro entre 1 e no maximo 12
Fatorial de N: N! = n* (n-1) * (n-2)...
Testar a funcao reciclando o pragrama (0 para sair)
*/

#include<stdio.h>

int fatorial (int n);

int main(){
	
	int n; 
	
	do{
		printf("Digite um numero entre 1 e 12 (0 para sair): ");
		scanf("%d", &n);
		
		if (n == 0){
			printf("Opcao de saida escolhida");
			break;
		}
		
		if (n < 0 || n > 12){
			printf("Numero invalido, digite um numero entre 1 ao 12\n\n");
			continue;
		}
		
			printf("O fatorial de %d eh: %d\n", n, fatorial(n));
		
	} while (n != 0);
}

int fatorial (int n){
    int fat = 1; 
    
    for (int x = n; x > 0; x--)
        fat = fat * x;
    	return fat;
}

int fatorialr (int n){
	if (n <= 1)
	   return 1;
	else
	   return n * fatorialr(n-1);
}
