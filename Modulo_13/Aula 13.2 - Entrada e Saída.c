#include <stdio.h>

int main(){
    FILE *arq;
    char c;

    arq = fopen("Aula 13 - arquivo.txt", "r");//leitura

    //verificando se o arquivo existe
    if(arq){   //getc() - Pegar cada um dos caracteres do nosso arquivo
        while((c = getc(arq)) != EOF){ //EOF = End of File / fim do arquivo
            printf("%c", c);
        }
    }else{
        printf("Nao achei o arquivo");
    }
    fclose(arq);
    return 0;
}