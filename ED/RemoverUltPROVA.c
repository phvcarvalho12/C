#include <stdio.h>
#include <stdlib.h>

struct{
    int elemento;
    struct *  Celula;
}Celula;

typedef Celula * Lista;

int main(){

    return 0;
}

//prova/minha questao
void removerUltimo(Lista a; int y){
    Celula * aux = (*a);
    Celula * pix = aux;
}

//prova/gabarito
void removerUltimo(Lista a; int y){
    Celula * aux = a;
    Celula * pix = aux;
}

//jeito certo void
void removerUltimo(Lista *a; int y){
    Celula * aux = (*a);
    Celula * pix = aux;
}

//jeito certo Lista
Lista removerUltimo(Lista a; int y){
    Celula * aux = a;
    Celula * pix = aux;
}

//a estrutura é do tipo pointer, para vc remover o ultimo elemento precisa do primeiro endereço
//se o parametro for do tipo lista sem pointer, não tem como modificar o elemento dentro do endereço
//por isso eu usei o (*a) para acessar o endereço apontado para o primeiro elemento de uma lista de estrutura pointer