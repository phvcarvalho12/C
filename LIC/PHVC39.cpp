//PHVC39 - 
//Pedro Carvalho - 12/04/2023
/*Informar uma temperatura, indicando a unidade
(C=Celsius ou F=Farenheit)
fazer a conversao para outra unidade e apresenta-la
F = (9 * C/5) + 32;
Reciclar o programa e so sair quando digitar X na unidade*/

#include<stdio.h>

main()
{
	float temp, temp1, temp2;
	char unid;
	
	do
	{
		printf("Digite a temperatura e sua unidade (x para sair): ");
		scanf("%f %c", &temp, &unid);
		if((unid == 'x')||(unid == 'x'))
		break;
	
	if ((unid == 'C')||(unid == 'c'))
	{
		temp1 = (9 * temp/5) + 32;
		printf("%f C -------------> %f F\n", temp, temp1);
	}
	
	else if ((unid == 'F')||(unid == 'f'))
	{
		temp2 = ((temp - 32) / 9) * 5;
		printf("%f F--------------> %f C\n", temp, temp2);
	}
	
    } while (unid != 'x');	
}