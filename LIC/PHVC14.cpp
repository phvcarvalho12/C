//PHVC14 -
//Pedro Carvalho - 10/03/2023
#include <stdio.h>
main()
{
	float Num, Num3, Soma3;
	
	//Num = 1/3.0;
	//Num = 0.333333; //6 casas decimais
	Num = 0.3333333;  //7 casas decimais
	
	Num3 = 3*Num;
	Soma3 = Num + Num + Num;
	
	printf("Num = %f\n", Num);
	
	printf("3 x Num = %f\n", Num3);
	
	printf("Num + Num + Num = %f\n", Soma3);
	
}