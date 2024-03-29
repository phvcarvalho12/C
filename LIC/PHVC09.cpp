//PHVC09 - Calculando notas de aluno
//Pedro Carvalho - 08/03/2023
/*Dadas 3 notas de um aluno, calcular a media aritmetica
Mostrar a media nos seguintes casos:
sem edicao do valor
com 1 e com 3 casas decimais
sem casas decimais*/

#include <stdio.h>

main()
{
	float n1, n2, n3, media;
	
	n1 = 5.5;
	n2 = 7.3;
	n3 = 9.0;
	media = (n1 + n2 + n3)/3;
	
	printf("Media do aluno com todas as casas decimais: %f\n", media);
	printf("Media com 1 casa decimal: %1.1f\n", media);
	printf("Media com 3 casa decimal: %1.3f\n", media);
	printf("Media sem casa decimal: %1.0f\n", media);
	
}