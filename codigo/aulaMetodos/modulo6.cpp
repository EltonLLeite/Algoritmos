/*
fazer um programa que tenha um método que receba um nome completo e retorne o primeiro nome desse nome completo.
*/


#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {

    string nomeCompleto;

    string primeiroNome = obterPrimeiroNome(nomeCompleto);

    cout << "O primeiro nome é: " << primeiroNome << endl;

    return 0;
}