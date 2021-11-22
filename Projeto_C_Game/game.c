#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void jogar();
void mostrarInfo(Calcular calc);

int pontos = 0;

int main(){
    //Deve ser chamado apenas uma vez
    srand(time(NULL));
    jogar();
    return 0;
}

void jogar(){
    //vamos implementar
}

void mostrarInfo(Calcular calc){
    //vamos implementar
}

int somar(int resposta, Calcular calc){
    //vamos implementar
}

int diminuir(int resposta, Calcular calc){
    //vamos implementar
}

int multiplicar(int resposta, Calcular calc){
    //vamos implementar
}