#include <string>
#include <vector>

using namespace std;

class Paciente {
private:
    string cpf;         // chave
    string nome;
    string endereco;
    string telefone_contato;
    int idade;
    string tipo_s;      // tipo sanguineo
    string classe_triagem;
    string situacao;    // internado / alta
    vector<string> historico;

public:
    Paciente(string, string, string, string, string, int);
    Paciente(string, string, string, string, string, string, int);
    Paciente();
    ~Paciente();
    void set_registro(string, string, string, string, string, int);
    void set_situacao(string situacao);
    void set_modificar();
    void leitura_registro();
    void leitura_situacao();
    void imprimir();
    string get_paciente();
    string get_situacao();
    string get_tipo_s();
    string get_cpf();
};