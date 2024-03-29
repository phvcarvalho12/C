//PHVC61 - funcao teste de numeros primos
//Pedro Carvalho - 12/05/2023
/*
Transformar o programa 45 teste de numeros primos
em uma funcao: fprimo que devolve 0 ou 1
0 se o numero nao eh primo
1 se o numero eh primo
Reclicalr o programa aceitando apenas numeros positivos
Sair quando digitar 0
*/

#include<stdio.h>

int fprimo (int n);

int main(){
	int n;
	
	do{
	  
	    printf("Digite um numero inteiro positivo (0 para sair): ");
 	    scanf("%d", &n);
    
        if (n < 0){
    	    printf("Digite apenas numeros positivos\n");
    	    continue;
	    }
	    
		if (n == 0){
	    break; 
		}
        
        if (fprimo(n) == 1)
            printf("O numero %d eh PRIMO\n\n", n);
        else
            printf("O numero %d nao eh PRIMO\n\n", n);
	} while (n != 0);
        
}

int fprimo (int n){
	for (int i = 2; i <= n/2; i++){
		if (n % i == 0)
		   return 0;
		else
		   return 1;
	}
}