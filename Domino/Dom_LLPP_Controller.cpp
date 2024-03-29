/*
Dom - Controller.cpp - Projeto Dominó 
16/08/2023
Grupo: LLPP
Nomes dos integrantes: Lucas Ramos, Larissa Hipolito, Pedro Gabriel, Pedro Carvalho
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Dom_LLPP_Controller.h"
#include "Dom_LLPP_View.cpp"


void pecasdom(tipoPeca peca[28])
{
	
	int i, j;
	int e = 0;

	for(i = 0; i< 7; i++)
		for (j = i; j < 7; j++)
			{
			
				peca[e].lado1 = i;
				peca[e].lado2 = j;
				peca[e].status = '0';
				e++;
			}
}

void embaralha(tipoPeca peca[28])
{
	tipoPeca aux;
	int j, guardapeca;
	
	
	srand(time(NULL));
	
	for(j = 0; j < 28; j++)
	{
		guardapeca = (rand()%28);
		aux = peca[j];
		peca[j] = peca[guardapeca];
		peca[guardapeca] = aux;
	}
}

void entregarPeca (tipoPeca peca[28])
{
	
	for(int i = 0; i < 7; i++)
		{
			peca[i].status = '1';
			peca[i+7].status = '2';
		}
	for(int a=14; a<28; a++)
	  peca[a].status = '0';
	
	
}

//essa funcao retorna a posicao da primeira peca a ser jogada
int firstJogada(tipoPeca peca[28])
{
	int i=-1,s=0,a;
	tipoPeca gpeca;
	gpeca.lado1=-1;
	gpeca.lado2=-1;
 	for(a=0;a<14;a++)
	  if(peca[a].lado1==peca[a].lado2)
	    if(peca[a].lado1>=gpeca.lado1)
	      {
	      gpeca.lado1=peca[a].lado1;
	      gpeca.lado2=peca[a].lado2;
	      i=a;
		  }
	if(i!=-1)
	  return i;
	else
	  {
	  for(a=0;a<14;a++)
	    if(peca[a].lado1+peca[a].lado2>s)
	      s = peca[a].lado1+peca[a].lado2;
	      i=a;
	  }
	return a;
}

//essa funcao retorna de quem sera o primeiro jogador e atualiza a mesa com a primeira peca
char primeirajogada(int pos, tipoPeca peca[28], tipoMesa mesa[28])
{
	char jvez;
	mesa[0].ladoE = peca[pos].lado1;
	mesa[0].ladoD = peca[pos].lado2;
	mesaE = peca[pos].lado1;
	mesaD = peca[pos].lado2;
	if(peca[pos].status == '1')
		jvez = '2';
	else
		jvez = '1';
	peca[pos].status = 'm';
	qtmesa = 1;
	return jvez;
}


void iniciarPeca()
{
	pecasdom(peca);
	embaralha(peca);
	mostraPeca(peca);
}

void executarMenu()
{
	int op;
	do{
	
	op = menu();
	switch(op)
	    {
	  case 1: 
		iniciarjogo();
		break;
	  case 2:
		break;
	  case 3:
	  	recuperaCadastro();
	  	retornajogo();
		break;
	  case 4:
	  	break;
        }     	
	}while(op!=4);
	 
}

void iniciarjogo()
{
		
	char jant;
	entregarPeca (peca);
	passa=0;
	jvez = primeirajogada(firstJogada(peca), peca, mesa);	
	int f=1;
	char ganha;
	 while(f==1) 
	  {
	  jant=(jvez=='1')?'2':'1';
	  if(jogar(jvez) == 4)
	     f=0;
	  if((contagempeca(jvez, peca)== 0 && contagempeca('0', peca)== 0)||(passa==2))
	    {
	    ganhador('1','2');
	    f=0;
		}
	}
	embaralha(peca);
    
}

void carregamesaE(int pj)
  {
  	
  	  for(int i=qtmesa;i>0;i--)
       mesa[i]=mesa[i-1];
  
  	if(peca[pj].lado2==mesaE)
      {
      mesa[0].ladoD=peca[pj].lado2;
	  mesa[0].ladoE=peca[pj].lado1;
	  }
    else
      {
      mesa[0].ladoD=peca[pj].lado1;
      mesa[0].ladoE=peca[pj].lado2;	
   }
      mesaE=mesa[0].ladoE;
      qtmesa++;
      peca[pj].status='m';
      passa=0;
      jvez=(jvez=='1')?'2':'1';
      system("cls");
     }

  
void carregamesaD(int pj)
    {
  	  if(peca[pj].lado2==mesaD)
      {
      mesa[qtmesa].ladoD=peca[pj].lado1;
	  mesa[qtmesa].ladoE=peca[pj].lado2;
	  }
      else
      {
      mesa[qtmesa].ladoD=peca[pj].lado2;
      mesa[qtmesa].ladoE=peca[pj].lado1;	
	  }
      mesaD=mesa[qtmesa].ladoD;
      qtmesa++;
      peca[pj].status='m';
      jvez=(jvez=='1')?'2':'1';
      passa=0;
      system("cls");
	}
  
void fclear()
  {
  int ch;
  while((ch=fgetc(stdin))!=EOF&&ch!='\n');
  }
  
void comprar(char jogador)
  {
  int i=14;
  while(i<28)
    {
    if(peca[i].status=='0')
      {
      peca[i].status=jogador;
      break;
	  }
	i++;
	}
  if(i>=28)
    printf("Nada a comprar");
  }
  
int contagempeca(char jogador,tipoPeca peca[28])
  {
  int c = 0;  
  for(int i=0;i<28;i++)
    {
    if(peca[i].status==jogador)
    c++;
	}
  return c;
  }
  
  void testaLado(int pj)
  {
  	if(peca[pj].lado1 == mesaD || peca[pj].lado2 == mesaD)
  		carregamesaD(pj);
	else if(peca[pj].lado1 == mesaE || peca[pj].lado2 == mesaE)
  		carregamesaE(pj);
	else 
	  {
  	  system("cls");
  	  printf("\t\tPeca Invalida\n");
  	  }	
  }
  
int testaPeca(char jogador)
  {
  int p=1;
  for(int i=0; i<28;i++)
    if(peca[i].status==jogador)
      {
      if(peca[i].lado1==mesaE||peca[i].lado2==mesaE||peca[i].lado1==mesaD||peca[i].lado2==mesaD)
        p=0;
	  }
  return p;
  }
  
  int testaE(int e, tipoPeca peca[28])
 {
     int ver = 0;
     if(peca[e].status == jvez)
         if(peca[e].lado1 == mesaE||peca[e].lado1 == mesaD||peca[e].lado2 == mesaE||peca[e].lado2 == mesaD)
             ver = 1;
     return ver;
 }
  
void gravaCadastro ()
{
	if(qtmesa == 0)
	{
		printf("Sem jogo a ser gravado");
		return;
	}
	if (f > 0)
	{
		printf("Jogo terminado nao pode ser gravado");
		return;
	}
	 int i;
	 FILE *fp;
	 FILE *fpm;
	 FILE *fps;
	
	 //dados do Jogo a ser salvo
	 sitJogo.qtmesaJogo = qtmesa;
	 sitJogo.jvezJogo = jvez;
	 //sitJogo.jogadorComp = jogcomp;
	 sitJogo.mesaDJogo = mesaD;
	 sitJogo.mesaEJogo = mesaE;
	 
	if((fp = fopen("CAD_DOMINO", "w")) == NULL)
	 {
		printf("O arquivo CAD_DOMINO nao pode ser aberto para cadastrar");
		return;
	 }
	if((fpm = fopen("CAD_MESA", "w")) == NULL)
	 {
		printf("O arquivo CAD_MESA nao pode ser aberto para cadastrar");
		return;
	 }
	if((fps = fopen("CAD_JOGO", "w")) == NULL)
	 {
		printf("O arquivo CAD_JOGO nao pode ser aberto para cadastrar");
		return;
	 }
	
	for(i = 0; i < 28; i++)
	 {
	 	if (fwrite(&peca[i], sizeof(struct peca), 1, fp) != 1)
	 	{
			printf("Erro na gravacao do arquivo CAD_DOMINO");
			break;
	 	}
	 }
	 
	 for (i = 0; i < 28; i++)
	 {
	 	if (fwrite(&mesa[i], sizeof(struct mesa), 1, fpm) != 1)
	 	{
	 		printf("Erro na gravacao do arquivo CAD_MESA");
	 		break;
	 	}
	 }
	 
	if (fwrite(&sitJogo, sizeof(struct Jogo), 1, fps) != 1)
	 printf("Erro na gravacao do arquivo CAD_JOGO");
	fclose(fps);
	fclose(fpm);
	fclose(fp);
	printf("Gravados os arquivos CAD_DOMINO, CAD_MESA e CAD_JOGO");
	}
	
	
	//EXEMPLO de leitura dos 3 cadastros gravado e EXEMPLO de recuperação do jogo salvo
void recuperaCadastro()
{
	int i;
	FILE *fp;
	FILE *fpm;
	FILE *fps;
	
	if((fp = fopen("CAD_DOMINO", "r")) == NULL)
	{
		printf("O arquivo CAD_DOMINO nao pode ser aberto");
		return;
	}
	
	if((fpm = fopen("CAD_MESA", "r")) == NULL)
	{
		printf("O arquivo CAD_MESA nao pode ser aberto");
		return;
	}
	
	 if((fps = fopen("CAD_JOGO", "r")) == NULL)
	{
		printf("O arquivo CAD_JOGO nao pode ser aberto");
		return;
	}
	
	 for(i = 0; i < 28; i++)
	 {
		if (fread(&peca[i], sizeof(struct peca), 1, fp) != 1)
	 	{
	 		printf("Erro na leitura do arquivo CAD_DOMINO");
	 		break;
	 	}
	}
	
	 for(i = 0; i < 28; i++)
	 {
		if (fread(&mesa[i], sizeof(struct mesa), 1, fpm) != 1)
	 	{
	 		printf("Erro na leitura do arquivo CAD_MESA");
	 		break;
	 	}
	}
	
	if (fread(&sitJogo, sizeof(struct Jogo), 1, fps) != 1)
	printf("Erro na leitura do arquivo CAD_JOGO");
	fclose(fps);
	fclose(fpm);
	fclose(fp);
	
	//recupera dados do Jogo salvo
	qtmesa = sitJogo.qtmesaJogo;
	jvez = sitJogo.jvezJogo;
	//jogcomp = sitJogo.jogadorComp;
	mesaD = sitJogo.mesaDJogo;
	mesaE = sitJogo.mesaEJogo;
	printf("retornando ao jogo recuperado"); 
}

//funcao que retorna ao jogo
void retornajogo()
  {
	char jant;
	passa=0;
    f=1;
	char ganha;
	 while(f==1) 
	  {
	  jant=(jvez=='1')?'2':'1';
	  if(jogar(jvez) == 4)
	    f=0;
	  if((contagempeca(jant, peca)== 0 && contagempeca('0', peca)== 0)||(passa==2))
	    {
	    ganhador('1','2');
	    f=0;
     
		}
	  }
      embaralha(peca);
}
  
  