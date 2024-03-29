//PHVC10 - Entrada de numero inteiro pelo teclado
//Pedro Carvalho - 08/03/2023

#include <stdio.h>

main()
{
	int Num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &Num); //O & indica o enderecao da variavel no qual esta, sendo inserido o valor
	
	printf("Foi digitado: %d\n", Num);
	
}