//PHVC49 - operacao numa string - substituicao de caracteres
//Pedro Carvalho - 28/04/2023
/*entrar com um texto de ate 100 caracteres
apresenta-lo na tela e fazer as seguintes substituicoes
A por 4
E pro 3
I por 1
O por 0
U por 6
usar o comando switch
reciclar o programa saindo ao digitiar apeans enter
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	char tex[101];
    
    do
    {
    	printf("Digite um texto (enter para sair): ");
    	gets(tex);
    	printf("%s\n", tex);
    	
    	i = 0;
    	while(tex[i] != '\0')
    	{
    	
    	switch (tex[i])
        {
    	case 'a':
    	case 'A':
			tex[i] = '4';
			break;
	  	case 'e':
		case 'E':	
		    tex[i] = '3';
		    break;
		case 'i':
		case 'I':	
			tex[i] = '1';
			break;
		case 'o':
		case 'O':	
			tex[i] = '0';
			break;
		case 'u':
		case 'U':	
		    tex[i] = '6';
		    break;
    		
	    }
	    i++;
	    } 
	    printf("%s\n", tex);
    }
	while(tex[0] != '\0');
    
	
   
}

