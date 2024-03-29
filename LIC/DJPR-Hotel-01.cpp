//DJPR01-Hotel-01 - Hotel - 3 primeiros Requisitos - 02/06/2023
//Daniel Teles de Oliveira,
//Joao Victor Torres Soares
//Pedro Henrique Vianna Carvalho
//Rubens Rodrigues Maranesi - 
/*
Desenvolver um programa em C para controlar a ocupação e reservas dos apartamentos do hotel. 
Deve ser mantido o status de cada apartamento e as opções de check-in/check-oute a apresentação da ocupação.  
*/

#include <stdio.h>
#include <stdlib.h>

void fMostra (char Hotel[20][14]); //Prototipo da Funcao

void fReserva (char M[20][14]); 

void fChekin (char M[20][14]);


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
       
    printf("Bem vindos ao nosso hotel\n");    
	printf("O hotel hortelaria tem prazer de te hospedar\n");
	printf("Nosso hotel contem 20 andares com 14 apartamentos em cada andar\n\n\n");		
   
	
		do  //Programa reciclavel
		{	
	            printf("\nEscolha uma das opcoes acima referente ao menu: \n");
	            printf("1 - Mapa do hotel\n");
	            printf("2 - Reservar!\n");
	            printf("3 - Chek-in\n");
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
					    fChekin(mat);
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
			     printf("\nSua reserva esta realizada!\n\n");
	             M[andar - 1][apartamento - 1] = 'R';
	             
	      fMostra(M);
	               
	} while (x != -1 && y != -1);         
	
}	

void fChekin (char M[20][14])    //Realizar o checkin no apartamento desejado, e acrescentar O(Ocupado) na reserva realizada na Matriz
{
	int x, y, andar, apartamento;
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
			
			
			if (M[andar - 1][apartamento - 1] == 'R')
			{
				printf("\nCheck-in realizado com sucesso!\n\n");
			    M[andar - 1][apartamento - 1] = 'O';
		    }
				
			else
			{
				printf("E necessario realizar uma reserva para ocupar esse quarto.\n");
				continue;
			}
            
	      fMostra(M);
	               
	} while (x != -1 && y != -1);         
	
		
}     
