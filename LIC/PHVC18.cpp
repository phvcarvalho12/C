//PHVC18 - Indicar a estacao do ano
//Pedro Carvalho - 15/03/2023
/* Entrar com 1	caracter
indicar qual estacao do ano.
P = Primavera, V = Verao, O = Outono, I = Inverno
se for o caso, indicar "caracter invalido"
usar if else if else ...*/

#include<stdio.h>
main()
{
	char xcar;
	
	printf("Digitar a estacao do ano: ");
	scanf("%c", &xcar);
	
	if (xcar == 'P')
	    printf("Primavera\n");
    else if (xcar == 'V')
        printf("Verao\n");
    else if (xcar == 'O')
        printf("Outono\n");
	else if (xcar == 'I')
	    printf("Inverno\n");
	else
	    printf("Caracter invalido\n");   
        
}