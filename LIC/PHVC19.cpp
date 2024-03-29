//PHVC19 - 
//Pedro Carvalho - 15/03/2023
/*Entrar com dois numeros inteiros: o dividendo e o divisor
Calcular o resultado e o resto da divisao entre eles
Avisar que nao existe divisao por zero*/

#include<stdio.h>
main()
{
	int n1, n2, cl;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	if (n2 == 0)
	    printf("Nao existe divisao por zero");
	
	cl = n1 / n2;
	//rs = cl;
	
	printf("O resultado e: %d\n\n", cl);
	

	if (n1 % n2 == 0)
        printf("O resultado do numero digitado nao tem resto");
	else
        printf("O resultado do numero digitado tem resto um");
        
}