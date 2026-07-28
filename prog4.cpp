#include <iostream>
using namespace std;

int main() {

    int boulosAlimentar;
    cout << "informe o seu boulos alimentar: ";
    cin >> boulosAlimentar;

    int totalCarboidratoIngerido;
    cout << "Informe o total de carboidrato ingerido: ";
    cin >> totalCarboidratoIngerido;

    int quantidadeInsulinaCorrecao;
    quantidadeInsulinaCorrecao = totalCarboidratoIngerido/boulosAlimentar;

    cout << "vc deveria usar " << quantidadeInsulinaCorrecao << " unidades de insulina";

    return 1;
}
