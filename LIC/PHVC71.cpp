//PHVC71 - Estrutura de alunos
//Pedro Carvalho - 26/05/2023
/*
Solicitar os seguintes dados de um aluno:
nome, sexo, idade e media final
(usamos neste teste 4 dados de tipos difentes)
Criar uma estrutura contendo esses tipos
Criar uma funcao que recebe e apresenta esses 4 dados
Reciclar o programa saidno quando for digitado apenas Enter
*/

#include <stdio.h>

void funcAluno(char n[40], char s, int i, float md);
void fclear();

int main(){
	struct staluno //staluno eh apenas o nome da estrutura (nao aloca espaco na memoria)
    {
    	char nome[40];
    	char sexo;
    	int idade;
    	float media;
	}; 
	
	struct staluno aluno; //cria a variavel aluno do tipo estrutura
	                      //aqui aloca espaco na memoria para a estrutura aluno
	                      
	do{
		printf("\nNome (enter para sair): ");
		gets(aluno.nome);
	
		if(aluno.nome[0] == '\0') //testa string vazia
		    break;
		
		printf("Sexo: ");
		scanf("%c", &aluno.sexo);
		
		fclear();
	
		printf("Idade: ");
		scanf("%d", &aluno.idade);
		
		printf("Nota media: ");
		scanf("%f", &aluno.media);
		
		//apresentar os dados do aluno
		funcAluno(aluno.nome, aluno.sexo, aluno.idade, aluno.media);
		
		//limpa o buffer de entrada do teclado
		fclear();
	}while(1);
}

void funcAluno(char n[40], char s, int i, float md){
	printf("\n-----------------------------------------\n");
	printf("%s", n);
	printf("\tSexo: %c\t\t", s);
	printf("%d anos\t\t", i);
	printf("Nota Media: %4.1f\n", md);
	printf("--------------------------------------------\n");
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n'){}
}