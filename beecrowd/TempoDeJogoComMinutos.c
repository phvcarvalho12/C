#include <stdio.h>

int main() {
    int h, m, hi, mi, hf, mf;

    scanf("%d", &hi);
    scanf("%d", &mi);
    scanf("%d", &hf);
    scanf("%d", &mf);

    int minutos_iniciais = hi * 60 + mi;
    int minutos_finais = hf * 60 + mf;

    int duracao_em_minutos;

    if (minutos_iniciais < minutos_finais)
        duracao_em_minutos = minutos_finais - minutos_iniciais;
    else
        duracao_em_minutos = 24 * 60 - minutos_iniciais + minutos_finais;

    h = duracao_em_minutos / 60;
    m = duracao_em_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}
