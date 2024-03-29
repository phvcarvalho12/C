//PHVC35 - 
//Pedro Carvalho - 05/04/2023
/*Contar de 2000 a 500 de 25 a 25
usar tabulacao e comando "while"*/

#include<stdio.h>
main()
{
	int n;
	n = 1600;
	
	do //SEMPRE executa o bloco de codigo pelo menos 1 vez
	   //mesmo que a expressao do while for falsa
	{	
	printf("%d\t", n);
	   	n = n + 10;
    }
	while(n <= 2023)
	  
	printf("\n");
	return 0;
}