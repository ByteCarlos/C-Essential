#include <stdio.h>
/*
Tipos numéricos:
 - Inteiros;
 - Reais;
*/

int main(){
	//inteiro
	//int nota1, nota2;

	//reais
	float media, nota1, nota2; // -> número real
	//double nota2 -> é um numero real com maior capacidade

	printf("Qual a primeira nota? ");
	scanf("%f", &nota1);

	printf("Qual a segunda nota? ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua media e %.1f", media);

	return 0;
}