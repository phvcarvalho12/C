

#include<stdio.h>
#define max 100

typedef struct{
	int tamanho;
	char elemento[max];
}Lista;

Lista criarLista();
Lista add(Lista, char);
void imprimir(Lista);

int main(){
	
	Lista L;
	L = criarLista();
	char y = 'y';
	
	L = add(L, 'l');
	L = add(L, 'i');
	L = add(L, 's');
	L = add(L, 'b');
	L = add(L, 'e');
	L = add(L, 't');
	
	L = add(L, y);
		
	imprimir(L);
	
	return 0;
}

Lista criarLista(){
	Lista b;
	b.tamanho = 0;
	return b;
}

Lista add(Lista L, char y){
	int i, n;
	i = 0;
	n = L.tamanho;
	
	if(n == 0){
		n = n + 1;
		L.elemento[n] = y;
	}else{
		while(L.elemento[i] != y && i < n){
			i++;
		}
		if(i == n){
			n = n + 1;
			L.elemento[n] = y;
		}
	}
	
	return L;
}
void imprimir(Lista L) {
	for (int i = 0; i < L.tamanho; i++) {
		printf("%c", L.elemento[i]);
	}
	printf("\n%d", L.tamanho);
}