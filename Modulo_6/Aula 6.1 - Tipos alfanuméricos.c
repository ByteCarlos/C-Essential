# include <stdio.h>
/*
Tipos de Dados

Tipos alfanumericos
 - Caracteres;
 - Strings*;

 * Na linguagem C, nao existe o tipo de dado string.
*/
int main(){
	char opcao;
	printf("Informe uma opcao: \n");
	printf("a - Saldo \n");
	printf("b - Extrato \n");
	printf("c - Transferir \n");
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("Seu saldo e...\n");
	}else if(opcao == 'b'){
		printf("Seu extrato e...\n");
	}else if(opcao == 'c'){
		printf("Transferindo...\n");
	}else{
		printf("Opcao invalida...\n");
	}

	//Gerando alfabeto em loop com a tabela ASCII
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}



	return 0;
}