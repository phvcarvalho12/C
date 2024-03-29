//PHVC25 - Dias do mes
//Pedro Carvalho - 24/03/2023
/*Entrar com o mes e o ano entre 1600 e 5000
dizer quantos dias esse mes tem.
Considerar que os meses:4, 6, 9 e 11 possuem 30 dias
Considerar que o mes 2 pode ter 28 ou 29 dias conforme
teste de ano bissexto.
Os meses restantes, possuem todos 31 dias.
*/

#include <stdio.h>

main()
{
	int ano, mes;
	
	printf("Digite um ano e um mes separado por um espaco: ");
	scanf("%d %d", &ano, &mes);
	
	
	if((ano < 1600 ||ano > 5000) || (mes < 1 || mes > 12)){
	    printf("Ano invalido\n");
	}
	    {
	    if (mes == 2)
	       if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0)
	           printf("O mes tem 29 dias");
	       
	        else
	           printf("O mes tem 28 dias");
	    
	    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
	        printf("O mes tem 30 dias");
    	
	    else
	        printf("O mes tem 31 dias");
	}
	        
    return 0;
    
}