#include <stdio.h>
//Operações Matemáticas

/*
soma +
subtrair -
multiplicar *
dividir /
elevar ao quadrado x * x
módulo (resto da divisão de x por y) %
*/

int main(){
	int num1, num2, res;

	printf("Informe o num1: ");
	scanf("%d", &num1);

	printf("Informe o num2: ");
	scanf("%d", &num2);

	//soma + 
	res = num1 + num2;
	printf("A soma eh %d\n", res);

	//subtrair -
	res = num1 - num2;
	printf("A substracao eh %d\n", res);

	//multiplicar *
	res = num1 * num2;
	printf("A multiplicacao eh %d\n", res);

	//dividir /
	res = num1 / num2;
	printf("A divisao eh %d\n", res);

	//elevar ao quadrado
	res = num1 * num1;
	printf("O quadrado de %d eh %d\n", num1, res);

	//modulo (verificando se o num1 e par ou impar)
	if(num1 % 2 == 0){
		printf("%d eh par\n", num1);
	}else{
		printf("%d eh impar\n", num1);
	}
	return 0;
}