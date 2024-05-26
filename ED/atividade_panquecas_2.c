/*   atividade panquecas parte 2 */
/* Arquivo: atividade panquecas_2.c
   Autor: LISBETE MADSEN BARBOSA
   Date: 03/05/24 16:06 14:18
   Descrição: MOSTRAR A SEQUENCIA DE FLIPS para ordenar a pilha de panquecas
*/							

#include <stdio.h>
#include "PilhaPan.h"       
     
int main(){
    int MP,n,q;
    int flip;
    Pilha Pan;
    MP = 6;
    Pan = construirPilha(MP);
    printf("\n\n  pilha de panquecas original ");     mostrarPilha(Pan);
    flip = 0;
    n = MP;
    printf("\n flip = ");
      do{
        q = contarPilha(Pan, n);
        if (q != n){
            if (q > 1) {
                Pan = inverter(Pan, q); 
                flip = q;
                printf("%d ", flip);
            }
            Pan = inverter(Pan, n); 
            flip = n;
            printf("%d ", flip);
        }
        n--;
    } while (n > 1);

	
	printf("\n\n  pilha de panquecas ordenada ");	mostrarPilha(Pan);
	
    printf("\n FIM \n");
    return 0;
}

