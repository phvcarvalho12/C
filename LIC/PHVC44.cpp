//PHVC44 - 
//Pedro Carvalho - 19/04/2023
/* Apresentar os 100 primeiros multipolos de 6
iniciando pelo proprio numero 6
*/

#include<stdio.h>

main()
{
	int n, cont;
	n = 6;
	
	for (cont = 1; cont <= 100; cont++)
	   {
	    printf("%dx\t", n);
	    n = n + 6;
       }
}