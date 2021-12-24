#include <stdio.h>
//Ponteiros (endereço de memória)
// o '&' acessa o endereço de memória da variável
// o '*' recebe o valor

void incrementa(int* valor){
    printf("Antes de incrementar\n");
    printf("O contador vale %d\n", (*valor));

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", ++(*valor));
}

int main(){
    //quando declaramos uma variavel a linguagem C
    //aloca um espaco em memoria para colocar
    //este valor.
    int contador = 10;

    printf("Antes de incrementar\n");
    printf("O contador vale %d\n", contador);

    //incrementa(contador); somente a copia
    //incrementa(&contador); o endereço de memória
    incrementa(&contador);

    printf("Depois de incrementar\n");
    printf("O contador vale %d\n", contador);

    return 0;
}