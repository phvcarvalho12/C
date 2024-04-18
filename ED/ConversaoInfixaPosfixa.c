//Pedro Henrique Vianna Carvalho
//RA00333196
//Programa de conversao de numeros de uma conta infixa para posfixa

#include "Booleano.h"
#include "Token.c"
#include "PraticaPilha.c"
#include<stdio.h>
#include<string.h>
#define true TRUE
#define false FALSE

float avaliaPosfixa(char *, float[]);

int main(){
	float valor;
	char * infixa = "((B+C)*B);";
	float V[18] = {1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5, 9.0, 9.5};
	valor = avaliaPosfixa(infixa, V);
	printf("\n %s %f \n", infixa, valor);

	printf("\n fim \n");
	return 0;
}

char * avaliaPosfixa(char * infixa, float V){
	int i, tam;
	unsigned char ch, chP;
	bool ok;
	char * posfixa;
	Pilha P;
	P = criarPilha();
	
	for(i = 0; i < strlen(infixa); i++){
		ch = infixa[i];
		obterToken(ch);
		switch(ch){
			case PaE:
				pushPilha(P, ch);
				break;
			case OpA:
				ok = FALSE;
				do{
					if(PilhaVazia(P)){
						pushPilha(P, ch);
						ok = TRUE;
					}

					else{
						chP = acessarPilha(P);

						if(chP == PaE){
							pushPilha(P, ch);
							ok = TRUE;
						}

						else{posfixa[i] = chP; popPilha(P);}
					}
				}while(ok == TRUE);
				break;

			case OpM:
				ok = FALSE;
				do{
					if(PilhaVazia(P)){
						pushPilha(P, ch);
						ok = TRUE;
					}
					else{
						chP = acessarPilha(P);
						switch(chP){
                            case PaE:
                                pushPilha(P, chP);
								ok = TRUE;
								break;
							case OpA:
							    pushPilha(P, chP);
								ok = TRUE;
								break;
							case OpM:
								posfixa[i] = chP;
								popPilha(P);
								break;
						}
					}
				}while(ok == TRUE);
				break;

			case TerM:
				while(PilhaVazia(P) != FALSE){
					chP = acessarPilha(P);
					popPilha(P);
					posfixa[i] = chP;
				}
				break;

			case PaD:
				if(PilhaVazia(P) != FALSE){
					ok = FALSE;
					do{
						chP = acessarPilha(P);
						if(chP == PaE){
							popPilha(P);
							ok = TRUE;
						}

						else{
							posfixa[i] = chP;
							popPilha(P);
						}
					}while(ok == TRUE);
				}
				break;

			default:
				posfixa[i] = chP; break;
		}
	}
	return posfixa;
}
