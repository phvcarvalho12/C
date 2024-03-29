//PHVC22 - Comparacao entre numeros inteiros
//Pedro Carvalho - 17/03/2023
/*Entrar com 5 numeros inteiros quaisquer (podem ser negativos)
apresentar os 5 numeros considerados,
e dizer qual eh o maior e qual eh o menor*/

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	int num[5]; //armazenador dos numeros
	int maior, menor;
	
	printf("Digite 5 numeros inteiros ou negativos: ");
	
	
	for(int i = 0; i < 5; i++) //o for serve para nao precisar digitar todas as variaveis
	{
		cin >> num[i];
	}
	maior = num[0];
    menor = num[0];
    
    for(int i = 1; i < 5; i++) 
	{
        if(num[i] > maior) 
		{
            maior = num[i];
        }
        if(num[i] < menor) 
		{
            menor = num[i];
        }
    }
    
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    
    
    return 0;
}