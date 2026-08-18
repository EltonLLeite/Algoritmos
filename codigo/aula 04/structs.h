#include <string>
using namespace std;

struct Produto {
    int codigo;
    float preco;
    int quantidade;
};

struct Aluno
{
    int matricula;
    float nota1;
    float nota2;
};

struct Livro
{
    int codigo;
    int paginas;
    int anoPublicacao;
};

struct Perfil
{
    int codigo;
    float peso;
    float altura;
};

struct Conta
{
    int numero;
    float saldo;
};

struct Imovel
{
    int numeroDaCasa;
    float consumo;
};

struct Carro
{
    string placa;
    int anoFabricacao;
    float preco;
};

struct Cliente {
    int codigo;
    int idade;
    string telefone;
};

struct Jogador
{
    int id;
    float mediaPontos;
};

struct Funcionario
{
    int codigo;
    int idade;
    float salario;
};

