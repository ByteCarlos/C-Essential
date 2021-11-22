#include <stdio.h>
#include "ajuda.h"

// iremos utilizar a biblioteca que criamos chamada ajuda.h com a implementacao em ajuda.c

int main(){
    int n1, n2, ret_s, ret_m;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("A soma de %d com %d eh %d\n", n1, n2, ret_s);

    ret_m = multiplicacao(n1, n2);
    printf("A multiplicacao de %d com %d eh %d\n", n1, n2, ret_m);
    return 0;
}