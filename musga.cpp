/*
CÓDIGO PARA UMA LISTA DE AVALIAÇÃO DE MÚSICAS (musica == musica)
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct musica
{
    string nome;
    string nota;
    string genero;
    string artista;
};

void carregarArquivo(string nomeArquivo, vector<musica>& musicas)
{
    ifstream arquivo;
    arquivo.open(nomeArquivo);

    if (!arquivo)
    {
        return;
    }
    
    musica musica;

    while (!arquivo.eof())
    {
        getline(arquivo, musica.nome, ';');
        getline(arquivo, musica.artista, ';');
        getline(arquivo, musica.genero, ';');
        getline(arquivo, musica.nota, ';');  
        arquivo.ignore();

        if (arquivo.fail())
        {
            break;
        }
        
        musicas.push_back(musica);
    }
    arquivo.close();
}

void atualizarArquivo(string nomeArquivo, vector<musica> musicas)
{
    ofstream arquivo;
    arquivo.open(nomeArquivo);

    for (int i = 0; i < musicas.size(); i++)
    {
        arquivo << musicas[i].nome << ";";
        arquivo << musicas[i].artista << ";";
        arquivo << musicas[i].genero << ";";
        arquivo << musicas[i].nota << ";" << endl;
    }
    
    arquivo.close();
}

bool cadastrarmusica(vector<musica>& musicas)
{
    musica musica;

    cin.ignore();

    cout << "Digite o nome da musica: ";
    getline(cin, musica.nome);
    if (musica.nome == "")
    {
        cout << "O nome não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o nome do(a) artista: ";
    getline(cin, musica.artista);
    if (musica.artista == "")
    {
        cout << "O artista não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o genero: ";
    getline(cin, musica.genero);
    if (musica.genero == "")
    {
        cout << "O genero não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite a nota da musica: ";
    getline(cin, musica.nota);
    if (musica.nota == "")
    {
        cout << "A nota não pode ser vazia" << endl;
        return false;
    }

    musicas.push_back(musica);
    return true;
}

void listarmusicas(vector<musica> musicas)
{
    if (musicas.empty())
    {
        cout << "Lista Vazia..." << endl;
        return;
    }
    
    for (int i = 0; i < musicas.size(); i++)
    {
        cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
        cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
        cout << " | Nota: " << musicas[i].nota << endl;
    }
    
}

void removermusica(vector<musica>& musicas)
{
    string nome, artista;

    cin.ignore();

    cout << "Digite o nome da musica: ";
    getline(cin, nome);
    
    bool encontrado = false;
    int qtdmusicas = 0;
    for (int i = 0; i < musicas.size(); i++)
    {
        if (nome == musicas[i].nome)
        {
            qtdmusicas++;
            encontrado = true;
        }
    }
    if (qtdmusicas == 1)
    {
        for (int i = 0; i < musicas.size(); i++)
        {
            if (nome == musicas[i].nome)
            {
                encontrado = true;
                musicas.erase(musicas.begin() + i);
            }
        }
    }
    
    else if (qtdmusicas > 1)
    {
        cout << "Musicas encontradas:" << endl;
        for (int i = 0; i < musicas.size(); i++)
        {
            if (nome == musicas[i].nome)
            {
                cout << musicas[i].nome << " - " << musicas[i].artista << endl;
            }
        }
        cout << "Digite o artista da musica que deseja excluir: ";
        getline(cin, artista);
        encontrado = false;
        for (int i = 0; i < musicas.size(); i++)
        {
            if (nome == musicas[i].nome && artista == musicas[i].artista)
            {
                encontrado = true;
                musicas.erase(musicas.begin() + i);
            }
        }
    }
    if (encontrado)
    {
        cout << "Musica removida com sucesso" << endl;
    }
    else
    {
        cout << "Musica nao registrada ou nao encontrada" << endl;
    }
}

void pesquisarmusica(vector<musica> musicas)
{
    musica musica;
    string opcao;

    cin.ignore();

    cout << "Deseja pesquisar por qual parametro? (nome, artista, genero, nota): ";
    cin >> opcao;

    bool encontrado = false;
    if (opcao == "nome")
    {
        cin.ignore();
        cout << "Digite o nome da musica: ";
        getline(cin, musica.nome);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.nome == musicas[i].nome)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
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
        getline(cin, musica.artista);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.artista == musicas[i].artista)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
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
        getline(cin, musica.genero);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.genero == musicas[i].genero)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
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
        getline(cin, musica.nota);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.nota == musicas[i].nota)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
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

    vector<musica> musicas;
    string nomeArquivo = "listamusica.txt";
    int opcao;

    carregarArquivo(nomeArquivo, musicas);

    do
    {
        cout << "\n***MENU***" << endl;
        cout << "1 - Cadastrar musica" << endl;
        cout << "2 - Listar musicas" << endl;
        cout << "3 - Remover musica" << endl;
        cout << "4 - Pesquisar" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar musica..." << endl;
            if (cadastrarmusica(musicas))
            {
                atualizarArquivo(nomeArquivo, musicas);
            }
            break;
        case 2:
            listarmusicas(musicas);
            break;
        case 3:
            removermusica(musicas);
            atualizarArquivo(nomeArquivo, musicas);  
            break;
        case 4:
            pesquisarmusica(musicas);
            break;
        default:
            cout << "Opção invalida" << endl;
            break;
        }
        system("pause");
        system("cls");
    } while (opcao != 0);
    system("cls");
    return 0;
}