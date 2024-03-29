#include <stdio.h>

// Função para encontrar o menor valor e sua posição
void encontrar_menor_valor_e_posicao(int vetor[], int tamanho, int *menor_valor, int *posicao) {
    *menor_valor = vetor[0];
    *posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor_valor) {
            *menor_valor = vetor[i];
            *posicao = i;
        }
    }
}

int main() {
    int n;

    // Entrada de dados
    scanf("%d", &n);

    int vetor_x[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor_x[i]);
    }

    int menor_valor, posicao;

    // Encontrar o menor valor e sua posição
    encontrar_menor_valor_e_posicao(vetor_x, n, &menor_valor, &posicao);

    // Saída de dados
    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
