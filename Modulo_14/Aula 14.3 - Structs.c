#include <stdio.h>
#include <string.h>
//Struct -> estrutura
//Trabalhando com contatos

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[5];
}agenda;

int main(){

    for(int i = 0; i < 5; i++){
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);

        getchar();//sempre que depois de um scanf vc receba um char vc tem
                  //colocar "getchar()" para nao dar problema nos inputs seguintes

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("Informe o email: ");
        fgets(agenda.contatos[i].email, 100, stdin);
    }

    for(int i = 0; i < 5; i++){//strtok -> se houver o \n ele manda imprimir sem ele strtok(variavel, "\n")
        printf("=========== Contato %d ============\n", (i+1));
        printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
        printf("Ano de nascimento: %d\n", strtok(agenda.contatos[i].ano_nascimento, "\n"));
        printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
        printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n")); 
    }

    return 0;
}