#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string nome;
    cout << "Digite seu nome completo";
    getline(cin, nome);

    cout << "Voce digitou " << nome << "\n";
    cout << "essa frase tem " << nome.length() << " caracteres\n";

    return 1;
}
