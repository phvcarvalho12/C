//PHVC43 - 
//Pedro Carvalho - 14/04/2023
/*contar de 1 a 100
contar de 50 a 300 de 3 em 3
contar de 1000 a 200 decrescente de 5 em 5
utilizar system ("pause") entre as contagens
*/

#include <iostream>

main()
{
	int n;
	
	for(n = 1; n <= 100; n++)
	    printf("Contagem de 1 a 100: %d\n", n);
	    system ("pause");
	    
	for (n = 50; n <= 300; n = n+3)
	    printf("Contagem de 50 a 300 de 3 em 3: %d\n", n);
	    system ("pause");
	    
	for (n = 1000; n >= 200; n = n - 5)
	    printf("Contagem de 1000 a 200 de 5 menos 5: %d\n", n);
	    system ("pause");
}