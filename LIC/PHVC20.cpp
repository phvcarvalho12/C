//PHVC20 - Divisao de uma heranca
//Pedro Carvalho - 17/03/2023
/*Dividir o valor monetario de uma heranca
entre uma quantidade definida de herdeiros.
Quanto leva cada herdeiro?
O que acontece se digitarmos 0 herdeiros? Como prevenir isso?
E se os numeros digitados forem negativos?
Lembre-se nao existe valor inferior ao centavo 
e nao existe fracao de quantidade de herdeiros*/

#include<stdio.h>

main()
{
	float h, hs, cl;
	
	printf("Digite o valor da heranca: ");
	scanf("%f", &h);
	
	printf("Digite a quantidade de herdeiros: ");
	scanf("%f", &hs);
	
    if (hs <= 0)
	    printf("Nao existe herdeiros iguais a 0");
	else if (h <= 0)
	    printf("Nao existe valor negativou ou igual a 0");
	else
	{
		cl = h/hs;
	
	printf("A quantidade de dinheiro que cada herdeiro ira receber e: %8.2f", cl);
	  		
	}
}