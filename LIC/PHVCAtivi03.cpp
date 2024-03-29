//PHVCAtiv3 - IMC
//Pedro Carvalho - 13/04/2023
/* Entrar com duas variaveis de peso e altura
calcular o imc e enquadrar em alguma faxetaria de peso
*/

#include <stdio.h>

main()
{
	float altura, peso, imc;
    
    do
    {
    
	printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso (x para sair): ");
    scanf("%f", &peso);
    
     if ((altura <= 0)||(altura >= 3)||(peso >= 300)||(peso <= 0)){
    	   	  printf("Peso ou altura invalido\n\n");
    	   	  return 0;
           }
    
    imc = peso / (altura*altura);
        printf("O seu imc eh: %.2f\n\n", imc);
    
    	   if (imc <= 18.5)
    	   printf("Magreza extrema\n\n");
    	   
    	   else if ((imc >= 18.6)&&(imc <= 24.9))
    	   printf("Seu IMC eh saudavel\n\n");
    	   
    	   else if ((imc >= 25)&&(imc <= 29.9))
    	   printf("Voce esta com sobre peso\n\n");
    	       	   
    	   else if ((imc >= 30)&&(imc <= 34.9))
    	   printf("Voce esta obeso, no grau 1\n\n");
    	   
    	   else if ((imc >= 35)&&(imc <= 39.9))
    	   printf("Voce esta obeso, no grau 2\n\n");
    	   
    	   else if (imc > 40)
    	   printf("Voce esta obeso, no grau 3\n\n");
    	   
           
	} while ((peso != 0)||(altura != 0));
    
}