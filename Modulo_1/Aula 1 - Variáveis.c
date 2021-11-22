//Aula sobre variaveis
#include <stdio.h>

int main(){ // A chave delimita um bloco de codigo (inicio do bloco)
	// Declarando variaveis
	int idade; // inteiro

	// Declarando e inicializando variaveis
	//int idade = 0;

	// Funcao para escrever algo no console
	printf("Qual é a sua idade? "); // o ponto e virgula finaliza um comando

	// Receber dados
	scanf("%d", &idade);

	// Imprimir dados
	printf("A sua idade é %d", idade);

	return 0;
} // fim do bloco
