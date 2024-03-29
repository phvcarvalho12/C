//PHVC26 - Estacoes do ano
//Pedro Carvalho - 29/03/2023
/* Entrar com 1	caracter
indicar qual estacao do ano.
P = Primavera, V = Verao, O = Outono, I = Inverno
se for o caso, indicar "caracter invalido"
usar if else if else ...*/
#include <stdio.h>

main()
{
	char xcar;
	
	printf("Digitar a estacao do ano: ");
	scanf("%c", &xcar);
	
	switch (xcar)
	{
		case 'P':
			printf("Primavera\n");
			break;
		case 'V':
		    printf("Verao\n");
		    break;
		case 'I':
			printf("Inverno\n");
			break;
		case 'O':
			printf("Outono\n");
			break;
	}
	return 0;
}