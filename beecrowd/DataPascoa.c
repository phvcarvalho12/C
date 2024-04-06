#include<stdio.h>
#include<stdlib.h>

int bissexto(int);
int verificarData(int, int, int);
void dataPascoa(int, int, int);

int main(){
	int dia, mes, ano;
	
	do{	
		printf("Digite a data com (sair: 0/0/0): ");
	    scanf("%d/%d/%d", &dia, &mes, &ano);
		
		if (dia == 0 && mes == 0 && ano == 0)
            break;
	
		verificarData(dia, mes, ano);
	
		dataPascoa(dia, mes, ano);
	
	}while(1);
	
	return 0;
}

int bissexto(int a){
	if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
		 return 1;
	else
		return 0;
}

int verificarData(int d, int m, int a) {
    int ultdia = 31;
    if (d > 31 || d < 1 || m > 12 || m < 1 || a < 0) {
        printf("Data invalida!\n");
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
        ultdia = 30;
    if (m == 2) {
        if (bissexto(a) == 1)
            ultdia = 29;
        else
            ultdia = 28;
    }
    return ultdia;
}

void dataPascoa(int dia,int mes, int ano) {
    int a, b, c, d, e;
    a = ano % 19;
    b = ano % 4;
    c = ano % 7;
    d = (19 * a + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;

    if (d + e <= 9) {
        dia = d + e + 22;
        mes = 3;
    } else {
        dia = d + e - 9;
        mes = 4;
    }
    if (dia == 26 && mes == 4)
        dia = 19;
    else if (dia == 25 && mes == 4 && d == 28 && a > 10)
        dia = 18;

    //printf("Dia da Páscoa: %d/%d\n", dia, mes);
    printf("No ano %d, a pascoa foi na data %d/%d\n\n", ano, dia , mes);
}