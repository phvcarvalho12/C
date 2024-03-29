#include <stdio.h>
#define MAX 100

int main(){
	
	char nome[8] = {'L', 'i', 's', 'b', 'e', 't', 'e', '\0'};
	int i;
	
	printf("%s", nome);
	
	i = 0;
	char *meuNome;
	printf("\nDigite seu nome: ");
	gets(meuNome);
		
	
	printf("%s", meuNome);
		
	return 0;
}