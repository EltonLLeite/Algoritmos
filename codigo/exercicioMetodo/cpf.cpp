#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

#include "../util.h"

bool validarCpf(string cpf)
{
    cout << "Digite o CPF (SEM PONTUACAO!!): ";
    cin >> cpf;

    if (cpf.length() == 11)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    
    string cpf;

    bool valido = validarCpf(cpf);
    if (valido)
    {
        cout << "O cpf e valido" << endl;
    }
    else
    {
        cout << "O cpf e invalido" << endl;
    }
    
    return 0;
}