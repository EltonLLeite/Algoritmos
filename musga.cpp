#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Musga
{
    string nome;
    string nota;
    string genero;
    string artista;
};

void carregarArquivo(string nomeArquivo, vector<Musga>& musgas)
{
    ifstream arquivo;
    arquivo.open(nomeArquivo);

    if (!arquivo)
    {
        return;
    }
    
    Musga musga;

    while (!arquivo.eof())
    {
        getline(arquivo, musga.nome, ';');
        getline(arquivo, musga.artista, ';');
        getline(arquivo, musga.genero, ';');
        getline(arquivo, musga.nota, ';');  

        if (arquivo.fail())
        {
            break;
        }
        
        musgas.push_back(musga);
    }
    arquivo.close();
}

void atualizarArquivo(string nomeArquivo, vector<Musga> musgas)
{
    ofstream arquivo;
    arquivo.open(nomeArquivo);

    for (int i = 0; i < musgas.size(); i++)
    {
        arquivo << musgas[i].nome << ";";
        arquivo << musgas[i].artista << ";";
        arquivo << musgas[i].genero << ";";
        arquivo << musgas[i].nota << ";" << endl;
    }
    
    arquivo.close();
}

bool cadastrarMusga(vector<Musga>& musgas)

int main() {

    vector<Musga> musgas;
    string nomeArquivo = "listamusga.txt";
    int opcao;

    carregarArquivo(nomeArquivo, musgas);

    do
    {
        system("cls");
        cout << "***MENU***" << endl;
        cout << "1 - Cadastrar musica" << endl;
        cout << "2 - listar musicas" << endl;
        cout << "3 - remover musica" << endl;
        cout << "4 - pesquisar" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar musica..." << endl;

            break;
        
        default:
            break;
        }
    } while (opcao != 0);
    
    return 0;
}