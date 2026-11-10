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
        arquivo.ignore();

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

void removerMusga(vector<Musga>& musgas)
{
    string nome, artista;

    cin.ignore();

    cout << "Digite o nome da musica: ";
    getline(cin, nome);
    
    bool encontrado = false;
    int qtdMusgas = 0;
    for (int i = 0; i < musgas.size(); i++)
    {
        if (nome == musgas[i].nome)
        {
            qtdMusgas++;
            encontrado = true;
        }
    }
    if (qtdMusgas == 1)
    {
        for (int i = 0; i < musgas.size(); i++)
        {
            if (nome == musgas[i].nome)
            {
                encontrado = true;
                musgas.erase(musgas.begin() + i);
            }
        }
    }
    
    else if (qtdMusgas > 1)
    {
        cout << "Musicas encontradas:" << endl;
        for (int i = 0; i < musgas.size(); i++)
        {
            if (nome == musgas[i].nome)
            {
                cout << musgas[i].nome << " - " << musgas[i].artista << endl;
            }
        }
        cout << "Digite o artista da musica que deseja excluir: ";
        getline(cin, artista);
        encontrado = false;
        for (int i = 0; i < musgas.size(); i++)
        {
            if (nome == musgas[i].nome && artista == musgas[i].artista)
            {
                encontrado = true;
                musgas.erase(musgas.begin() + i);
            }
        }
    }
    if (encontrado)
    {
        cout << "Musica removida com sucesso" << endl;
        cout << encontrado;
    }
    else
    {
        cout << "Musica nao registrada ou nao encontrada" << endl;
        cout << encontrado;
    }
}

void pesquisarMusga(vector<Musga> musgas)
{
    Musga musga;
    string opcao;

    cin.ignore();

    cout << "Deseja pesquisar por qual parametro? (nome, artista, genero, nota): ";
    cin >> opcao;

    bool encontrado = false;
    if (opcao == "nome")
    {
        cin.ignore();
        cout << "Digite o nome da musica: ";
        getline(cin, musga.nome);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.nome == musgas[i].nome)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
            }
        }
        if (!encontrado)
        {
            cout << "nenhuma musica encontrada..." << endl;
        }
    }
    else if (opcao == "artista")
    {
        cin.ignore();
        cout << "Digite o nome do(a) artista: ";
        getline(cin, musga.artista);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.artista == musgas[i].artista)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
            }
        }
        if (!encontrado)
        {
            cout << "nenhuma musica encontrada..." << endl;
        }
    }
    else if (opcao == "genero")
    {
        cin.ignore();
        cout << "Digite o genero da musica: ";
        getline(cin, musga.genero);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.genero == musgas[i].genero)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
            }
        }
        if (!encontrado)
        {
            cout << "nenhuma musica encontrada..." << endl;
        }
    }
    else if (opcao == "nota")
    {
        cin.ignore();
        cout << "Digite a nota da musica: ";
        getline(cin, musga.nota);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.nota == musgas[i].nota)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
            }
        }
        if (!encontrado)
        {
            cout << "nenhuma musica encontrada..." << endl;
        }
    }
    else
    {
        cout << "opcao invalida" << endl;
        return;
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
        case 3:
            removerMusga(musgas);
            atualizarArquivo(nomeArquivo, musgas);  
            break;
        case 4:
            pesquisarMusga(musgas);
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
