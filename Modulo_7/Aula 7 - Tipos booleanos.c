#include <stdio.h>
//Tipos de dados

//Booleanos (Verdadeiro/Falso) true/false

/*
Na linguagem C, nao existe um tipo de dado booleano

Mas...

A linguagem C, reconhece o valor 0 como Falso (false)
e qualquer valor diferente de 9 como Verdadeiro (true)
*/
int main(){
	int booleano = 1;

	if(booleano){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}

	return 0;
}