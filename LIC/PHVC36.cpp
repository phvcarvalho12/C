//PHVC36
//Pedro Carvalho - 05/04/2023


#include<stdlib.h>
#include<iostream>
main()
{
	int n;
	
	do
	{
	printf("Digite um numero inteiro (0 para sair): ");
	scanf("%d", &n);
	
	if (n != 0)
		printf("O cubo %d e: %d \n\n", n, n*n*n);
        
	} while (n!= 0);
	printf("\n");
}
