#include <stdio.h>
#include <ctype.h>

// Teste de tipos de caracteres

//isalnum() verifica se o caractere eh alfanumerico (abc749)
//isalpha() verifica se o caractere eh alfabetico (abcde...)
//isdigit() verifica se o caractere eh um digito decimal (0123...)
//ispunct() verifica se o caractere eh uma pontuacao (?!.)
//isspace() se eh um espaco ( )
//tolower() converte para minuscula
//toupper() converte para maiuscula

int main(){

    char teste = 'H';

    if(isalnum(teste)){
        printf("Eh alfanumerico\n");
    }else{
        printf("Nao eh alfanumerico\n");
    }

    if(isalpha(teste)){
        printf("Eh alfabetico\n");
    }else{
        printf("Nao e alfabetico\n");
    }

    if(isdigit(teste)){
        printf("Eh digito\n");
    }else{
        printf("Nao eh digito\n");
    }

    if(islower(teste)){
        printf("Eh minusculo\n");
    }else{
        printf("Nao eh minusculo\n");
    }

    if(ispunct(teste)){
        printf("Eh potuacao\n");
    }else{
        printf("Nao eh potuacao\n");
    }

    if(isspace(teste)){
        printf("Eh espaco\n");
    }else{
        printf("Nao eh espaco\n");
    }

    if(isupper(teste)){
        printf("Eh maiusculo\n");
    }else{
        printf("Nao eh maiusculo\n");
    }

    printf("A letra %c em maiusculo eh %c\n", teste, toupper(teste));
    printf("A letra %c em minusculo eh %c\n", teste, tolower(teste));

    return 0;
}