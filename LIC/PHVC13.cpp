//PHVC13 - Entrada de 3 numeros ponto-flutuante
//Pedro Carvalho - 10/03/2023
/* apresentar os numeros com apenas 2 casas decimais
1. separados por tabulacao
2. encolunados com ponto decimal alinhado e com a soma calculada
*/
//58.3784 85.3849 95.4738
#include<stdio.h>

main()
{
	float n1, n2, n3;
	float soma;
	
	printf("Digite 3 numeros ponto-flutuante, separados por espaco: ");
	scanf("%f %f %f", &n1, &n2, &n3);	
	printf("Foi digitado: %3.5f\t %3.5f\t %3.5f\n", n1, n2, n3);
	
	soma = n1 + n2 + n3;
	
	printf("\nSomando\n %5.9f\n %5.9f\n %5.9f\n", n1, n2, n3);
	printf("------------------------\n");
	
	printf("%6.6f\n", soma);
}