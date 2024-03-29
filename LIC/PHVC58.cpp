//PHVC58 - Funcao teste de ano bissexto
//Pedro Carvalho - 10/05/2023
/*
Criar uma funcao que testa se um ano eh bissexto
Usar essa funcao de forma recursiva, saindo somente
quando o ano for 0
O ano deve ester no intervalo de 1600 a 3000

Um ano eh bissexto quando:
- eh divisivel por 4 e nao divisivel por 100
OU 
- eh divisivel por 400
DICA? Veja o programa 24
*/

#include<stdio.h>

int fbissexto(int a); //devolve 1 se for bissexto

int main(){
	
	int ano;
	
	do{
		printf("Escreve um ano (entre 1600 a 3000): ");
		scanf("%d", &ano);
		
		if (ano == 0){
			printf("Valor escolhido para sair");
			break;
		}
		if (ano < 1600 || ano > 3000){
			printf("Valor invalido");
			continue;
		}
		
		if (fbissexto(ano) == 1){
			printf("O ano %d eh bissexto\n", ano);
	    }
	        else
	        printf("O ano %d NAO eh bissexto\n", ano);
	
	} while (ano != 0);
	}
	

int fbissexto(int a){
	
	if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
	   return 1; //eh bissexto
	else
	   return 0;
}

