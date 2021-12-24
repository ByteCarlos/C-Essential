#include <stdio.h>
//Aula de Funções
//main -> principal

// Estrutura das funções
/*
- tipo de retorno
- nome
- parametros de entrada (opcional)
- implementacao
- retorno (opcional)
*/

// void = vazio, logo nao retorna nada
void mensagem(){
    printf("Bem-vindo!\n");
}

//se o tipo e int tem que retornar um valor do tipo int
int soma(int num1, int num2){
    return num1 + num2;
}

// Tabela ASCII
// 'a' = 97
// 'b' = 98
void proximo_char(char caractere){
    printf("%c", caractere+1);
}

// Funcao principal
int main(){
    //Usando funcoes
    mensagem();
    printf("A Soma eh %d\n", soma(2,3));
    proximo_char('b');
    return 0;
}