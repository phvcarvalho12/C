//teste/pratica

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

// Função para trocar dois elementos em um array
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int caixa = 0;

    srand(time(NULL));

    // Imprimir lista em ordem normal
    printf("Lista em ordem normal:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\n");

    // Embaralhar a lista
    for (int j = 10; j > 0; j--) {
        int nAleatorio = rand() % (j + 1); // Gera um índice aleatório entre 0 e j
        trocar(&a[j], &a[nAleatorio]);
    }

    // Imprimir lista embaralhada
    printf("Lista embaralhada:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\t FIM \n");
    return 0;
}
