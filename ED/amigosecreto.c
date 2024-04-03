#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 101

int main(){
	int i;
	int rd;	
	int w;
	int z;
	int m = 45;
	int x = m;
	char n[45][max];
	int amigos[45];	

	FILE * arquivo;
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
	
	/*for(i = 0; i < 45; i++){
	printf(" %s " , n[i]); //%s so imprime se tem /0
	}*/ 	
	for(i = 0; i <= m ; i++){
		amigos[i] = i;
	
	}
	do
	{
		int aux = 0;
		rd = (rand() % x) + 1; 
		aux = amigos[x];
		amigos[x] = amigos[rd];
		amigos[rd] = aux;
		x--;
	}while(x != 1);
	
	for(i = 0; i <= 45 ; i++){
		printf("%d\n" , amigos[i]);
	}
	
	for(i = 0; i < 45 ; i++){
		w = amigos[i];
		z = amigos[i+1];
		printf("%s --> %s\n" , n[w] , n[z]);
	}
	
	/*for(i = 0; i < 43; i++){
		printf("%s" , n[i]);
		printf(" -->");
		printf("%s\n" , n[i+1]);
	}*/
	printf("%s --> %s\n" , n[z] , n[0]);
}