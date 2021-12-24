# include <stdio.h>
/*
Tipos de Dados

Tipos alfanumericos
 - Caracteres;
 - Strings*;

 * Na linguagem C, nao existe o tipo de dado string.
*/
int main(){
	//declaracao de uma string em C
	char nome[50]; //49 caracteres

	printf("Qual e o seu nome? ");
	gets(nome);

	printf("Seu nome e %s", nome);

	return 0;
}