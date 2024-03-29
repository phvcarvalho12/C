//PHVC05 - Aritmetica com variaveis do tipo inteiro
//Pedro Carvalho - 03/03/2023

#include <stdio.h>
main()
{
	int x = 350; //define e carrega a variavel
	int y = 20;
	
	printf("Soma: %d + %d = %d\n", x, y, x+y);
	
	printf("Subtracao: %d - %d = %d\n", x, y, x-y);
	printf("Subtracao: %d - %d = %d\n", y, x, y-x);
	
	printf("Multiplicacao: %d * %d = %d\n", x, y, x*y);
	
	printf("Divisao: %d / %d = %d\n", x, y, x/y);
	printf("Divisao resto: %d / %d = %d\n", x, y, x%y);
}