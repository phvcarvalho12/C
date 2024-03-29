#include <stdio.h>
#include<iostream>

#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM]) {    /* Omitir uma dimensão */
   int i, j;

   for(i=0;i<DIM;i++)
       for(j=0;j<DIM;j++)
	   s[i][j]=ESPACO;
}  

void mostra(char s[DIM][DIM]){ /* Ambas as Dimensões */ 
    
      int i, j;
	  for (i=0;i<DIM;i++){
	       for (j=0;j<DIM;j++)
		   printf("%c %c",s[i][j],j==DIM-1?' ':'|');
		   if(i!=DIM-1) 
		   printf("\n--------");
		   putchar('\n');}
}

int verificarVitoria(char s[DIM][DIM], char jogador) {
    int i, j;
    
    // Verificação de linhas
    for (i = 0; i < DIM; i++) {
        if (s[i][0] == jogador && s[i][1] == jogador && s[i][2] == jogador) {
            return 1;
        }
    }
    
    // Verificação de colunas
    for (j = 0; j < DIM; j++) {
        if (s[0][j] == jogador && s[1][j] == jogador && s[2][j] == jogador) {
            return 1;
        }
    }
    
	// Verificação de diagonais
    if ((s[0][0] == jogador && s[1][1] == jogador && s[2][2] == jogador) ||
        (s[0][2] == jogador && s[1][1] == jogador && s[2][0] == jogador)) {
        return 1;
    }
    
    return 0;
}

int main(){
   char Velha[DIM][DIM];
   int posx, posy;
   char ch = '0';  /* Carácter a Jogar */
   int n_jogadas = 0;
   
   
   inic(Velha);
   
   while (1) {    /* Ciclo Infinito */  
   mostra(Velha);
   printf("\nIntroduzaa Posicao de Jogo Linha Coluna: ");
   scanf("%d %d",&posx,&posy);
   posx--;
   posy--;  /* Pois os índices do vector começam em 0 */
   
   if(Velha[posx][posy]==ESPACO){ /* Casa Livre */
       Velha[posx][posy] = ch = (ch== '0') ? 'X' : '0';
	   n_jogadas++; 
	}
	else
	   printf("Posicao ja ocupada\nJogue Novamente!!!\n");
	   if(n_jogadas==DIM*DIM)
	    break; /* Acabar o Programa */
	
	
	if (verificarVitoria(Velha, ch)) {
        printf("\nJogador %c venceu!\n", ch);
        return 0;
    }
            
    if (n_jogadas == DIM * DIM) {
        printf("\nEmpate!\n");
        return 0;
    }
	
}
	
	mostra(Velha);
	
	return 0;
}