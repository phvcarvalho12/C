//PHVC53 - Tabuada do 7
//Pedro Carvalho - 05/05/2023
/*
Apresentar a tabuada do 7 de 0 ate 20
*/

#include<stdio.h>

int main(){
	int t; //t = tabuada
	
	for(t = 0; t <=20; t++){
		printf("7 * %d = %d\n", t, 7*t);
	}
}