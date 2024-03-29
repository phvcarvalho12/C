//PHVC12 - Entrada de 3 numeros inteiros
//Pedro Carvalho - 10/03/2023
/*Na entrada, os numeros devem ser separados por:
1 ou mais espacos, ENTER ou Tabulacao
*/

#include <stdio.h>
main()
{
	int n1, n2, n3;
	
	printf("Digite 3 numeros inteiros, separados por espaco: ");
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("Os numeros digitados foram: %d\t %d\t %d\n", n1, n2, n3);
	
}