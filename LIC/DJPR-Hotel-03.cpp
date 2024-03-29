//DJPR01-Hotel-01 - Hotel - Requisitos 4, 5 e 6- 02/06/2023
//Daniel Teles de Oliveira,
//Joao Victor Torres Soares
//Pedro Henrique Vianna Carvalho
//Rubens Rodrigues Maranesi - 
/*
Req 4 - O programa deve permitir ao usuário realizar o checkin no hotel de hospede que não fez reserva. OK
Req 5 - O programa deve permitir ao usuário realizar o checkout, ou seja, liberar o apartamento que estava ocupado. OK
Req 6 - O programa deve permitir ao usuário cancelar uma reserva. OK
*/

#include <stdio.h>
#include <stdlib.h>

void fMostra (char Hotel[20][14]); //Prototipo da Funcao

void fReserva (char M[20][14]); 

void fChekin_semReserva (char M[20][14]);

void fChekin_comReserva (char M[20][14]);

void fCheckOut (char M[20][14]);

void fCancela_Reserva (char M[20][14]);

void fTaxa_Ocupacao (char M[20][14]);

void fclear();

struct sthotel
{
   //char status_apto;
   char cpf[11];
   char nome[40];
   char telefone[12];
   char email[40];
};

struct endereco
{
	char bairro[40];
	char rua[40];
	int numero;
	char cidade[40];
	char estado[2];	
};



main()   //Funcao principal
{
	int andar, apartamento; 
	char mat[20][14];
	int menu;

   //PARA GERAR A TABELA
   	for (int i = 0; i <= 19; i++)
  	{
    	for (int j = 0; j <= 13; j++)
    	{
      		mat[i][j] = '.';
    	}
  	}
       
    printf("\t\tBem vindos ao nosso hotel\n");    
	printf("O hotel hortelaria tem prazer de te hospedar\n");
	printf("Nosso hotel contem 20 andares com 14 apartamentos em cada andar\n\n\n");		
   
	
		do  //Programa reciclavel
		{	
	            printf("\n\nEscolha uma das opcoes acima referente ao menu: \n");
	            printf("1 - Mapa do hotel\n");
	            printf("2 - Reservar!\n");
	            printf("3 - Chek-in com reserva\n");
	            printf("4 - Check-in sem reserva\n");
	            printf("5 - Check-Out\n");
	            printf("6 - Cancela Reserva\n");
	            printf("Digite sua opcao (0 para sair): ");
	            scanf("%d", &menu);
	            
	        switch(menu) //Menu interativo
	        {
	        	case 1:
	        		{
	        			printf("Mapa do hotel:\n");
	        			fMostra(mat);
						break;		
					}
					
				case 2:
				    {
			            fReserva(mat);
			            break;
			     	}	
				
				case 3:
					{
					    fChekin_comReserva(mat);
	                    break;
	                }
	                
	            case 4:
					{
					    fChekin_semReserva(mat);
	                    break;
	                }
	                
	            case 5:
					{
					    fCheckOut(mat);
	                    break;
	                }
	                
				case 6:
					{
					    fCancela_Reserva(mat);
	                    break;
	                }	   
            }	
            
            
       } while(menu != 0); 
	   
}

	
void fMostra (char Hotel[20][14])   //Apresentar a matriz dos andares e apartamentos 
{

	printf(" APT \t"); 
	    for (int apt = 1;  apt <= 14; apt++){
	        printf(" %3d", apt);
		}
        printf("\n\n");    

	for(int i = 19; i >= 0; i--){
		printf("Andar %2d", i + 1);
		for(int j = 0; j < 14; j++){
			printf("%4c", Hotel[i][j]);
		}	
		printf("\n");
	}
       
}


