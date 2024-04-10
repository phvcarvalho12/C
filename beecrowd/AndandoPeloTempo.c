//Andando no tempo

#include <stdio.h>

char verificar(int, int, int);

int main(){
	int n1, n2, n3;
	char sn;
	scanf("%d %d %d", &n1, &n2, &n3);	
	sn = verificar(n1, n2, n3);
	printf("%c\n", sn);
	return 0;
}

char verificar(int a, int b, int c){
	char sn;
	if(a == b || a == c || b == c) sn = 'S';
	else{
		if (a + b == c || a - b == c || b - a == c ||
            a + c == b || a - c == b || c - a == b)
            sn = 'S';

		else sn = 'N';		
	}
	return sn;
}