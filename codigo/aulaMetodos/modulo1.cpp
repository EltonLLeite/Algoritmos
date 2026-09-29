/*
fazer um programa e dentro dele um método que receba uma palavra (do tipo string) e uma letra (do tipo char). O método deve contar quantas vezes a letra aparece na palavra e 
exibir essa quantidade;
*/


#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {

    string palavra;
    char letra;

    receberPalavraeLetra(palavra, letra);

    return 0;
}