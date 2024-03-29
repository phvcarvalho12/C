//PHVC34 - 
//Pedro Carvalho - 05/04/2023
/*Apresentar a contagem de 0 a 500 com tabulacao
indicacao com um "x" os multiplos de 9*/

#include<stdio.h>

main()
{
	int n;
	n = 0;
	while(n <= 500)
	   {
	   	n++;
	   	printf("%d\t", n);
	   		
		if(n % 9 == 0)
	    printf("%dx\t\n", n);
	   }
	printf("\n");
	return 0;

}