//Relogio Antigo

#include<stdio.h>

int main(){
    int hora, minuto;
    while (scanf("%d %d", &hora, &minuto) != EOF){
        hora = hora / 30.0;
        minuto = minuto / 6.0;
        if(hora < 10){
            if (minuto < 10)
                printf("%02d:%02d\n", hora, minuto);
            else
                printf("%02d:%d\n", hora, minuto);
        }else
            printf("%d:%02d\n", hora, minuto);
    }
    return 0;
}