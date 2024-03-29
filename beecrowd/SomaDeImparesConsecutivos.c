#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X, Y;

        scanf("%d %d", &X, &Y);

        int soma = 0;

        while (Y > 0) {
            if (X % 2 != 0) {
                soma += X;
                Y--;
            }

            X++;
        }

        printf("%d\n", soma);
    }

    return 0;
}
