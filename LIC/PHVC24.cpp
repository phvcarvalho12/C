//PHVC24 - Teste de ano bissexto
//Pedro Carvalho - 22/03/2023
/*Entrar com um ano no intervalo de 1600 a 5000
dizer se o ano Ã© bissexto ou nao
Um ano Ã© bissexto quando:
- eh divisivel por 4 e nao divisivel por 100
ou
- eh divisivel por 400
*/

#include <stdio.h>

main()
{
	int ano, rs;
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	
	if(ano < 1600||ano > 5000)
	    printf("Ano invalido\n");
	else
	    {
	    if (((ano%4 == 0) && (ano%100 != 0)) || (ano%400 == 0))
	        printf("O ano %d eh bissexto\n", ano);
	    else
	        printf("O ano %d NAO eh bissexto\n", ano);
		}
	
	
}