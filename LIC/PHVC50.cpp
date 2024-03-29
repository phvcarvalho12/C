//PHVC49 - criptografia "Cesar"
//Pedro Carvalho - 28/04/2023
/*Entrar  com um texto de ate 50 caracteres apresentando-o na tela
Criptografa-lo acrescentando o valor de deslocamento 18
Apresentar o texto criptografado
Descriptografar e reapresentar o texto oriental
Reciclar o programa saindo apenas com ENTER
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	char tex[51];
	
	do
	{
		printf("Digite um texto qualquer (enter para sair): ");
		gets(tex);
		if(tex[0] == '\0')
		   break;
	
		
		i = 0;
		while (tex[i] != '\0')
		{
			tex[i] = tex[i] + 10;
			i++;
		}
		
		printf("O texto criptocrafado eh: %s\n", tex);
		
		i = 0;
		while (tex[i]!='\0')
		{
			tex[i] = tex[i] - 10;
			i++;
		}
		printf("O texto descriptografado eh: %s\n", tex);
		
	} while (tex[0] != '\0');
}