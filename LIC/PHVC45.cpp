//PHVC45 - 
//Pedro Carvalho - 19/04/2023
/* Entrar com um inteiro positivo qualquer e 
verificar se eh numero primo (nao aceitar numeros negativos)
o programa deve reciclar saindo apenas quando for digitado 0 ou negativo
numero primo: eh aquele que somente eh divisivel pro ele mesmo e pelo unidade
DICA: Partir sempre de que o numero eh primo
DICA: Os numeros 1 e 2 sao primos.
DICA: Se o numero for negativo, avisar e retornar com o comando 'continue'
*/

#include<stdio.h>
#include<iostream>

main()
{
	int n, i;
	int ok;
	
	do
	{
	printf("Digite um numero inteiro positivo (0 para sair): ");
	scanf("%d", &n);
    
    if (n < 0)
    {
    	printf("Digite apenas numeros positivos\n");
    	continue;
	}
	if (n == 0)
	{
	    break; 
	}
	
	ok = 1;
	
	if (n >= 3)
	{
		for (i = 2; i <= n/2; i++)
		{
			if (n % i == 0)
			{
				ok = 0;
				break;
			}
		}
		
	}
	if (ok == 1)
	    printf("O numero %d\t eh PRIMO\n", n);
	else
	{
		printf("O numero %d NAO EH PRIMO", n);
		printf("(porque eh divisivel pelo menos por %d)\n", i);
	}
    } while (n != 0);
	
}