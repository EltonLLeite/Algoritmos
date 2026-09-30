// Criar um programa que tenha uma função que receba uma frase e um caracter de pesquisa.
// A função deve retornar a frase substituindo o caracter de pesquisa pelo símbolo @.

#include <iostream>
#include <string>

using namespace std;

string substituirLetraFrase(string frase, char letra)
{
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] == letra)
        {
            frase[i] = '@';
        }
    }
    return frase;
}

int main() {

    string frase;
    char letra;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Digite uma letra: ";
    cin >> letra;

    string fraseAlterada = substituirLetraFrase(frase, letra);
    
    if (fraseAlterada == frase)
    {
        cout << "A letra informada não aparece na frase" << endl;
    }
    else
    {
        cout << fraseAlterada << endl;
    }

    return 0;
}