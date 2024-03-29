/*
Dom - View.cpp - Projeto Dominó 
16/08/2023
Grupo: LLPP
Nomes dos integrantes: Lucas Ramos, Larissa Hipolito, Pedro Gabriel, Pedro Carvalho
*/
#include "Dom_LLPP_View.h"

void mostraPeca(tipoPeca peca[28])
{
	for(int x = 0; x< 28; x++)
		printf("(%d|%d)\t", peca[x].lado1, peca[x].lado2);
	printf("\n");
}
void mostrapecajogador(tipoPeca peca[28], char jogador)
{
	int i=0;
	printf("\npecas do jogador %c:\n", jogador);
	for(int x = 0; x< 28; x++)
	  if(peca[x].status == jogador)
	    {
	    i++	;
	    printf("%d.(%d|%d)\t",i, peca[x].lado1, peca[x].lado2);	
		}
	printf("\n");
}

int menu()
{
  int op;
  do{
  	printf("\n\nMenu\n");
    printf("1-Iniciar Jogo(2 Jogadores)\n");
    printf("2-Iniciar Jogo(Contra o computador)\n");
    printf("3-Retornar ao jogo interrompido\n");
    printf("4-Sair do Programa\n");
    printf("Digite a opcao: ",135,198);
    scanf("%d",&op);

    system("cls");
    if(op<1||op>4)
      printf("\t   opcao invalida\n\n",135,198,160);

  
  }while(op<1||op>4);
  
  return op;
}

void mostraMesa(tipoMesa mesa[28])
  {
  if(qtmesa==1)
    if(jvez=='1')
      printf("\nA primeira jogada foi do jogador 2\n\n");
    else
      printf("\nA primeira jogada foi do jogador 1\n\n");
  printf("===========================\n");
  printf("MESA:  ");
  for(int i=0;i<qtmesa;i++)
    printf("[%d|%d] ", mesa[i].ladoE,mesa[i].ladoD);
  printf("\n===========================\n");
  }
  
int menuJ()
  {
  int op;
  printf("\n\n1.Jogar");
  printf("\n2.Comprar");
  printf("\n3.Passar");
  printf("\n4.Voltar menu (Interrompe o jogo)");
  printf("\n5.Salvar Jogo\n");
  printf("Opcao:");
  scanf("%d",&op);
  return op;
  }
	  
int jogar(char jogador)
  {
  char op;
  mostraMesa(mesa);
  mostrapecajogador(peca,jogador);
  op=menuJ();
  switch(op)
    {
  	case 1: 
  	    int p,in;
  	    char l;
  	    printf("Escolha a peca a ser jogada:");
  	    scanf("%d",&p);
  	    in=escolherpeca(peca,p,jogador);
  	    if((in<=28) && testaE(in, peca))
  	    {
  	    	if(mesaE == mesaD||(peca[in].lado1==mesaD&&peca[in].lado2==mesaE)||(peca[in].lado2==mesaD&&peca[in].lado1==mesaE))
  	      {
  	      printf("Escolha o lado da mesa(E/D):");
  	      fclear();
  	      scanf("%c",&l);	
  	      if(l=='E'||l=='e')
  	         carregamesaE(escolherpeca(peca,p,jogador));
		  else if(l=='D'|| l=='d')
		    carregamesaD(escolherpeca(peca,p,jogador));
		    else
		    {
		    	system("cls");
		    	printf("Lado invalido");
			}
			
	      }
	      
		else
			testaLado(escolherpeca(peca,p,jogador));
  	  	}
  	  	else
  	    {
  	      system("cls");
  	      printf("\tpe%ca inv%clida\n", 135, 160);	
		  }
        break;
   case 2:
   	    system("cls");
   	    comprar(jvez);
   	    
   	    break;
   	case 3:	
   		system("cls");
   		if (testaPeca(jvez)==1 && contagempeca('0',peca)==0)
   		    {
   		    jvez=(jvez=='1')?'2':'1';
   		    passa=passa+1;
			}
   		else
   		  printf("\tNao e possivel passar a jogada\n\n");
   		break;
   	case 4:
   		f=0;
   		system("cls");
   		printf("Saindo...");
   		break;
   	
    case 5:
    	system("cls");
    	gravaCadastro ();
    	break;
	default:
   		system("cls");
        printf("\t   opcao invalida\n\n",135,198,160);
        break;
   }
   return op;
  }

int escolherpeca(tipoPeca peca[28],int pe, char jogador)
  {
  	int i=0 ;
    for(int g = 0; g< 28; g++)
             if(peca[g].status== jogador)
               {
               	i++;
			    if(i==pe)
			      return g;
			   }
  }

void printf(char msg[100])
  {
  printf("%s\n",msg);
  }

void ganhador(char jogador1, char jogador2)
{
    int contagemJogador1 = contagempeca(jogador1, peca);
    int contagemJogador2 = contagempeca(jogador2, peca);

    if (contagemJogador1 < contagemJogador2)
    {
        std::cout << "Jogador " << jogador1 << " venceu!" << std::endl;
    }
    else if (contagemJogador2 < contagemJogador1)
    {
        std::cout << "Jogador " << jogador2 << " venceu!" << std::endl;
    }
    else
    {
        std::cout << "Empate! Não temos um vencedor." << std::endl;
    }
}

 