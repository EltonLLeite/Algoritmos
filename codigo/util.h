void contadorLetraPalavra(string palavra, char letra)
{
    cout << "digite uma palavra: ";
    cin >> palavra;
    cout << "digite uma letra: ";
    cin >> letra;

    int contador = 0;
    for (int i = 0; i < palavra.length(); i++)
    {
        if (letra == palavra[i])
        {
            contador++;
        }
    }

    cout << "A letra '" << letra << "' aparece " << contador << " vezes na palavra '" << palavra << "'" << endl;
}

bool validarData(string sdia, string smes, string sano)
{
    cout << "Digite um dia: ";
    cin >> sdia;
    cout << "Digite um mes: ";
    cin >> smes;
    cout << "Digite um ano: ";
    cin >> sano;

    int dia, mes, ano;

    dia = stoi(sdia);
    mes = stoi(smes);
    ano = stoi(sano);

    if (dia > 32 || dia < 1)
    {
        return false;
    }
    else if (mes > 12 || mes < 1)
    {
        return false;
    }
    else if (dia == 29 && mes == 2 && (ano % 4 != 0))
    {
        return false;
    }
    else if (dia == 31 && (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11))
    {
        return false;
    }
    else if (dia > 29 && mes == 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int contarVogaisFrase(string frase)
{
    cout << "Digite uma frase: ";
    getline(cin, frase);

    int qtdVogais = 0;
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U')
        {
            qtdVogais++;
        }
    }
    return qtdVogais;
}

string fraseParaMaiuscula(string frase) {
    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

bool verificarOrdenacaoVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false;
        }
    }
    return true;
}

string obterPrimeiroNome(string nomeCompleto) {
    cout << "Digite um nome completo: ";
    getline(cin, nomeCompleto);

    for (int i = 0; i < nomeCompleto.length(); i++)
    {
        if (nomeCompleto[i] == ' ')
        {
            return nomeCompleto.substr(0, i); // extrai da string as letras da posição 0 até a posição i
                                              // nome.substr(inicio, qtdCaracteres) -> extrai da string o número de caracteres a partir da posição inicial
        }
    }
    return "Nome sem espaços";
}

int contadorPalavrasFrase(string frase)
{
    int qtdPalavras = 0;
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] == ' ')
        {
            qtdPalavras++;
        }
    }
    return qtdPalavras + 1; // +1 para contar a ultima palavra
}