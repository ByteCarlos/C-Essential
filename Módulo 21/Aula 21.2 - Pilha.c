#include <stdio.h>
/*
Pilha / Stack

https://www.cs.usfca.edu/~galles/visualization/StackArray.html

FILO = Fist in / Last Out
LIFO = Last in / Fist Our

 

---
|6| -> Topo
---
|5|
---
|4|
---
|3|
---
|2|
---
|1|
---

- Os dados são inseridos sempre no topo, ou seja, sempre que
um novo elemento é inserido ele ocupa o topo da pilha.

- Só temo acesso ao elemento que está no topo.

- O processo de inserir um elemento é chamado de push.

- O processo de remover um elemento é chamado de pop.

- Exemplo de utilização: CTRL + Z
*/

#define TAMPILHA 10

//Pilha / Stack
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

//Função para listar elementos da pilha
void lista_elementos(){
    printf("\n========Pilha Atual=========\n");
    for(int i = 0; i < TAMPILHA; i++){
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d", topo);
    printf("\n\n");
}

//Função para adicionar elementos na pilha
void push(){
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia...\n");
    }
}

//Função para remover elementos da pilha
void pop(){
    if(topo >= 0){
        pilha[topo-1] = 0;
        topo = topo - 1;
        lista_elementos();
    }else{
        printf("Pilha vazia...\n");
    }
}

//Função para limpar a pilha
void clear(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
}

void menu(){
    int opcao;
    printf("Bem vindo a minha pilha!");
    do{
        printf("\n=======MENU=======\n");
        printf("1 - Inserir elementos\n");
        printf("2 - Remover elementos\n");
        printf("3 - Listar elementos\n");
        printf("4 - Limpar elementos\n");
        printf("5 - Sair\n");
        printf("\n==================\n");
        printf("Informe a opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                clear();
                break;
        }
    }while(opcao != 5);
}
int main(){
    menu();
    return 0;
}