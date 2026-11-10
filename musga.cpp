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
{
    Musga musga;

    cin.ignore();

    cout << "Digite o nome da musica: ";
    getline(cin, musga.nome);
    if (musga.nome == "")
    {
        cout << "O nome não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o nome do(a) artista: ";
    getline(cin, musga.artista);
    if (musga.artista == "")
    {
        cout << "O artista não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o genero: ";
    getline(cin, musga.genero);
    if (musga.genero == "")
    {
        cout << "O genero não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite a nota da musica: ";
    getline(cin, musga.nota);
    if (musga.nota == "")
    {
        cout << "A nota não pode ser vazia" << endl;
        return false;
    }

    musgas.push_back(musga);
    return true;
}

void listarMusgas(vector<Musga> musgas)
{
    if (musgas.size() == 0)
    {
        cout << "Lista Vazia..." << endl;
        return;
    }
    
    for (int i = 0; i < musgas.size(); i++)
    {
        cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
        cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
        cout << " | Nota: " << musgas[i].nota << endl;
    }
    
}

int main() {

    vector<Musga> musgas;
    string nomeArquivo = "listamusga.txt";
    int opcao;

    carregarArquivo(nomeArquivo, musgas);

    do
    {
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
            if (cadastrarMusga(musgas))
            {
                atualizarArquivo(nomeArquivo, musgas);
                cout << "funcionou" << endl;
            }
            break;
        case 2:
            listarMusgas(musgas);
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    } while (opcao != 0);
    system("cls");
    return 0;
}