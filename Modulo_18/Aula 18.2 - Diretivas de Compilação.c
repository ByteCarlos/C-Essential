#include <stdio.h>

#ifndef PI
    #define PI 3.14567 //constante
#endif

//ifdef - Diretiva de Compilação
//se esta definido execute X
//senao nao sera executado
//Experimente retirar a definicao de PI

int main(){

    int valor = 5; //variavel

    valor = 467;

    printf("O valor eh %d\n", valor);

    printf("PI vale %f\n", PI);

    #ifdef PI
        printf("O valor de PI eh %f\n", PI);
    #endif

    return 0;
}