#include <stdio.h>
#include <stdlib.h>
//Alocação de arrays multidimensionais
/*
    Matriz bi-dimensional
    [00][01][02]
    [10][11][12]
    [20][21][22]

    int -> 4 bytes -> 1 x 4 = 4 bytes
                      3 x 3 x 4 = 36 bytes (matriz)
*/
int main(){
    int *p, linhas = 3, colunas = 3;

    p = (int*)malloc(linhas * colunas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; i < linhas; i++){
            p[i * colunas + j] = 3 * i + j;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; i < linhas; i++){
            printf("%d\n", p[i * colunas + j]);
        }
    }

    free(p);
    p = NULL;

    return 0;
}