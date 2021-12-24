#include <stdio.h>
//Números binários

int main(){
    int valor = 2;
    printf("%d\n", valor);

    //deslocamento de bits para esquerda
    valor = valor << 2;
    printf("%d\n", valor);

    valor = 2;
    //deslocamento para a direita
    valor = valor >> 1;
    printf("%d\n", valor);

    //negação 
    valor = 2;
    valor = ~valor;
    printf("%d", valor);

    return 0;
}