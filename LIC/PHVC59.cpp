//PHVC59 -
//Pedro Carvalho - 10/05/2023
/*
Criar um afuncao que verifica validade de uma data
entrar com a data no formato DD/MM/AAAA
Verificar se a data esta correta indicando
todos os erros que possui
(o ano deve ser a partir de 1600)
os meses: 4, 6, 9 e 11 possuem 30 dias)
DICA: veja o programa 25
usar a funcao que testa se o ano eh bissexto
reciclar e sair somente quando for digitado dia 0
*/

#include<stdio.h>

int ftestedata(int d, int m, int a);
int fbissexto(int a);

int main(){

    int dia, mes, ano;
    
    do{
    	printf("\nDigite uma data DD/MM/AAAA (0 para sair): ");
    	scanf("%d/%d/%d", &dia, &mes, &ano);
    	
    	if (dia == 0)
    	   break;
    	   
    	if (ftestedata(dia, mes, ano) == 1)
    	   printf("Data correta\n");
	
	}while (dia != 0);
}
	
//funcao que testa a data
//returna 1 se correta

int ftestedata(int d, int m, int a)
{	
	
	int ultdia; //ultimo dia do mes
	
	if (a < 1600){
		printf("ano invalido\n");
		return 0;
	}
	
	if (m < 1 || m > 12){
		printf("mes invalido");
		return 0;
	}
	
	ultdia = 31;
	if ( m == 4 || m == 6 || m == 9 || m == 11)
	    ultdia = 30;

	if (m == 2){
		if (fbissexto(a) == 1)
		    ultdia = 29;
		else
		    ultdia = 28;
	}
	
	if (d < 1 || d > ultdia){
		printf("dia invalido\n");
		return 0;
	}
	// data correta
	return 1;
}

    
int fbissexto(int a){
	
	if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0)){
	    printf("O ano inserido eh bissexto\n");
		 return 1; //eh bissexto
	}
	  
	else{
	   printf("O ano inserido nao eh bissexto");
	   return 0;
	}
}