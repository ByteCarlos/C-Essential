#include <stdio.h>
#include <stdlib.h>
#define TAMFILA 10
/*
Fila / Queue

https://www.cs.usfca.edu/~galles/visualization/QueueArray.html

- Fila de banco;
- O elemento que entra primeiro, sai primeiro;
- Sempre que um elemento é adicionado na fila, ele vai pro final dela;
- Sempre que removemos um elemento, o primeiro é removido.

FIFO - First in / First Out


enqueue() // Adiciona elemento na fila

dequeue() // Remove o elemento da fila.

clear() // limpa a fila.

// Estrutura da fila
fila[10] - [0][1][2][3][4][5][6][7][8][9]
head -> //cabeça da fila, indica quem é o primeiro elemento da fila.
tail -> //calda, indica quantos elementos tem na fila.

Aplicação: Em qualquer situação onde a gente tenha que organizar o atendimento
de elementos.

*/
int *fila;
int head = 0;
int tail = 0;

void lista_elementos(){
    printf("\n==========FILA ATUAL===========\n");
    for(int i = 0; i < tail; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("\nTail: %d\n", tail);
    printf("\n\n");
}

void enqueue(){
    int val;
    if(head == tail){
        fila = malloc(sizeof(int));
        if(!fila){
            printf("Memória insuficiente!");
            return;
        }
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail++;
        lista_elementos();
    }else if(tail < TAMFILA){
        fila = realloc(fila, (tail+1)*sizeof(int));
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail++;
        lista_elementos();
    }else{
        printf("A fila está cheia...\n");
    }
}

void dequeue(){
    if(head < tail){
        int *fila_aux = malloc((tail-1)*sizeof(int));
        for(int i = 0; i < tail-1; i++){
          fila_aux[i] = fila[i+1];
        }
        free(fila);
        fila = fila_aux;
        tail--;
        lista_elementos();
    }else{
        printf("A fila está vazia...\n");
    }
}

void clear(){
    free(fila);
    head = 0;
    tail = 0;
}

void entrada(int op){
    do{
        printf("Seleciona a opcao: \n\n");
        printf("[1] - Inserir (enqueue): \n");
        printf("[2] - Remover (dequeue) \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpa a fila: \n");
        printf("[-1] - Sair: \n");
        printf("Opção: ");
        scanf("%d", &op);

        switch(op){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("Opção inválida.");
        }

    }while(op != -1);
}

int main(){
    int opcao = 0;
    entrada(opcao);
    return 0;
}