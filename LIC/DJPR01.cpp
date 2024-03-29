 //DJPR - Hotel
 //Pedro Carvalho - 29/05/2023
 
 #include<stdio.h>
 
 //void fmostra(int m[20][14]);
 void funcAluno(char n[40], char c, int id);
 void fclear();
 
 int main(){
 	int tab[20][14];
	int i, j;
	int menu;
	
	printf("Bem vindos ao nosso hotel\n");
	printf("O hotel hortelaria tem prazer de te hospedar\n");
	printf("Nosso hotel contem 20 andares com 14 apartamentos em cada andar\n\n\n");		
    		
	  printf("Escolha uma das opcoes acima referente ao menu: \n");
	  printf("1 - Mapa do hotel\n");
	  printf("2 - Reservar!\n");
	  printf("Digite sua opcao: ");
	  scanf("%d", &menu);
	  	
	    switch(menu){    //menu principal com switch
				
		    case 1:
			    printf("Mapa geral do hotel\n");
        for (i = 20; i > 0; i--)
        	for (j = 1; j < 15; j++)
    	    	tab[i][j] = '.';
			    
				
	            	printf("\t");
	                for(j = 1; j < 15; j++)
		                printf("%2d ", j);
	                 printf("\n\n");
	
	                for(i = 20; i > 0; i--){
		                printf("%2d\t", i);
		            for(j = 1; j < 15; j++)
		                printf(" %c ", tab[i][j]);
	             	printf("\n");
	                }
	                /*printf("\nSelecione um quarto para ser reservado(andar, apartamento): ");	
		            scanf("%d, %d", &i, &j);
		
		            if(i < 1 || i > 20 || j < 1 || j > 14){
		             	printf("Coordenada invalida\n\n");
			            continue;
		            }
		            tab[i][j] = 'R';
                     */
			        break;
	    	case 2:
		    
		    for (i = 20; i > 0; i--)
        	for (j = 1; j < 15; j++)
    	    	tab[i][j] = '.';
				
	            	printf("\t");
	                for(j = 1; j < 15; j++)
		                printf("%2d ", j);
	                 printf("\n\n");
	
	                for(i = 20; i > 0; i--){
		                printf("%2d\t", i);
		            for(j = 1; j < 15; j++)
		                printf(" %c ", tab[i][j]);
	             	printf("\n");
	                }
	                
	                printf("\nSelecione um quarto para ser reservado(andar, apartamento): ");	
		            scanf("%d, %d", &i, &j);
		
		            if(i < 1 || i > 20 || j < 1 || j > 14){
		             	printf("Coordenada invalida\n\n");
			            break;
		            }
		            tab[i][j] = 'R';
		            printf("A sua reserva no andar %d e apartamento %d foi realizada", i, j);
			
			struct staluno //staluno eh apenas o nome da estrutura (nao aloca espaco na memoria)
            {
    	    char nome[40];
          	int celular;
         	int idade;
	        }; 
	
	        struct staluno aluno; //cria a variavel aluno do tipo estrutura
	                      //aqui aloca espaco na memoria para a estrutura aluno
	                     
		    printf("\nDigite seu nome: ");
		    gets(aluno.nome);
		    
		    fclear();
		
		    printf("Informe seu sexo: ");
		    scanf("%d", &aluno.celular);
		
		    fclear();
	
		    printf("Idade: ");
	        scanf("%d", &aluno.idade);
		
		    fclear();
		    //apresentar os dados do aluno
		    funcAluno(aluno.nome, aluno.celular, aluno.idade);
		
	     	//limpa o buffer de entrada do teclado
		    fclear();
			    break;
	    }
 }
 
 
 
 /*void fmostra(int m[20][14]){
 int i, j;
 int tab[20][14];
	
 	for(int i=0; i < 20; i++){
 		for(int j=0; j < 14; j++){
 			printf("%d ", m[i][j]);
 		printf("\n");
		 }
	 }
	 printf("\n\n");
 }
 */
 void funcAluno(char n[40], char c, int id){
 	
	printf("\n-----------------------------------------\n");
	printf("%s", n);
	printf("\tSexo: %c\t\t", c);
	printf("%d anos\t\t", id);
	printf("\n-----------------------------------------\n");
}

void fclear(){
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n'){}
}