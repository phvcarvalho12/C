//PHVC06 - Calculo da area de um retangulo
//Pedro Carvalho - 03/03/2023
/* Dados os lados de um retangulo,
calcular a sua area
e o seu perimetro
usando variaveis proprias
*/

#include <iostream>
main()
{	
    int l1 = 45;
	int l2 = 379;
	int perimetro, area;
	
	perimetro = 2*(l1+l2);
	area = l1 * l2;
	
	printf("Perimetro: %d + %d = %d\n", l1, l2, perimetro);
	printf("Area: %d * %d = %d\n", l1, l2, area);

    system("pause");
}

