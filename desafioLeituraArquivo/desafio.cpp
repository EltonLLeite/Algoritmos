#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "util.h"
using namespace std;

int main() {

    //rotina que carrega os stopWords do arquivo para a lista
    ifstream arquivosStopWords;
    vector<string> listaStopWords;
    arquivosStopWords.open("stopWords.txt");

    string linha;
    while (!arquivosStopWords.eof())
    {
        getline(arquivosStopWords, linha);
        linha = paraMaiusculoStringComRetorno(linha);

        listaStopWords.push_back(linha);
    } 
    arquivosStopWords.close();

    //rotina que exiba os arquivos stopwords inseridos na lista
    for (int i = 0; i < listaStopWords.size(); i++)
    {
        cout << listaStopWords[i] << ", ";
    }
    
    //rotina que abre o arquivo original e le palavra por palavra
    ifstream arquivoTexto;
    arquivoTexto.open("arquivo.txt");

    ofstream arquivoTextoSemStopWords;
    arquivoTextoSemStopWords.open("arquivoSemStopWords.txt");
    //para cada palavra lida, comparar na listaStopWords
    string palavra;
    bool encontrou;
    while (arquivoTexto >> palavra)
    {
        encontrou = false;
        palavra = paraMaiusculoStringComRetorno(palavra);
        for (int i = 0; i < listaStopWords.size(); i++)
        {
            if (palavra == listaStopWords[i])
            {
                encontrou = true;
                break;
            }
        }
        if (!encontrou)
        {
            arquivoTextoSemStopWords << palavra << " ";
        }
    }
    arquivoTexto.close();
    arquivoTextoSemStopWords.close();
    //rotina que transfere o texto sem stopWords para outro arquivo
    return 0;
}