//soma a e b = c
#include<stdio.h>

double somar(double, double);

int main(){
	double a, b;
	
	printf("Digite A e B: ");
	scanf("%lf %lf", &a, &b);
	
	double c = somar(a, b);
	
	printf("A = %.2f", a);
	printf("\nB = %.2f", b);
	printf("\nO resultado de A e B = %5.2f", c);
	return 0;
}

double somar(double a, double b){
	double c = a + b;
	return c;
}