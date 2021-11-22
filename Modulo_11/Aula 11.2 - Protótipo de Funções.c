#include <stdio.h>
/*
Protótipo de função (Assinatura das funções)

Serve para indicar para o main quais sao
as funções que vamos utilizar dentro dela
e estão declarados depois dela.  


Estrutura:
- tipo de retorno
- nome
- parametros de entrada
*/
int soma(int num1, int num2);

void mensagem();

int main(){

    int n1, n2, ret;
    
    n1 = 3;
    n2 = 7;

    ret = soma(n1, n2);

    mensagem();
    
    printf("A soma de %d com %d eh %d", n1, n2, ret);

     return 0;
}

//Aqui está a implementação da função
int soma(int num1, int num2){
    return num1 + num2;
}

void mensagem(){
    printf("Bem-vindo!\n");
}