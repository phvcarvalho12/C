#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 101

int main(){
	FILE * arquivo;
	char n[45][max];
	int m = 45;
	int rd;	
	int i;
	int count = 0;
	srand((int) time(NULL));
	arquivo = fopen("ALUNOS_MA3.txt", "r");
	
	//testando ver se o arquivo consegue abrir
	if (arquivo != NULL){
		for (i = 0; i < 45; i++)
			fgets(n[i], max, arquivo); //esta APENAS lendo o arquivo
	}else{
		printf("O Arquivo nao abriu");
		return 0;
	}
	fclose(arquivo);
	
	//imprime os nomes na ordem
	for(i = 0; i < 45; i++){
		printf("%s\n", n[i]);
	}
	
	//embaralha os nomes
	do{
		char *aux;
		rd = (rand() % m) + 1;
		aux = n;
		n = n[rd];
		n[rd] = aux;
		m--;
	} while (m != 1);

	
	printf("\n");
	
	//mostra os nomes embaralhados, separdos em grupos
	while(count != 5){
		printf("%6s ", n); //com gets vc le um array de caracteres, dps eh so imprimir %s
		count++;
		if (count == 5){
			count = 0;
			printf("\n");
		}
	}
	
	return 0;
}