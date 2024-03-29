#include<stdio.h>

int main(){
	int i, g, n, cont;
	n = 35; cont = 0; printf("\n");
	
	for(i = 1; i <= n; i++){
		g = rand(); printf("%6d", g);
		cont++;
		if(cont == 5){ 
		cont = 0; printf("\n");
		}
	}
	
	return 0;
}