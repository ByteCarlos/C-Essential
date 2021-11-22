#include <stdio.h>
//Estruturas de repetição, for, while, do...while
//                         para, enquanto, faça...enquanto 

/*
Utilizando o For (para)

Faça um programa, no qual receba e some 5 números
inteiros e apresente a soma no final

*/
int main(){
	//Variáveis
	int numero, soma = 0;

	for(int i = 0; i < 5; i++){
		//Entrada
		printf("Informe um número: ");
		scanf("%d", &numero);
		//Processamento
		soma = soma + numero;
	}

	//Saída
	printf("A soma é %d", soma);	

	return 0;
}
