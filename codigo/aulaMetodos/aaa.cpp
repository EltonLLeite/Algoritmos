#include <iostream>
#include <string>

using namespace std;

#include "../util.h"

int main() {

    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << contadorPalavrasFrase(frase) << endl;

    return 0;
}