//PHVC22 - Comparacao entre numeros inteiros
//Pedro Carvalho - 17/03/2023
/*Entrar com 5 numeros inteiros quaisquer (podem ser negativos)
apresentar os 5 numeros considerados,
e dizer qual eh o maior e qual eh o menor*/


#include<stdio.h>

main()
{
	int n1, n2, n3, n4, n5;
	
	printf("Digite 5 numeros separados por espacos: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
   	
    if (n1 == n2 == n3 == n4 == n5)
        printf("Todos os numeros sao iguais");
    
}