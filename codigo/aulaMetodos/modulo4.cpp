/*
fazer um programa que tenha um método que receba uma frase e retorne essa frase totalmente em maiúscula.
*/


#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {
    string frase;

    frase = fraseParaMaiuscula(frase);
    cout << "Frase em maiúscula: " << frase << endl;
    return 0;
}