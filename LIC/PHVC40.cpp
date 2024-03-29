//PHVC40 - Calculadora com menu reciclavel
//Pedro Carvalho - 14/04/2023
/*Reciclar o seguinte programa
entrar com dois numeros do tipo ponto-flutuante
apresentar um menu com as opcoes
0- saida para outros numeros
1- soma
2- subtracao
3- multiplicacao
4- divisao
usando o comando 'switch' executar a operacao selecionada
com 4 casas decimais, retornando sempre para o menu
na opcao '0' do menu, o programa retorna a pedir os dois numeros iniciais
sair do programa se os ambos numeros digitados forem zero
*/

#include <stdio.h>

main()
{
    float n1, n2;
    int n3;

    do
	{
		
		printf("Digite dois numeros para fazer a operacao: ");
		scanf("%f %f", &n1, &n2);
		
		if ((n1 == 0)&&(n2 == 0))
		{
				printf("Opcao escolhida eh sair do programa\n");
			    break;
		}
		
		n3 = -1;
		while(n3 != -1);
		{
		
		printf("As operacoes disponiveis sao:\n");
		printf("0- saida para outros numeros\n");
        printf("1- soma\n");
        printf("2- subtracao\n");
        printf("3- multiplicacao\n");
        printf("4- divisao\n");
        printf("O numero escolhido eh: ");
        scanf("%d", &n3);
	
			switch (n3)
			{
		    case 0:
		    	printf("Opcao escolhida eh sair do programa\n");
			    break;
			    
			case 1:
				printf("A soma dos numeros eh: %.2f + %.2f = %.2f\n", n1, n2, n1+n2);
				break;
			
			case 2:
				printf("A subtracao dos numeros eh: %.2f - %.2f = %.2f\n", n1, n2, n1-n2);
				break;
			
			case 3:
				printf("A multiplicacao dos numeros eh: %.2f * %.2f = %.2f\n", n1, n2, n1*n2);
				break;
			
			case 4:
				printf("A divisao dos numeros eh: %.2f / %.2f = %.2f\n", n1, n2, n1/n2);
				break;
			
			default:
				printf("Caracter invalido\n");
				break;
		   }
	    }
    } while (n1 != 0);
}