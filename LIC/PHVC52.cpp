//PHVC52 - Localizar um elemento numa string
//Pedro Carvalho - 03/05/2023
/*
Entrar inicialmente com um texto (uma string de ate 100 caracteres)
Depois, de forma reciclavel, digitar 1 caracter
Localizar todas as ocorrencias desse caracter no texto indicado
quantas vezes ocorre e as suas respectivas posicoes
ou a mensagem: caracter inexistente no texto
sair somente quando digitar o caracter '@'
Dica: considerar o caracter a ser pesquisado como uma string de 1 caracter
*/

#include<stdio.h>

int main()
{
	char tex[101];
	char carac[2];
	int i, cont;
 	
	printf("Digite um texto qualquer: ");
    gets(tex);
	puts(tex);
	
	do
	{
		printf("\caracter a pesquisar (@ para sair): ");
		gets(carac);
		if (carac[0] == '@')
		   break;
		   
		//pesquisa no texto
		cont = 0;
		printf("posicoes: ");
		
		for(i = 0; tex[i] != '\0'; i++)
		{
			if(tex[i] == carac[0])
			{
				cont++;
				printf("%d ", i);
			}
	    }
		
		if (cont > 0)
		   printf("\tTotal: %d ocorrencias\n", cont);
		   
		else
		   printf("\tCaracter inexistente no texto\n");
		
	} while (carac[0] != '@'); //ou while(1) 
    //A opcao while(1) so eh possivel porque a saida do loop "do_while" é feita com "break"
}