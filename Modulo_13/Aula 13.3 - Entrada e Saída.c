#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("Aula 13 - arquivo.txt", "r");

    if(arq){
        while(!feof(arq)){//feof - File End of File
            resultado = fgets(nome, 10, arq); //fgets - Leitura do arquivo
            printf("Resultado: %d\n", resultado);
            if(resultado){
                printf("%s\n", nome);
            }   
        }
    }else{
        printf("Nao achei o arquivo");
    }
    fclose(arq);
    return 0;
}