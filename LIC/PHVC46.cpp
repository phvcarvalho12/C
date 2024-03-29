//PHVC46 - Matriz unidimensional (vetar ou array)
//Pedro Carvalho - 26/04/2023
/*Entrar com 12 numeros inteiros e depois apresenta-los
na ordem de entrada e em ordem de inversa
*/

#include<stdio.h>

int main()
{
	int n [12];     //reserva espaco para 12 numeros inteiros
	                //(indexados de 0 a 11)
	                
	int i;
	//entrada dos numeros
	for (i=0; i<12; i++)
	{
		printf("%d digite um numero inteiro qualquer: ", i+1);
		scanf("%d", &n[i]);
	}
	
	//apresentacao dos numeros na ordem de entrada
	printf("\n Em ordem de entrada\n");
	for (i=0; i<12; i++)
	    printf("%d\t", n[i]);
	printf("\n");
	
	//apresentacao dos numeros na ordem inversa da entrada
	printf("\n Em ondem reversa\n");
	for (i=11; i>0; i--)
	    printf("%d\t", n[i]);
	printf("\n");
}