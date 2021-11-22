#include <stdio.h>
//Escrita de arquivos
int main(){
    FILE *arq;
    char fruta[10];

    arq = fopen("Aula 13 - frutas.txt", "a"); //append -> adicionar (note que o "a" nao sobresceve o arquivo existente, e sim adiciona)

    if(arq){
        printf("Informe uma fruta, ou 0 para sair: ");
        fgets(fruta, 10, stdin); //stdin = standard_input -> entrada padrao
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair: ");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("Nao foi possivel criar o arquivo");
    }
    fclose(arq);
    return 0;
}