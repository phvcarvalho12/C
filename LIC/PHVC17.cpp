//PHVC17 - Teste par ou impar
//Pedro Carvalho - 15/03/2023
//Entrar com um numero inteiro e dizer se e par ou impar

#include<stdio.h>
main()
{
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	if(n % 2 == 0)
	    printf("%d PAR\n", n);
	else
	    printf("%d IMPAR\n", n);    
}