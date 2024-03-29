//PHVC33 - 
//Pedro Carvalho - 05/04/2023
/*Contar de 2000 a 500 de 25 a 25
usar tabulacao e comando "while"*/

#include<stdio.h>
main()
{
	int n;
	n = 2000;
	while(n >= 500)
	   {
	   	printf("%d\t", n);
	   	n = n - 25; //Ou usar a forma obreviada: n++;
	   }
	printf("\n");
	return 0;
}