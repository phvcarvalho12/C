//PHVC72 - Estrutura de um grupo de amigos
//Pedro Carvalho - 31/05/2023
/*
Criar um estrutura contendo os seguintes dados de cada amigo:
Nome, celular e idade
O grupo devera  ter 4 amigos
Criar uma funcao qu apresenta esses dados
*/
#include<iostream>

void fGrupo(struct stamigo am[4]);
void fclear();

struct stamigo{
	char nome[40];
	char cel[12];
	int idade;
};

int main(){
	struct stamigo amigos[4];         //Cria um vetor do tipo struct stamigo(reserva espaco)
	int i; 
	
	for(i = 0; i < 4; i++){
		printf("\nNome %d: ", i + 1);
		gets(amigos[i].nome);
		printf("Celular: ");
		gets(amigos[i].cel);
		printf("Idade: ");
		scanf("%d", &amigos[i].idade);
		
		fclear();     //Limpa o buffer de entrada do teclado
	}
	//Apresenta os dados do grupo de amigos
	fGrupo(amigos);
}

void fGrupo(struct stamigo am[4]){
//	system("clear");  //limpa a tela
	int i;

	printf("\nGrupo de amigos\n");
	printf("-------------------------\n");
	for(i = 0; i < 4; i++){
		printf("%s\n", am[i].nome);
		printf("Cel: %s\t\t", am[i].cel);
		printf("%d anos\n\n", am[i].idade);
	}
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n'){}
}