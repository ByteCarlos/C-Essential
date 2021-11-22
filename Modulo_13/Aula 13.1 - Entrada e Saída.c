#include <stdio.h>
// FILE = ARQUIVO

int main(){
    FILE *arq;

    //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    //w - abrir o arquivo para escrita (se o arquivo ja existir, sera sobrescrito com um novo zerado)
    //r - abrir o arquivo para leitura (nao podemos escrever no arquivo)
    //wa - abrir o arquivo para adicao de conteudo (se o arquivo ja existir, o conteudo sera adicionado nas linhas abaixo)
    arq = fopen("Aula 13 - arquivo.txt", "w");

    //sempre que a gente finalizar a manipulacao de um arquivo, devemos fecha-lo
    fclose(arq);

    return 0;
}