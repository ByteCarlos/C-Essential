#include <stdio.h>
#include <string.h>

// Operações em Strings

// strcpy() copia de string
// strcat() concatena strings
// strcmp() comparar duas strings

// Busca

//strchr() localiza primeira ocorrência de caractere em uma string
//strlok() divide uma string em sub-strings com base em um caractere
//strlen() retorna o tamanho da string

int main(){
    char str1[] = "carlos@gmail.com";

    char *ret = strchr(str1, "@");


    printf("A partir do @ está %s", ret);
    printf("Usuário: %s", strtok(str1, "@"));
    printf("Tamanho da string: %d", strlen(str1));
    return 0;
}