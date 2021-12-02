// Controle e gerenciamento de paciente.
#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Paciente.h"

using namespace std;

// Estrutura para salvar data de pacientes
struct Date
{
    int day;
    int mon;
    int year;
    int hour;
    int min;
    int sec;
    bool valid;
};

// Salva quando o usuário entrou e quanto saiu
class DateInOut
{
public:
    struct Date in;  // Data de entrada
    struct Date out; // Data de saída
};

class ArquivoPacientes
{
private:
    vector<Paciente> pacientes;
    vector<DateInOut> dateInOut;
    int data_in_out[11]; // data de entrada e saída

public:
    ArquivoPacientes();
    ~ArquivoPacientes();
    void Create(Paciente P);          // Cria um paciente
    void Update(Paciente p, int pos); // Atualiza um paciente
    void Delete();                    // Deleta o último paciente inserido
    void DeleteWithCpf(string cpf);   // Deleta um paciente em especifico
    void MarcarSaida(string cpf);     // Marca quando um paciente saiu
    Paciente Read(int i);             // Obtem um paciente por posição
    Paciente Read(string cpf);        // Obtem um paciente pelo cpf
    int ReadPos(string cpf);          // Obtem a posição no vetor para um paciente
    int Total();                      // Retorna total de pacientes
    int TotalAlta();                  // Obtem total de altas
    int TotalInternados();            // Total de internados
    DateInOut getDataPaciente(int pos); // Retorna as datas de um paciente
};

ArquivoPacientes::ArquivoPacientes()
{
    struct tm *data_tempo;
    time_t segundos;
    time(&segundos);

    data_tempo = localtime(&segundos);

    //inclusao de data e hora ao criar o arquivo
    data_in_out[0] = data_tempo->tm_mday;
    data_in_out[1] = data_tempo->tm_mon + 1;
    data_in_out[2] = data_tempo->tm_year + 1900;
    data_in_out[3] = data_tempo->tm_hour;
    data_in_out[4] = data_tempo->tm_min;
    data_in_out[5] = data_tempo->tm_sec;
}

ArquivoPacientes::~ArquivoPacientes() {}

void ArquivoPacientes::Create(Paciente p)
{
    struct tm *data_tempo;
    time_t segundos;
    time(&segundos);
    data_tempo = localtime(&segundos);

    DateInOut dateIn;
    struct Date date;
    date.day = data_tempo->tm_mday;
    date.mon = data_tempo->tm_mon + 1;
    date.year = data_tempo->tm_year + 1900;
    date.hour = data_tempo->tm_hour;
    date.min = data_tempo->tm_min;
    date.sec = data_tempo->tm_sec;
    date.valid = false;      
    dateIn.in = date;
    dateIn.out = date;           // Como valid é falso, essa não é uma data de saída valida, logo não sera utilizada, pois o paciente acabou de entrar
    
    this->pacientes.push_back(p);      // pushback adiciona um novo
    this->dateInOut.push_back(dateIn); // pushback date in
}

void ArquivoPacientes::MarcarSaida(string cpf)
{
    struct tm * data_tempo;
    time_t segundos;
    time(&segundos);
    data_tempo = localtime(&segundos);

    struct Date date;
    date.day = data_tempo->tm_mday;
    date.mon = data_tempo->tm_mon + 1;
    date.year = data_tempo->tm_year + 1900;
    date.hour = data_tempo->tm_hour;
    date.min = data_tempo->tm_min;
    date.sec = data_tempo->tm_sec;
    date.valid = true;      // Marca como uma data de saida valida

    // Marca a saída do paciente
    int pos = this->ReadPos(cpf);
    this->dateInOut[pos].out = date;
    this->pacientes[pos].set_situacao("alta");
}

Paciente ArquivoPacientes::Read(int i)
{
    return this->pacientes[i];
}

void ArquivoPacientes::Update(Paciente p, int i)
{
    this->pacientes[i] = p;
}

void ArquivoPacientes::Delete()
{
    this->pacientes.pop_back(); //remove o ultimo elemento do vetor
}

