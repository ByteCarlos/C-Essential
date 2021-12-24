#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Conversão de strings

//atof() //converte string para double
//atoi() //converte string para inteiro
//atol() //converte string para inteiro longo
/*
int main(){
    char valor_s[500];
    double valor_d;
    int valor_i;
    double valor_li;

    //para double
    strcpy(valor_s, "4.5"); 
    valor_d = atof(valor_s);

    //para inteiro
    strcpy(valor_s, "4"); 
    valor_i = atoi(valor_s);

    //para float longo
    strcpy(valor_s, "49899494594979787955642434564798"); 
    valor_li = atol(valor_s);

    printf("O valor eh %.2f", valor_d);
    printf("O valor eh %d", valor_i);
    printf("O valor eh %lf", valor_li);

    return 0;
}
*/

///////////////////////////////////////////////////

//Geração de sequência pseudo-aleatório

//rand() //gera número aleatório
//srand() //inicializa o gerador de números aleatórios
/*
int main(){
    time_t t;

    //inicializar o gerador
    srand((unsigned) time(&t));

    //Gerar 6 números entre 0 e 60
    for(int i = 0; i < 6; i++){
        printf("%d\n", rand() % 61);
    }

    return 0;
}
*/

///////////////////////////////////////////////////

// Gerenciamento de memória dinâmica

//malloc() //Mantem o lixo na memória
//callod() //Zera o espaço em memória
//free()   //Desalocação de memória
//realoc() //Modifica o tamanho do espaço alocado

///////////////////////////////////////////////////

// Pesquisa e ordenação

//qsort() //ordena os elementos de um array
/*
int compara(int *x, int *y){
    if(*x > *y){
        return 1;
    }else if(*x == *y){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    int numeros[] = {6, 2, 9, 3, 7, 1, 5};

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for(int i = 0; i < 7; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}
*/

///////////////////////////////////////////////////

// Aritmética de inteiros

//abs() Valor absoluto
//div() Divisão inteira

/*
int main(){
    int valor_a, valor_b;

    valor_a = abs(5);
    printf("O valor absoluto de 5 é %d\n", valor_a);

    valor_b = abs(-10);
    printf("O valor absoluto de -10 é %d\n", valor_b);

    return 0;
}
*/
/*
int main(){
    div_t saida;

    saida = div(27, 4); // 27 / 4
    printf("O quociente de (27/4) é %d\n", saida.quot); 
    printf("O resto de (27/4) é %d\n", saida.rem);

    saida = div(27, 3); // 27 / 3
    printf("O quociente de (27/3) é %d\n", saida.quot); 
    printf("O resto de (27/3) é %d\n", saida.rem);

    return 0;
}
*/