#include <stdio.h>
//matrizes - parte 1

/*
array uni-dimensional (vetores) int numeros[5];
[0][1][2][3][4]

array multi-dimensional (matrizes) int numeors[5][5];

[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]

*/

int main(){
	//matrizes de strings
	char nome[3][50];
	//"asdfasdf"
	for(int i = 0; i < 3; i++){
		printf("Qual seu nome? ");
		gets(nome[i]);
	}

	for(int i = 0; i < 3; i++){
		printf("Ola %s\n", nome[i]);
	}

	return 0;
}