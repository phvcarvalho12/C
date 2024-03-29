//PHVC Ativ05 - Calculo de Quantidade dos dias
//Pedro Carvalho - 17/05/2023
/*
Solicitar uma data no formato DD/MM/AAAA, 
fazendo a consistÃªncia se a digitaÃ§Ã£o estÃ¡ correta
quanto ao seu formato e validade. 
*/

#include<stdio.h>
#include<stdlib.h>

int fbissexto (int a);
int fdatavalida (int d, int m, int a);
int fdiasinicioano (int d, int m, int a);
int fdiasfimano (int d, int m, int a);

int main(){
	
	int dia, mes, ano;
	int diasinicio, diasfim;
	
	do{
		printf("Digite uma data com DD/MM/AAAA: ");
	    scanf("%d/%d/%d", &dia, &mes, &ano);
		
		if(dia == 0){
			printf("Opcao de saida escolhida\n");
			break;
	    }
		    
	    if (fdatavalida(dia, mes, ano)){
	        diasinicio = fdiasinicioano(dia, mes, ano);
			diasfim = fdiasfimano(dia, mes, ano);
			
			printf("%d dias desde o comeco do ano e %d dias ate o fim do ano.\n\n", diasinicio, diasfim);	
		}
		else{
			printf("Data invalida.\n");
		}
	 //programa encerrado, repetir tudo novamente	
	}while (dia != 0);
}

int fbissexto(int a){
	
	if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0)){
	    printf("O ano inserido eh bissexto\n");
		 return 1; //eh bissexto
	}
	  
	else{
	   printf("O ano inserido nao eh bissexto\n");
	   return 0;
	}
}

int fdatavalida(int d, int m, int a)
{	
	
	int ultdia; //ultimo dia do mes
	
	if (a < 1600){
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