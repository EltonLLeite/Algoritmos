#include <iostream>
#include <string>

using namespace std;

bool validarData(string data)
{
    cout << "Digite uma data (dd/mm/aaaa): ";
    cin >> data;

    if (data.length() == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {

    string data;
    bool valido = validarData(data);
    if (valido)
    {
        cout << "A data e valida" << endl;
    }
    else
    {
        cout << "A data e invalida" << endl;
    }

    return 0;
}