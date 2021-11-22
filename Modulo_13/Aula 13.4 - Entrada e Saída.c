#include <stdio.h>
//Usando leitura de arquivos para somar numeros
int main(){
    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("Aula 13 - numeros.txt", "r");

    if(arq){
        while(!feof(arq)){
            resultado = fscanf(arq, "%d", &num);//leitura e atribuindo numeros ao num
            printf("Resultado: %d\n", resultado);//resultado = 1 - encontrou um numero 
            if(resultado == 1){                  // resultado = -1 - nao encontrou um numero
                soma = soma + num;
            }
        }
    }else{
        printf("Nao achei o arquivo");
    }
    printf("A soma dos numeros encontrados eh %d", soma);
    fclose(arq);//fechando o arquivo

    return 0;
}