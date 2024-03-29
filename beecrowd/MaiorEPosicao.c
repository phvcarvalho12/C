#include <stdio.h>

int main() {
    // Inicializa as variáveis
    int maiorValor = 0;
    int posicaoMaiorValor = 0;

    // Loop para ler os 100 valores
    for (int i = 1; i <= 100; i++) {
        int valor;
        // Lê um valor inteiro
        scanf("%d", &valor);

        // Verifica se é o maior valor até agora
        if (valor > maiorValor) {
            maiorValor = valor;
            posicaoMaiorValor = i;
        }
    }

    // Apresenta o maior valor e sua posição
    printf("%d\n%d\n", maiorValor, posicaoMaiorValor);

    return 0;
}