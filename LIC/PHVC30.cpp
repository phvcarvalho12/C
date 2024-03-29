//PHVC30 - Calculo da circunferencia



#include <stdio.h>
#include <iostream>

main()
{
	float pi, area, diametro, raio, perimetro;
	pi = 3.1416;
	
	printf("Digite a medida do diametro da circunferencia para o calculo de sua area e perimetro: ");
	scanf("%f", &diametro);
	
	if (diametro < 0)
	{
		printf("Valor do diametro invalido");
		exit(0);
	}
	
	raio = diametro/2;
	
	perimetro = 2 * pi * raio;
	area = pi * (raio * raio);
	
	printf("Valor do Raio: %f\n", raio);
	printf("\nO perimetro da circunferencia e a sua area sao: %.4f m, %.4f m2\n", perimetro, area);
	
	return 0;
}