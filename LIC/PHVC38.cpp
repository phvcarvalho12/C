//PHVC38 - Faixa de peso ideal com reciclagem com DO-WHILE
//Pedro Carvalho - 12/04/2023
/*IMC = peso/(altura*altura)
Dada a sua altura em metros, calcule a faixa de seu peso ideal
em Kg com 1 casa decimal.
considerando que seu IMC deve estar entre: 18.5 e 24.99999)*/

#include<stdio.h>

main()
{
	int peso, pesomin, pesomax;
	float altura, imc;
	
	printf("Digite seu peso: ");
	scanf("%d", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	do
	{
	if ((peso<=0)||(altura<=0)||(altura>=3)){
	    printf("Valor invalido");
	    return 0;
	}
	
	if ((pesomin < 18,5)||(pesomax > 25)){
	    printf("IMC fora do padrao saudavel");
	    return 0;
	}
	
	else	
	printf("Seu imc eh: %.1f", peso/(altura*altura));
	
}
while (altura!=0);
}