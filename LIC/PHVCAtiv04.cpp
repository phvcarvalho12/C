//PHVC-Ativ04
//Pedro Carvalho - 28/04/2023
/*
O programa deve solicitar e carregar em um vetor, 
20 nÃºmeros inteiros quaisquer,
digitados aleatoriamente. 
Depois deverÃ¡ apresentar um menu reciclÃ¡vel com as
seguintes opÃ§Ãµes de apresentaÃ§Ã£o dos mesmos nÃºmeros:
1. apresentar todos os nÃºmeros digitados na ordem de entrada
2. apresentar todos os nÃºmeros digitados na ordem inversa de entrada
3.apenas os nÃºmeros mÃºltiplos de 3
4. apenas os nÃºmeros precedidos na entrada por um nÃºmero par
outra opÃ§Ã£o qualquer, sair do programa 
*/

#include<stdio.h>

int main()
{
	int n[20];        //n eh a variavel dos numeros digitados
	int i, op;        //op sao as opcoes de 1 ao 4
	
	do
	{
	    printf("Digite 20 numeros inteiros: ");
	    scanf("%d", &n[i]);
	    
		for (i = 0; i < 20; i++)
	    {
	    	printf("Digite o %d numero: ", i + 1);
	    	scanf("%d", &n[i]);
		}
		
		//menu de opcoes:
	    while (1)
		{
	    printf("\nEscolha uma opcao:\n");
        printf("1. Apresentar todos os numeros digitados na ordem de entrada\n");
        printf("2. Apresentar todos os numeros digitados na ordem inversa de entrada\n");
        printf("3. Apresentar apenas os numeros multiplos de 3\n");
        printf("4. Apresentar apenas os numeros precedidos na entrada por um numero par\n");
        printf("Qualquer outro numero eh invalido\n");
        printf("Opcao escolhida: ");
        scanf("%d", &op);
        
	    
	    
    switch (op)
	{
	   case 1:
	   	{
         printf("\n Em ordem de entrada:\n");
	     for (i=0; i<20; i++)
	      {
		     printf("%d\t", n[i], i+1);
	         printf("\n");
	      }
	      break;
	    }
	  
	   case 2:
		{
	     printf("\n Em ondem reversa:\n");
	     for (i=19; i>=0; i--)
	     {
		     printf("%d(%d)\t", n[i], i+1);
	         printf("\n");
	     }
	     break;
        }
	    
	   case 3:
		{
	      printf("\n Apenas os multiplos de 3:\n");
	
	      for(i = 0; i < 20; i++)
	      {
	      	  if(n[i] % 3 == 0)
	      	  {
			     printf("%d(%d)\t", n[i], i+1);
			     printf("\n");
		      }
	      }
	       break;
        }
       
       case 4:
        {
        	printf("\nNumeros precedidos na entrada por um numero par:\n");
        	for (i = 1; i < 20; i++)
        	{
        		if (n[i-1] % 2 == 0)
        		{
        			printf("%d(%d)\t", n[i], i+1);
				}
			}
			break;
		}
		
		case 5:
		 {
		 	printf("\nSaindo do programa.\n");
		 	return 0;
		 	
		 	default:
		 		printf("\nOpcao invalida!\n");
		 }
    } //chave do switch
    } //chave do while
    } //chave do 'do'
	while (n[i]!='\0');
	
}