void ArquivoPacientes::DeleteWithCpf(string cpf)
{
    for (int i = 0; i < this->pacientes.size(); i++)
    {
        if (this->pacientes[i].get_cpf() == cpf)
        {
            this->pacientes.erase(this->pacientes.begin() + i);
            this->dateInOut.erase(this->dateInOut.begin() + i);
            break;
        }
    }
}

DateInOut ArquivoPacientes::getDataPaciente(int pos) {
    return this->dateInOut[pos];
}

Paciente ArquivoPacientes::Read(string cpf)
{
  int pos;
    for (int i = 0; i < this->pacientes.size(); i++)
      if (this->pacientes[i].get_cpf() == cpf)
        pos = i;
  return this->pacientes[pos];
        
}

int ArquivoPacientes::ReadPos(string cpf)
{
    for (int i = 0; i < this->pacientes.size(); i++)
        if (this->pacientes[i].get_cpf() == cpf)
            return i;
    return -1;
}

int ArquivoPacientes::Total() {
    return this->pacientes.size();
}

int ArquivoPacientes::TotalAlta()
{
    int totalAlta = 0;
    for (int i = 0; i < this->pacientes.size(); i++)
        if (this->pacientes[i].get_situacao() == "alta")
            totalAlta++;
    return totalAlta;
}

int ArquivoPacientes::TotalInternados()
{
    int totalInternado = 0;
    for (int i = 0; i < this->pacientes.size(); i++)
        if (this->pacientes[i].get_situacao() == "internado")
            totalInternado++;
    return totalInternado;
}

class Leito
{
private:
    int ocupado;

public:
    Leito();
    Leito(int valor);
    ~Leito();
    void set_ocupacao(int valor); //Definir como ocupado ou desocupado
    int get_ocupacao();
};

Leito::Leito() {}

Leito::Leito(int valor) {
    this->ocupado = valor;
}

Leito::~Leito() {}

void Leito::set_ocupacao(int valor)
{
    //0 = livre / 1 = ocupado
    this->ocupado = valor;
}

int Leito::get_ocupacao()
{
    return this->ocupado;
}

class Sala
{
private:
    vector<Leito> leitos;

public:
    Sala();
    Sala(int total_leitos);
    ~Sala();
    void Create();
    void Create(Leito leito);
    void Delete();
    void Delete(int pos);
    int get_numero_leitos();
    int get_numero_leitos_ocupados();
    int get_numero_leitos_desocupados();
};

Sala::Sala() {}

Sala::Sala(int total_leitos)
{
    for (int i = 0; i < total_leitos; i++)
    {
        Leito leito;
        leito.set_ocupacao(0);
        this->leitos.push_back(leito);
    }
}

void Sala::Create()
{
    Leito leito;
    this->leitos.push_back(leito);
}

void Sala::Create(Leito leito)
{
    this->leitos.push_back(leito);
}

void Sala::Delete()
{
    this->leitos.pop_back();
}

void Sala::Delete(int pos)
{
    this->leitos.erase(this->leitos.begin() + pos);
}

Sala::~Sala() {}

int Sala::get_numero_leitos()
{
    return this->leitos.size();
}

int Sala::get_numero_leitos_ocupados()
{
    int total = 0;
    for (int i = 0; i < this->leitos.size(); i++)
        if (this->leitos[i].get_ocupacao() == 1)
            total += 1;
    return total;
}

int Sala::get_numero_leitos_desocupados()
{
    int total = 0;
    for (int i = 0; i < this->leitos.size(); i++)
        if (this->leitos[i].get_ocupacao() == 0)
            total += 1;
    return total;
}

class Ala
{
private:
    vector<Sala> salas;

public:
    Ala();
    Ala(int total_salas);
    ~Ala();
    void Create();                   // Cria uma sala nova
    void Create(Sala sala);          // Insere uma sala
    Sala Read(int pos);              // Obtem uma sala em especifico
    void Update(Sala sala, int pos); // Atualiza uma posição
    void Delete();                   // Deleta a última sala
    void Delete(int pos);            // Deleta uma posição
    float TaxaOcupacaoLeito();       // Taxa de ocupação
    float TaxaDesocupacaoLeito();    // Taxa de desoucupeção
    int TotalLeitos();               // Total de leitos
    int TotalSalas();                // Total salas
};

