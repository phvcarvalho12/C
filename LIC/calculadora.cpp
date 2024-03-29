#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y;
	char op;
	
	printf("Forneca a operacao: ");
	scanf("%d %c %d", &x, &op, &y);
	
	switch (op)
	{
		case '+':
			printf("%d + %d = %d\n", x, y, x+y);
			break;
		case '-':
		    printf("%d - %d = %d\n", x, y, x-y);
		    break;
		case '*':
			printf("%d * %d = %d\n", x, y, x*y);
			break;
		case '/':
			if(y != 0)
			{
				printf("%d / %d = %d\n", x, y, x/y);
				printf("resto: %d",x%y);
			}
			else
				printf("Impossivel de fazer o calculo devido ao divisor ser igual a zero!");
			break;
		case '%':
		    printf("%d % %d = %d\n", x, y, x%y);
		    break;
		    
		default:
			printf("Caracter invalido");
	}
	return 0;
}