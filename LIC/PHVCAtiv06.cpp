//PHVCAtiv06 - Quantidade de dias
//Pedro Carvalho - 23/05/2023
/*
Solicitar uma data inicial e uma data final 
(com as devidas consistência se dentro do intervalo de anos 1600 a 3000)
e informar quantos dias as separam.
Este programa poderá calcular quantos dias você já viveu até hoje, 
quantos dias durou aquele “namoro”, 
depois de quantos dias após o casamento de seus pais você nasceu, 
quantos dias faltam para a suas férias, 
quantos dias faltam para a sua formatura na PUC, etc. etc.
O programa deve ser reciclável, 
saindo somente quando a data inicial tiver dia zero.
Os anos bissextos, a quantidade de dias dos meses,
tudo deve ser devidamente considerado.
*/

#include<stdio.h>
#include<stdlib.h>

int fbissexto (int a);
int fdatavalida (int d, int m, int a);
int fdiasinicioano (int d, int m, int a);
int fdiasfimano (int d, int m, int a);
int fquantidade (int dia, int mes, int ano, int dia2, int mes2, int ano2);

int main(){

	int dia, dia2, mes, mes2, ano, ano2;
	int diasfim, diasinicio;
	
	//cabecalho
	printf("Digite duas datas com dia, mes e ano para ser calculado quantos dias se passaram entre as datas.\n\n");
	
	do{
		printf("Digite uma data com DD/MM/AAAA: ");
	    scanf("%d/%d/%d", &dia, &mes, &ano);
	
		printf("Digite uma data com DD/MM/AAAA: ");
	    scanf("%d/%d/%d", &dia2, &mes2, &ano2);
		
		if(dia == 0){
			printf("Opcao de saida escolhida\n");
			break;
	    }
		    
	   if (fdatavalida(dia2, mes2, ano2) == 1){ //Verificando se a data é válida
                printf("O numero de dias entre as datas eh: %d\n\n", fquantidade(dia, mes, ano, dia2, mes2, ano2));
            }
		    	    		
		else{
			printf("Data invalida.\n\n");
		}
	 //programa encerrado, repetir tudo novamente	
	}while (dia != 0);
}

int fbissexto(int a){
	
	if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0)){
	   // printf("O ano inserido eh bissexto\n");
		 return 1; //eh bissexto
	}
	  
	else{
	   //printf("O ano inserido nao eh bissexto\n");
	   return 0;
	}
}

int fdatavalida(int d, int m, int a)
{	
	
	int ultdia; //ultimo dia do mes
	
	if (a < 1600 || a > 3000){
		return 0;
	}
	
	if (m < 1 || m > 12){
		return 0;
	}
	
	ultdia = 31;
	if ( m == 4 || m == 6 || m == 9 || m == 11)
	    ultdia = 30;

	if (m == 2){
		if (fbissexto(a) == 1)
		    ultdia = 29;
		else
		    ultdia = 28;
	}
	
	if (d < 1 || d > ultdia){
		return 0;
	}
	// data correta
	return 1;
}

int fdiasinicioano (int d, int m, int a){
	int dias = d;
	int mes;
	int diaspormes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(mes = 1; mes < m; mes++){
		dias += diaspormes[mes-1]; //dias += diaspormes equivalente a 
		                           //"dias = dias + dias por mes"
	if(mes == 2 && fbissexto(a))
	   dias++;
	}
    return dias;
}

int fdiasfimano (int d, int m, int a){
	int diasfim = 365;
	
	if(fbissexto(a))
	    diasfim++; //ano bissexto tem 1 dia a mais
	    
	return diasfim - fdiasinicioano(d, m, a);
}

// Obtém o número de dias entre duas datas
int fquantidade (int d, int m, int a, int d2, int m2, int a2) //função da contagem de dias 
{
    int totDias = 0;

    if (a != a2) // esta parte é para datas distantes
    {
        totDias += fdiasfimano(d, m, a); //vendo quantos dias faltam para acabar o ano

        for (int i = a + 1; i < a2; i++) //looping para contar os dias dos anos que faltam. Levando em conta os anos bissextos.
        {
            if (fbissexto(i) == 1)
            {
                totDias += 366;
            }

            else
                totDias += 365;
        }

        totDias += fdiasinicioano(d2,m2,a2); // Contagem dos dias que se passaram no ultimo ano alcaçado(ultima data escolhida)
    }
    
    else //esta parte é para datas próximas
    {
        totDias += fdiasinicioano(d2, m2, a2) - fdiasinicioano(d, m, a);
    }
 
    return totDias;
}