Ala::Ala() {}

Ala::Ala(int total_salas)
{
    for (int i = 0; i < total_salas; i++)
    {
        Sala sala;
        this->salas.push_back(sala);
    }
}

Ala::~Ala() {}

void Ala::Create()
{
    Sala sala;
    this->salas.push_back(sala);
}

void Ala::Create(Sala sala)
{
    this->salas.push_back(sala);
}

Sala Ala::Read(int pos)
{
    return this->salas[pos];
}

void Ala::Update(Sala sala, int pos)
{
    this->salas[pos] = sala;
}

void Ala::Delete()
{
    this->salas.pop_back();
}

void Ala::Delete(int pos)
{
    this->salas.erase(this->salas.begin() + 1);
}

float Ala::TaxaOcupacaoLeito()
{
    int total = 0;
    int ocupacao = 0;
    for (int i = 0; i < this->salas.size(); i++)
    {
        ocupacao += this->salas[i].get_numero_leitos_ocupados();
        total += this->salas[i].get_numero_leitos();
    }
    return ((float)ocupacao / total) * 100;
}

float Ala::TaxaDesocupacaoLeito()
{
    int total = 0;
    int desocupacao = 0;
    for (int i = 0; i < this->salas.size(); i++)
    {
        desocupacao += this->salas[i].get_numero_leitos_desocupados();
        total += this->salas[i].get_numero_leitos();
    }
    return ((float)desocupacao / total) * 100;
}

int Ala::TotalLeitos()
{
    int total = 0;
    for (int i = 0; i < this->salas.size(); i++)
        total += this->salas[i].get_numero_leitos();
    return total;
}

int Ala::TotalSalas()
{
    return this->salas.size();
}

class Hospital
{
private:
    vector<Ala> alas;
    ArquivoPacientes arquivoPacientes;

public:
    Hospital();
    Hospital(int total_alas);
    ~Hospital();
    void Create();                // Insere uma ala nova
    void Create(Ala ala);         // Insere uma ala feita
    void Create(ArquivoPacientes arquivo);
    void Delete();                // Delera a ultima ala
    void Delete(int pos);         // Deleta uma ala especifica
    void relatorio_estatistico(); // Relatórios
};

Hospital::Hospital() {}

Hospital::Hospital(int total_alas)
{
    for (int i = 0; i < total_alas; i++)
    {
        Ala ala;
        this->alas.push_back(ala);
    }
}

Hospital::~Hospital() {}

void Hospital::Create()
{
    Ala ala;
    this->alas.push_back(ala);
}

void Hospital::Create(ArquivoPacientes arquivo) {
    this->arquivoPacientes = arquivo;
}

void Hospital::Create(Ala ala)
{
    this->alas.push_back(ala);
}

