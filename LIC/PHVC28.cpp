//PHVC28 - Calculo da divisao e do resto
//Pedro Carvalho - 29/03/2023
/*
Entrar com dois numeors inteiros: o dividendo e o divisor
Calcular o resultado da divisao entre eles e o resto
Avisar que nao existe divisao por zero
*/

#include <stdio.h>

main()
{
	int cima, baixo;
	
	printf("Digite dois numeros separados por um espaco para realizar a divisao:  ");
	scanf("%d %d", &cima, &baixo);
	
	if((cima <= 0)||(baixo <= 0))
	  { 
	  printf("ERRO");
      }
	
	printf("O resultado da divisao eh: %d", cima/baixo);
	printf("O resto da divisao eh: %d", cima%baixo);
	

}