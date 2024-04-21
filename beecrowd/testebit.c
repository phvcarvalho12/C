#include<stdio.h>

int main(){
    int a, c;
    do{
        printf("Digite um numero: ");
        scanf("%d", &a);

        c = (a & 1) == 1 ? 1 : 0;

        printf("\nO numero %d eh %s\n\n", a, (c == 1)?"impar":"par");

    }while(a != -1);    

    return 0;
}