#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <unistd.h> No Linux/Mac
#include <windows.h>

typedef struct{
    int codigo;
    char nome[30];
    float preco;
} Produto;

typedef struct{
    Produto produto;
    int quantidade;
} Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];

int main(){
    menu();
    return 0;
}

void infoProduto(Produto prod){
    //vamos implementar
}

void cadastrarProduto(){
    //vamos implementar
}

void listarProdutos(){
    //vamos implementar
}

void visualizarCarrinho(){
    //vamos implementar
}

Produto pegarProdutoPorCodigo(int codigo){
    //vamos implementar
}

int * temNoCarrinho(int codigo){
    //vamos implementar
}

void fecharPedido(){
    //vamos implementar
}