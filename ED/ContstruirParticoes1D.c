#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, g, n, rd, p, u, cont;
	srand((int) time(NULL));
	p = 1; u = 35; n = 35; cont = 0; 
	printf("\n");
	
	for (i = 1; i <= n; i++){
		rd = (RAND_MAX*rand() + rand()) % n + 1;
		g = p + rd % (u - p + 1);
		printf("%6d", g);
		cont++;
		if (cont == 5){
			cont = 0;
			printf("\n");
		}
	}
	return 0;
}