#include <stdio.h>
//matrizes - parte 2

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
	//matrizes de inteiros
	/*
	[00][01]
	[10][11]
	*/
	int numeros[2][2];
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
		}
	}

	//matrizes de reais
	float valores[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			valores[i][j] = i + j;
		}
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("numeros[%d][%d] vale %f\n", i, j, valores[i][j]);
		}
	}



	return 0;
}