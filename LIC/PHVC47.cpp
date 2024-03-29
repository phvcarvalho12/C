//PHVC47 - vetor com selecao
//Pedro Carvalho - 26/04/2023
/* Entrar com 20 numeoros inteiros quaisquer
dizer quais deles sao pares e quais sao impares
*/

#include<stdio.h>

int main()
{
	int n[20];
	int i;
	
	for (i=0; i<20; i++)
	{
		printf("%d digite um numero inteiro qualquer: ", i+1);
		scanf("%d", &n[i]);
	}
	
	printf("\n Todos os numeros pares:\n");
	for (i=0; i<20; i++)
	if (n[i] % 2 == 0){
	    printf("%d\t", n[i]);
	printf("\n");
    }
	
	printf("\n Todos os numeros impares:\n");
	for (i=0; i<20; i++)
	if (n[i] % 2 != 0){
	    printf("%d\t", n[i]);
	printf("\n");
    }
}