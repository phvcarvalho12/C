//PHVC21 - Comparar 2 numeros inteiros
//Pedro Carvalho - 17/03/2023
/*Entrar com 2 numeros inteiros e dizer se:
sao iguais ou qual maior e qual menor
digitar os 2 numeros separados por espaco
*/

#include <stdio.h>

main()
{
	int n1, n2;
	
	printf("Digite dois numeros inteiros separador por espaco: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1==n2)
	    printf("\nO numero %d eh igual ao numero %d", n1, n2);
	else if (n1>n2)
	    printf("O primeiro numero digitado %d eh maior que o segundo %d", n1, n2);
	else if (n2>n1)
	    printf("O segundo numero digitado %d eh maior que o primeiro %d", n2, n1);
		
    
}