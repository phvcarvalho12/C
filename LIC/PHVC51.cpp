//PHVC51 Geracao de um string invertida
//Pedro Carvalho - 03/05/2023
//Entrar com uma string de ate 100 caracteres e gerar outra string invertida

#include<stdio.h>

int main()
{

    char tex[100]; //tipo agregado homogeneo (so contem tipo caracter) 
                   //indexados de 0 a 99 
			       //se for uma string, o ultimo caracter sera '\0' (null) 
			       //a responsabilidade de nao ultrapassar o limite e do progra

    char inv[100];
    int i, j;

    
	printf("Digite um texto qualquer: ");
    gets(tex);
    
    
    for (i = 0; tex[i] != '\0'; i++);
    
		i--;
    
		
       for(j = 0; i >= 0; j++)
       {
    	  inv[j] = tex[i];
    	  i--;
	   }
	   inv[j] = '\0';
	
			   printf("O texto digitado na ordem inversa e: ");
			   puts(inv);
			   
		   
	   
    
    
}