/*
fazer um programa que tenha um método que receba uma frase e retorne a quantidade de vogais presentes na frase.
*/


#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {

    string frase;

    int qtdVogais = contarVogaisFrase(frase);

    cout << qtdVogais;

    return 0;
}