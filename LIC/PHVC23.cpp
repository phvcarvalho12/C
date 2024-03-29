//PHVC23 - Calculadora aritmetica
//Pedro Carvalho - 22/03/2023
/*Digitar 2 numeros inteiros separados por um
dos 5 caracteres de operacao aritmetica (+-* / %)
Executar o calculo apresentando-o completo na tela
Fazer os devidas consistencias informando os erros
*/

#include <stdio.h>

main()
{
	int x, y, result;
	char op;
	
    printf("Digite uma expressão aritmetica: "); 
	scanf("%d %c %d", x, op, y);

    if (op == '+')
        result = x + y;

    printf("O resultado da expressao e: %d", result);

    if (op == '-')
        result = x - y; printf("O resultado da expressao e: %d", result);

    if (op == '*')
        result = x * y;

    printf("O resultado da expressao e: %d", result);

    if ((op == '/') || (op == '%'))
    {
		    result = x / y;
        result = x % y; printf("O resultado da expressao e: %d", result);
    }
    if ((op != '/') && (op != '%') && (op != '+') && (op != '-') && (op != '*'))
        printf("Expressao invalida");
	    
	return 0;
	
}