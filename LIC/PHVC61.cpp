//PHVC61 - Calculo dos fatoriais
//Pedro Carvalho - 12/05/2023
/*
Apresentar os 12 fatoriais
Usar a funcao que calcula o fatorial (60)
*/

#include<stdio.h>

int fatorial(int n);

int main(){
	
	int n;
	
	printf("Calculo dos fatoriais\n\n");
	
	for (n = 1; n <= 12; n++)
	printf("O fatorial de %d eh:    %2d!\t = %d\n", n, n, fatorial(n));
	
}
int fatorial (int n){
    int fat = 1; 
    
    for (int x = n; x > 0; x--)
        fat = fat * x;
    	return fat;
}