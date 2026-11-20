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
<<<<<<< HEAD
        getline(arquivo, musga.nome, ';');
        getline(arquivo, musga.artista, ';');
        getline(arquivo, musga.genero, ';');
        getline(arquivo, musga.nota, ';');  
=======
        getline(arquivo, musica.nome, ';');
        getline(arquivo, musica.artista, ';');
        getline(arquivo, musica.genero, ';');
        getline(arquivo, musica.nota, ';');  
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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

<<<<<<< HEAD
bool cadastrarMusga(vector<Musga>& musgas)
{
    Musga musga;
=======
bool cadastrarmusica(vector<musica>& musicas)
{
    musica musica;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d

    cin.ignore();

    cout << "Digite o nome da musica: ";
<<<<<<< HEAD
    getline(cin, musga.nome);
    if (musga.nome == "")
=======
    getline(cin, musica.nome);
    if (musica.nome == "")
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    {
        cout << "O nome não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o nome do(a) artista: ";
<<<<<<< HEAD
    getline(cin, musga.artista);
    if (musga.artista == "")
=======
    getline(cin, musica.artista);
    if (musica.artista == "")
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    {
        cout << "O artista não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite o genero: ";
<<<<<<< HEAD
    getline(cin, musga.genero);
    if (musga.genero == "")
=======
    getline(cin, musica.genero);
    if (musica.genero == "")
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    {
        cout << "O genero não pode ser vazio" << endl;
        return false;
    }
    cout << "Digite a nota da musica: ";
<<<<<<< HEAD
    getline(cin, musga.nota);
    if (musga.nota == "")
=======
    getline(cin, musica.nota);
    if (musica.nota == "")
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    {
        cout << "A nota não pode ser vazia" << endl;
        return false;
    }

<<<<<<< HEAD
    musgas.push_back(musga);
    return true;
}

void listarMusgas(vector<Musga> musgas)
{
    if (musgas.size() == 0)
=======
    musicas.push_back(musica);
    return true;
}

void listarmusicas(vector<musica> musicas)
{
    if (musicas.empty())
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    {
        cout << "Lista Vazia..." << endl;
        return;
    }
    
<<<<<<< HEAD
    for (int i = 0; i < musgas.size(); i++)
    {
        cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
        cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
        cout << " | Nota: " << musgas[i].nota << endl;
=======
    for (int i = 0; i < musicas.size(); i++)
    {
        cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
        cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
        cout << " | Nota: " << musicas[i].nota << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    }
    
}

<<<<<<< HEAD
void removerMusga(vector<Musga>& musgas)
=======
void removermusica(vector<musica>& musicas)
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
{
    string nome, artista;

    cin.ignore();

    cout << "Digite o nome da musica: ";
    getline(cin, nome);
    
    bool encontrado = false;
<<<<<<< HEAD
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
=======
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
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
            }
        }
    }
    
<<<<<<< HEAD
    else if (qtdMusgas > 1)
    {
        cout << "Musicas encontradas:" << endl;
        for (int i = 0; i < musgas.size(); i++)
        {
            if (nome == musgas[i].nome)
            {
                cout << musgas[i].nome << " - " << musgas[i].artista << endl;
=======
    else if (qtdmusicas > 1)
    {
        cout << "Musicas encontradas:" << endl;
        for (int i = 0; i < musicas.size(); i++)
        {
            if (nome == musicas[i].nome)
            {
                cout << musicas[i].nome << " - " << musicas[i].artista << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
            }
        }
        cout << "Digite o artista da musica que deseja excluir: ";
        getline(cin, artista);
        encontrado = false;
<<<<<<< HEAD
        for (int i = 0; i < musgas.size(); i++)
        {
            if (nome == musgas[i].nome && artista == musgas[i].artista)
            {
                encontrado = true;
                musgas.erase(musgas.begin() + i);
=======
        for (int i = 0; i < musicas.size(); i++)
        {
            if (nome == musicas[i].nome && artista == musicas[i].artista)
            {
                encontrado = true;
                musicas.erase(musicas.begin() + i);
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
            }
        }
    }
    if (encontrado)
    {
        cout << "Musica removida com sucesso" << endl;
<<<<<<< HEAD
        cout << encontrado;
=======
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    }
    else
    {
        cout << "Musica nao registrada ou nao encontrada" << endl;
<<<<<<< HEAD
        cout << encontrado;
    }
}

void pesquisarMusga(vector<Musga> musgas)
{
    Musga musga;
=======
    }
}

void pesquisarmusica(vector<musica> musicas)
{
    musica musica;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
    string opcao;

    cin.ignore();

    cout << "Deseja pesquisar por qual parametro? (nome, artista, genero, nota): ";
    cin >> opcao;

    bool encontrado = false;
    if (opcao == "nome")
    {
        cin.ignore();
        cout << "Digite o nome da musica: ";
<<<<<<< HEAD
        getline(cin, musga.nome);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.nome == musgas[i].nome)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
=======
        getline(cin, musica.nome);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.nome == musicas[i].nome)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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
<<<<<<< HEAD
        getline(cin, musga.artista);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.artista == musgas[i].artista)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
=======
        getline(cin, musica.artista);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.artista == musicas[i].artista)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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
<<<<<<< HEAD
        getline(cin, musga.genero);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.genero == musgas[i].genero)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
=======
        getline(cin, musica.genero);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.genero == musicas[i].genero)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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
<<<<<<< HEAD
        getline(cin, musga.nota);
        for (int i = 0; i < musgas.size(); i++)
        {
            if (musga.nota == musgas[i].nota)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musgas[i].nome << " - ";
                cout << musgas[i].artista << " | Genero: " << musgas[i].genero;
                cout << " | Nota: " << musgas[i].nota << endl;
=======
        getline(cin, musica.nota);
        for (int i = 0; i < musicas.size(); i++)
        {
            if (musica.nota == musicas[i].nota)
            {
                encontrado = true;
                cout << "Musica " << i+1 << ": " << musicas[i].nome << " - ";
                cout << musicas[i].artista << " | Genero: " << musicas[i].genero;
                cout << " | Nota: " << musicas[i].nota << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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
<<<<<<< HEAD
        cout << "***MENU***" << endl;
=======
        cout << "\n***MENU***" << endl;
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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
<<<<<<< HEAD
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
=======
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
>>>>>>> e62eaaaaf0c0d8065d6c17eceb0ff8d1bc55379d
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