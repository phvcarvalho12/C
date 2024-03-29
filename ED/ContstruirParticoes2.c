#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int A[35];
	int m = 35;
	int rd;
	int n = m;
	int i;
	int count = 0;
	srand((int) time(NULL));
	
	for(i = 1; i <= m; i++){
		A[i] = i;
		printf("%d ", A[i]);
	}
	
	do{
		int aux = 0;
		rd = (rand() % n) + 1;
		aux = A[n];
		A[n] = A[rd];
		A[rd] = aux;
		n--;
	} while (n != 1);
	
	printf("\n");
	
	for(i = 1; i <= m; i++){
		printf("%6d ", A[i]);
		count++;
		if (count == 5){
			count = 0;
			printf("\n");
		}
	}
	
	return 0;
}