void fReserva(char M[20][14])  //Reservar o apartamento desejado, e acrescentar R(reserva) na Matriz
{
  int x, y, opcao, andar, apartamento;
	printf("\n");		
	fMostra(M);		
	do
	{
			    
			printf("\n\nDigite o andar e o apartamento desejado para reservar\nPara voltar ao menu digite: -1,-1: ");
			scanf("%d,%d", &x,&y);	
			if (x == -1 && y == -1)
			    break;
			    
		    if (x < -1 || x > 20 || y <-1 || y > 14)
		    {
		    	printf("Coordenanda Invalida\n\n");
		    	continue;
		    }	
		
			
		    andar = x;
			apartamento = y;
			
			if (M[andar - 1][apartamento -1] == 'R')
			{
			    printf("Esse quarto ja esta reservado.");
			    continue;
		    }
		    
		    	if (M[andar - 1][apartamento - 1] == 'O')
			{
			    printf("Esse quarto esta ocupado, portanto nao e possivel reserva-lo.");
			    continue;
		    }
	             M[andar - 1][apartamento - 1] = 'R';
	      system("cls"); //Apaga os historicos anteriores, mostrando somente a opcao desejada      
	      fMostra(M);
	      printf("\nReserva: Apartamento %d Andar %d realizada com sucesso.\n", apartamento, andar);
	      break;
	               
	} while (x != -1 && y != -1);         
	
}	

void fChekin_semReserva (char M[20][14])    //Realizar o checkin no apartamento desejado, e acrescentar O(Ocupado) na reserva realizada na Matriz
{
	int x, y, andar, apartamento, i;
	struct sthotel clientela[280];
	struct endereco hospede[280];
	i = 0;
	 
	 printf("\n");
	 
	 	do
	{
		
		   printf("\nNome: ");
		   gets(clientela[i].nome);
		   
		   fclear();
		   
		   printf("\nTelefone: ");
		   gets(clientela[i].telefone);
		   
		  
		   
		   printf("\nE-mail: ");
		   gets(clientela[i].email);
		   
		
		   
		   printf("\nCPF: ");
		   gets(clientela[i].cpf);
		   
		  
		   
		   printf("\nEstado: ");
		   gets(hospede[i].estado);
		   
		   
		   
		   printf("\nCidade: ");
		   gets(hospede[i].cidade);
		   
		  
		   
		   printf("\nBairro: ");
		   gets(hospede[i].bairro);
		   
	
		   printf("\nRua: ");
		   gets(hospede[i].rua);
		   
	
		   
		    fMostra(M);
			    
				printf("\n\nDigite o andar e o apartamento desejado para realizar o Check-in\nPara voltar ao menu digite: -1,-1: ");
			scanf("%d,%d", &x,&y);	
			if (x == -1)
			    break;
			    
		    if (x < -1 || x > 20 || y <-1 || y > 14)
		    {
		    	printf("Coordenanda Invalida\n\n");
		    	continue;
		    }	
		
			
		    andar = x;
			apartamento = y;
			
				 if (M[andar - 1][apartamento - 1] == 'O')
			{
				printf("Este quarto ja esta ocupado.\n");
				continue;
			}
			
			
			if (M[andar - 1][apartamento - 1] == 'R')
			{
			    M[andar - 1][apartamento - 1] = 'O';
		    }
				
			if (M[andar - 1][apartamento - 1] == '.')
			{
				(M[andar - 1][apartamento - 1] = 'O');
				
			}
			
          system("cls"); //Apaga os historicos anteriores, mostrando somente a opcao desejada    
          i++;
	      fMostra(M);
	      printf("\nCheck-In realizado com sucesso no Apartamento %d, Andar %d\n", apartamento, andar);
	      break;
	               
	} while ((x != -1) || (i < 280));
}

void fChekin_comReserva (char M[20][14])    //Realizar o checkin no apartamento desejado, e acrescentar O(Ocupado) na reserva realizada na Matriz
{
	int x, y, andar, apartamento;
     printf("\n");	
	 fMostra(M);
	 
	 	do
	{
			    
			printf("\n\nDigite o andar e o apartamento desejado para realizar o Check-in\nPara voltar ao menu digite: -1,-1: ");
			scanf("%d,%d", &x,&y);	
			if (x == -1 && y == -1)
			    break;
			    
		    if (x < -1 || x > 20 || y <-1 || y > 14)
		    {
		    	printf("Coordenanda Invalida\n\n");
		    	continue;
		    }	
		
		    andar = x;
			apartamento = y;
			
			if (M[andar - 1][apartamento - 1] == 'O')
			{
				printf("Este quarto ja esta ocupado.\n");
				continue;
			}
			
				
			if (M[andar - 1][apartamento - 1] == '.')
			{
				printf("E necessario realizar uma reserva neste apartamento.\n");
				continue;
			}
            
			if (M[andar - 1][apartamento - 1] == 'R')
			{
			    M[andar - 1][apartamento - 1] = 'O';
		    }
		  system("cls"); //Apaga os historicos anteriores, mostrando somente a opcao desejada      
	      fMostra(M);
	      printf("\nCheck-In realizado com sucesso no Apartamento %d\n, Andar %d",apartamento, andar);
	      break;
	               
	} while (x != -1 && y != -1);
}

