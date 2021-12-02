#include <string>
#include <vector>
#include <iostream>

#include "Paciente.h"

using namespace std;

Paciente::Paciente(string temp_cpf,
                   string temp_nome,
                   string temp_endereco,
                   string temp_telefone_contato,
                   string temp_tipo_s,
                   int temp_idade)
{

    this->set_registro(temp_cpf,
                       temp_nome,
                       temp_endereco,
                       temp_telefone_contato,
                       temp_tipo_s,
                       temp_idade);
}

Paciente::Paciente(string temp_cpf,
                   string temp_nome,
                   string temp_endereco,
                   string temp_telefone_contato,
                   string temp_tipo_s,
                   string temp_situacao,
                   int temp_idade) {
    this->set_registro(temp_cpf,
                       temp_nome,
                       temp_endereco,
                       temp_telefone_contato,
                       temp_tipo_s,
                       temp_idade);
    this->set_situacao(temp_situacao);
}


Paciente::Paciente() {}

Paciente::~Paciente() {}

void Paciente::leitura_registro()
{
    string temp_cpf, temp_nome, temp_endereco, temp_telefone_contato, temp_tipo_s;
    int temp_idade;

    cout << "Insira abaixo os dados do paciente" << endl;
    cout << "CPF:" << endl;
    cin >> temp_cpf;
    cout << "Nome:" << endl;
    cin >> temp_nome;
    cout << "Endereco:" << endl;
    cin >> temp_endereco;
    cout << "Idade:" << endl;
    cin >> temp_idade;
    cout << "telefone:" << endl;
    cin >> temp_telefone_contato;
    cout << "Tipo sanguíneo:" << endl;
    cin >> temp_tipo_s;

    this->set_registro(temp_cpf, temp_nome, temp_endereco, temp_telefone_contato, temp_tipo_s, temp_idade);
}

void Paciente::set_registro(string temp_cpf,
                            string temp_nome,
                            string temp_endereco,
                            string temp_telefone_contato,
                            string temp_tipo_s,
                            int temp_idade)
{

    if (temp_cpf != "")
        this->cpf = temp_cpf;

    if (temp_nome != "")
        this->nome = temp_nome;

    if (temp_endereco != "")
        this->endereco = temp_endereco;

    if (temp_telefone_contato != "")
        this->telefone_contato = temp_telefone_contato;

    if (temp_tipo_s != "")
        this->tipo_s = temp_tipo_s;

    if (temp_idade > -1)
        this->idade = temp_idade;
}

void Paciente::set_modificar()
{
    int op;
    string nome = "";
    string endereco = "";
    string situacao = "";
    string telefone = "";

    while (1)
    {
        cout << "---- Alteracao de ficha ----\n\n";
        cout << "[1] Modificar nome" << endl;
        cout << "[2] Modificar endereco" << endl;
        cout << "[3] Modificar situacao" << endl;
        cout << "[4] Modificar telefone" << endl;
        cout << "[0] Sair" << endl;
        cout << "Insira a opcao desejada: ";
        cin >> op;

        if (op == 0)
            break;

        else
        {
            switch (op)
            {
            case 1:
                cout << "Novo nome: " << endl;
                cin >> nome;
                break;
            case 2:
                cout << "Novo endereco: " << endl;
                cin >> endereco;
                break;
            case 3:
                cout << "Nova situacao: " << endl;
                cin >> situacao;
                break;
            case 4:
                cout << "Novo telefone: " << endl;
                cin >> telefone_contato;
                break;
            default:
                cout << "Invalido" << endl;
                break;
            }
        }
    }

    this->set_registro("", nome, endereco, telefone, "", 0);
    this->set_situacao(situacao);
}

void Paciente::leitura_situacao()
{
    string temp_situacao;
    cout << "Qual a situação do paciente? " << endl;
    cin >> temp_situacao;
    this->set_situacao(temp_situacao);
}

void Paciente::set_situacao(string temp_situacao)
{
    if (temp_situacao != "")
        this->situacao = temp_situacao;
}

string Paciente::get_paciente()
{
    return this->nome;
}

string Paciente::get_situacao()
{
    return this->situacao;
}

string Paciente::get_tipo_s()
{
    return this->tipo_s;
}

string Paciente::get_cpf()
{
    return this->cpf;
}

void Paciente::imprimir()
{
    cout << "---- FICHA DO PACIENTE ----\n\n";
    cout << "NOME: " << this->nome << endl;
    cout << "CPF: " << this->cpf << endl;
    cout << "IDADE: " << this->idade << endl;
    cout << "ENDERECO: " << this->endereco << endl;
    cout << "TELEFONE: " << this->telefone_contato << endl;
    cout << "TIPO SANGUINEO: " << this->tipo_s << endl;
    cout << "SITUACAO: " << this->situacao << endl;
}