//PHVC48 - uma string e seu tamanho
//Pedro Carvalho - 26/04/2023
/*entrar com um texto de ate 200 caracteres
apresenta-lo em seguida na tela e
calcular o seu tamanho (isso eh possivel, porque a string termina com '\0)
*/

#include<stdio.h>
main()
{
    char texto[201]; //a string sempre coloca '\0' apos o ultimo caracter
	int i;
	 
    printf("Digite um texto qualquer de ate 200 caracteres: ");
    gets(texto); //habilita o teclado para entrar uma string
	
	printf("O texto digitado foi:\n");
	printf("%s\n", texto); //%s para string
	
	printf("\n outra forma de apresentar uma string\n");
	puts(texto);
	
	//calculo do tamanho (procura o final '\0' da string)
	i = 0;
	while (texto[i] != '\0')
	    i = i + 1; //ou i++;
		
	printf("O texto possui %d caracteres\n", i);
		
}
