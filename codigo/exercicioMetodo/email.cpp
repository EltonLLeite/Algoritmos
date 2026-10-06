#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

string gerarEmail(string nomeCompleto)
{
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);

    string primeiroNome = obterPrimeiroNome(nomeCompleto);
    string ultimoNome = obterUltimoNome(nomeCompleto);

    return primeiroNome + "." + ultimoNome + "@ufn.edu.br";
}

int main() {

    string nomeCompleto;
    
    string email = gerarEmail(nomeCompleto);

    cout << "Seu email: " << email << endl;

    return 0;
}