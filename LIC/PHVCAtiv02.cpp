//PHVCAtiv2 - Impressora
//Pedro Carvalho - 28/03/2023
/* Entrar com 2 variaveis do tipo inteiro
Ira ser digitado um numero de paginas nas quais
precisara criar um codigo dizendo quanto tempo demorou
para imprimir todas as paginas
Dizendo se sera frente e verso ou normal
E apontar "Erro" dentro do codigo para numeros nao inteiros
*/

#include <stdio.h>

main()
{
	int qpag, fv, qh, qm, qs;
	
	printf("Quantas paginas serao impressas?");
	scanf("%d", &qpag);
	
	if(qpag <= 0)
	   {
	   printf("Erro de impressao\n");
	   return 0; //funcao para interomper o programa
       } 	

	printf("Sera frente e verso? 1 ou 0: ");
	scanf("%d", &fv);
	
	if(fv == 1)
	   printf("Impressao sera frente e verso\n");
	
	else
	   printf("Impressao sera normal\n");
	
	if((qpag > 0) && (fv == 1))
	{
	   qm = qpag/4;
	   qh = qm/60;
	   qs = qpag%4*15;
	   qm = qm%60; //calculo para saber quanto tempo levara
    }
	else
	{
		qm = qpag/5;
	   qh = qm/60;
	   qs = qpag%5*15;
	   qm = qm%60;
	 } 
	 
	 printf("As %d paginas serao impressas em %d horas e %d segundos", qpag, qh, qm, qs);
	 
    return 0;
	 
}