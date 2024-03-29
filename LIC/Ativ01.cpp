//PHVC15 - Transformar graus Fahrenheit em Celsius
//Pedro Carvalho - 13/03/2023

#include<stdio.h>

main()
{
	float cs, ft, rs;
	
	printf("Digite uma temperatura em fahrenheit: ", ft);
	scanf("%f", &ft); //espaco para colocar o numero e escanear
	
	printf("Foi digitado: %1.0f\n", ft);
	
	rs = (ft - 32) * 0.5556 ; //calculo para a conversao da temperatura
	
	cs = rs; //renomeando a variavel
	
	printf("----------------------------------------------------\n");
	printf("O resultado da conversao do numero inserido e: %1.2f\n\n", cs);
	
	printf("O resultado final em celcius e: %1.2f\n", cs);
	
}