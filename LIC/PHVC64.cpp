//PHVC64 - Numeros primos em pesquisa
//Pedro Carvalho - 17/05/2023
/*
Apresentar os n primeiros numeros primos em 4 colunas:
- um contador de 1 a n,
- o numero primo
- a difenrenca desse primo com o primo anterior
- um grafico (asteriscos) refetente a essa diferenca
Entrar com a quantidade n reciclando e saidno ao digitar 0.
Numero primo: eh o numero somente divisivel por ele mesmo e pela unidade
*/

#include<stdio.h>
int fprimo(int N);
void fgraf(int n);

int main(){
	int N, cont, num, ant;
	
    do{
		printf("\nDigite a quantidade de numeros primos (0 para sair): ");
		scanf("%d", &N);
		
		if(N == 0){
			printf("Opcao de saida escolhida\n");
			break;
		}
		if(N<0){
			printf("Digite apenas numeros positivos\n");
			continue;
		}
		
		cont = 0;
		ant = 0;
		num = 1;
		printf("\ncont\tprimo\tdiferenca\n");
		while (cont < N){
			if(fprimo(num) == 1){
				cont++;
				printf("%d\t %d\t %d\t", cont, num, num - ant);
				fgraf(num - ant);
				ant = num;
			}
			num++;
		}		
		printf("\n");
	} while (N != 0);
}

/*
Observacao sobre a funcao fprimo (int N)
Para acelerar a verificacao de numero primo, podemos
substituir o limite da instrucao for para: raiz quadrada de N
da seguinte forma:
     for (i=2; i <= sqrt(N); i++)
essa funcao sqrt() pertence a biblioteca math.h
*/

int fprimo(int n){
	if (n >= 3){
		for(int i = 2; i <= n/2; i++){
			if (n % i == 0)
			    return 0;
		}
	}
	return 1;
}

void fgraf(int n){
	for(int i = 1; i <= n; i++)
	    printf("*");
	printf("\n");
}