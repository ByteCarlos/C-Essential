#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h> //se tiver no Windows Sleep(segundos)
//#include <unistd.h> se tiver no Linux/Mac sleep(segundos)
#include <time.h>

typedef struct{
    int codigo;
    char nome[50];
    char email[50];
    char cpf[20];
    char dataNascimento[20];
    char dataCadastro[20];
} Cliente;

typedef struct{
    int numero;
    Cliente cliente;
    float saldo;
    float limite;
    float saldoTotal; //saldo + limite
} Conta;

void menu();
void infoCliente(Cliente cliente);
void criarConta();
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizaSaldoTotal(Conta conta);
Conta buscarContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);

static Conta contas[50];
static int contador_contas = 0;
static int contador_clientes = 0;

int main(){
    menu();

    return 0;
}

void menu(){
    //vamos implementar
}

void infoCliente(Cliente cliente){
    //vamos implementar
}

void infoConta(Conta conta){
    //vamos implementar
}

void criarConta(){
    //vamos implementar
}

float atualizaSaldoTotal(Conta conta){
    //vamos implementar
}

Conta buscarContaPorNumero(int numero){
    //vamos implementar
}

void sacar(Conta conta, float valor){
    //vamos implementar
}

void depositar(Conta conta, float valor){
    //vamos implementar
}

void transferir(Conta conta_origem, Conta conta_destino, float valor){
    //vamos implementar
}

void efetuarSaque(){
    //vamos implementar
}

void efetuarDeposito(){
    //vamos implementar
}

void efetuarTransferencia(){
    //vamos implementar
}

void listarContas(){
    //vamos implementar
}