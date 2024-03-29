//PHVC63 - Relacao dos numeros primos
//Pedro Carvalho - 17/05/2023
/*
Apresentar os n primeros numeros primos
*/

#include<stdio.h>

int fprimo(int n);

int main(){
	int n, cont, num;
	
	do{
		printf("\nDigite a quantidade de numeros primos (0 para sair): ");
		scanf("%d", &n);
		
		if(n == 0){
			printf("Opcao de saida escolhida\n");
			break;
		}
		if(n<0){
			printf("Digite apenas numeros positivos\n");
			continue;
		}
		
		cont = 0;
		num = 1;
		while (cont < n){
			if(fprimo(num) == 1){
				printf("%d\t", num);
				cont++;
			}
			num++;
		}		
		
	} while (n != 0);
}

int fprimo(int n){
	if (n >= 3){
		for(int i = 2; i <= n/2; i++){
			if (n % i == 0)
			    return 0;
		}
	}
	return 1;
}