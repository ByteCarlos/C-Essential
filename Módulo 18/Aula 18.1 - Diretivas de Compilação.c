#include <stdio.h>

#ifndef PI
    #define PI 3.14567 //constante
#endif

//ifndef - Diretiva de Compilação
//verifica se uma constante ja foi definida
//senao ele define

int main(){

    int valor = 5; //variavel

    valor = 467;

    printf("O valor eh %d\n", valor);

    printf("PI vale %f\n", PI);

    return 0;
}