void Hospital::relatorio_estatistico()
{
    cout << "-------------------------------------------------------------" << endl;
    cout << "---------------- RELATORIO HOSPITAL -------------------------" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl;
    
    // Informações sobre os pacientes
    cout << "Total de pacientes que passaram no hospital: " << this->arquivoPacientes.Total() << endl;
    cout << "Total de internados: " << this->arquivoPacientes.TotalInternados() << endl;
    cout << "Total de altas: " << this->arquivoPacientes.TotalAlta() << endl;
    cout << "Quantidade de Alas: " << this->alas.size() << endl;
    cout << endl;

    // Investiga cada Ala
    for (int i = 0; i < this->alas.size(); i++)
    {
        Ala ala = this->alas[i];
        cout << "-------------------------------------------------------------" << endl;
        cout << "\tRELATORIO DA ALA " << i+1 << endl;
        cout << "\tTotal de salas: " << ala.TotalSalas() << endl;
        cout << "\tTotal de leitos: " << ala.TotalLeitos() << endl;
        if(ala.TotalSalas() > 0) {
            cout << "\tTaxa de ocupacao dos leitos: " << ala.TaxaOcupacaoLeito() << "%" << endl;
            cout << "\tTaxa de desocupacao dos leitos: " << ala.TaxaDesocupacaoLeito()<< "%" << endl;
        }

        // Investiga cada Sala da Ala atual
        for (int j = 0; j < ala.TotalSalas(); j++)
        {
            Sala sala = ala.Read(j);
            cout << "\t\t-------------------------------" << endl;
            cout << "\t\tRELATORIO DA SALA " << j+1 << endl;
            cout << "\t\tTotal de leitos: " << sala.get_numero_leitos() << endl;
            cout << "\t\tTotal de leitos ocupado: " << sala.get_numero_leitos_ocupados() << endl;
            cout << "\t\t-------------------------------" << endl;
            cout << endl;
        }
        cout << endl;
    }

    // Investiga cada usuário
    for (int i = 0; i < this->arquivoPacientes.Total(); i++) {
        Paciente paciente = this->arquivoPacientes.Read(i);
        DateInOut datePaciente = this->arquivoPacientes.getDataPaciente(i);
        paciente.imprimir();
        if(datePaciente.in.day < 10){
            cout << "Data de entrada: " << "0" << datePaciente.in.day << "/" << datePaciente.in.mon << "/" << datePaciente.in.year << endl;
            if (datePaciente.out.valid)
                cout << "Data de saida: " << "0" << datePaciente.out.day << "/" << datePaciente.out.mon << "/" << datePaciente.out.year << endl;
            cout << endl;
        }else{
            cout << "Data de entrada: " << datePaciente.in.day << "/" << datePaciente.in.mon << "/" << datePaciente.in.year << endl;
            if (datePaciente.out.valid)
                cout << "Data de saida: " << datePaciente.out.day << "/" << datePaciente.out.mon << "/" << datePaciente.out.year << endl;
            cout << endl;
        }
    }
}

int main()
{
    Paciente * p1 = new Paciente("563.732.250-38", "Gabriel", "Quadra 912 Sul Alameda 8", "(63) 99996-2471", "A", 18);
    Paciente * p2 = new Paciente("389.220.400-41", "Priscila", "Rua Andirá", "(92) 99180-1304", "AB", 12);
    Paciente * p3 = new Paciente("244.075.500-15", "Roberta", "Rua Felipe Colombo", "(48) 99311-5496", "AB", 18);
    Paciente * p4 = new Paciente("623.561.930-81", "Renato", "Rua Governador Francisco Mello", "(82) 98769-7149", "O", 80);
    Paciente * p5 = new Paciente("234.640.150-17", "Raul", "Rua Nossa Senhora da Conceição", "(68) 98588-9935", "B", 23);
    p1->set_situacao("internado");
    p2->set_situacao("internado");
    p3->set_situacao("internado");
    p4->set_situacao("internado");
    p5->set_situacao("internado");

    // Arquivos Pacientes
    ArquivoPacientes * arquivoPacientes = new ArquivoPacientes();
    arquivoPacientes->Create(*p1);
    arquivoPacientes->Create(*p2);
    arquivoPacientes->Create(*p3);
    arquivoPacientes->Create(*p4);
    arquivoPacientes->Create(*p5);

    // Paciente com alta
    arquivoPacientes->MarcarSaida("234.640.150-17");

    // Leito
    Leito * l1 = new Leito(0);
    Leito * l2 = new Leito(0);
    Leito * l3 = new Leito(0);
    Leito * l4 = new Leito(1);
    Leito * l5 = new Leito(1);
    Leito * l6 = new Leito(0);
    Leito * l7 = new Leito(1);
    Leito * l8 = new Leito(1);

    // Salas
    Sala * sala1 = new Sala();
    Sala * sala2 = new Sala();

    sala1->Create(*l1);
    sala1->Create(*l2);
    sala1->Create(*l3);
    sala1->Create(*l4);
    sala1->Create(*l5);
    sala2->Create(*l6);
    sala2->Create(*l7);
    sala2->Create(*l8);

    // Ala
    Ala * ala1 = new Ala();
    Ala * ala2 = new Ala();

    ala1->Create(*sala1);
    ala1->Create(*sala2);

    // Hospital
    Hospital * hospital = new Hospital();
    hospital->Create(*arquivoPacientes);
    hospital->Create(*ala1);
    hospital->Create(*ala2);
    hospital->relatorio_estatistico();
    return 0;
}