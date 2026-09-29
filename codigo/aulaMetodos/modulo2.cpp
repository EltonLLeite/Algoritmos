/*
fazer um programa e dentro dele um método que receba o dia (string), o mês (string) e o ano (string). O método deve escrever 'DATA VÁLIDA' ou 'DATA INVÁLIDA' para a situação 
das variáveis passadas.
*/

#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {
    string dia;
    string mes;
    string ano;

    bool valido = validarData(dia, mes, ano);
    if (valido)
    {
        cout << "DATA VALIDA" << endl;
    }
    else
    {
        cout << "DATA INVALIDA" << endl;
    }
    
    return 0;
}