void fCheckOut(char M[20][14]) //Permite realizar o check 
{
	int x, y, andar, apartamento;
	printf("\n");
	fMostra(M);
	 
	 	do
	{
			    
			printf("\n\nDigite o andar e o apartamento desejado para realizar o Check-Out\nPara voltar ao menu digite: -1,-1: ");
			scanf("%d,%d", &x,&y);	
			if (x == -1 && y == -1)
			break;
			    
		    if (x < -1 || x > 20 || y <-1 || y > 14)
		    {
		    	printf("Coordenanda Invalida\n\n");
		    	continue;
		    }	
		
			
		    andar = x;
			apartamento = y;
			
			
			
			if (M[andar - 1][apartamento - 1] == 'R')
			{
				printf("O quarto ja se econtra Reservado, nao e possivel fazer o Check-Out.\n");
				continue;
		    }
				
			if (M[andar - 1][apartamento - 1] == '.')
			{
				printf("O quarto ja se encontra desocupado");
				continue;
			}
			
		    if (M[andar - 1][apartamento - 1] == 'O')
			{
				(M[andar - 1][apartamento - 1] = '.');
				
			}
          system("cls"); //Apaga os historicos anteriores, mostrando somente a opcao desejada      
	      fMostra(M);
	      printf("\nCheck-Out realizado com sucesso no Apartamento %d, Andar %d.\n", apartamento, andar);
	      break;
	               
	} while (x != -1 && y != -1);
	
 }
 
void fCancela_Reserva (char M[20][14])  //Realizar  cancelamento do apartamento desejado, altera de 'R' para '.' na Matriz.
 {
 	int x, y, andar, apartamento;
 	printf("\n");
	fMostra(M);
		
		do{
			printf("\n\nDigite o andar e o apartamento desejado para cancelar a sua reserva previamente feita\nPara voltar ao menu digite: -1,-1: ");
			scanf("%d,%d", &x,&y);	
			if (x == -1 && y == -1)
			    break;
			    
			if (x < -1 || x > 20 || y <-1 || y > 14)
		    	{
		    	printf("Coordenanda Invalida\n\n");
		    	continue;
		    	}
		    
			andar = x;
			apartamento = y;
			
			if (M[andar - 1][apartamento - 1] == 'O')
				{
				printf("Este quarto esta ocupado, nao e possivel cancelar a reserva.\n");
				continue;
				}
			if (M[andar - 1][apartamento - 1] == '.')
				{
				printf("Nao ha uma reserva feita neste apartamento.");
				continue;
				}
			if (M[andar - 1][apartamento - 1] == 'R')
				{
			    M[andar - 1][apartamento - 1] = '.';
		    	}
		    system("cls"); //Apaga os historicos anteriores, mostrando somente a opcao desejada    	
			fMostra(M);
		    printf("\nReserva: Apartamento%d , Andar%d cancelada com sucesso!\n\n",apartamento, andar);	
	      	break;
					
		}while (x != -1 && y != -1); 
 }      
	


/*void fTaxa_Ocupacao(char M[20][14])
{
	
	int cont = 0;
	int taxa;

	 if (M[20][14] == 'O')
		cont++;

   taxa = (cont / 280) * 100;
   
   printf("\n\nA taxa de ocupacao do hotel e: %d'%'\n", taxa);
   	
}*/	
	
		
void fclear()
{
 char carac;
 while((carac = fgetc(stdin)) != EOF && carac != '\n'){}
 } 				
	
