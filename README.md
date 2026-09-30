# Algoritmos

Aula (10/08/2026) {
Revisando string (em c e c++)
todo vetor é um ponteiro

flush = descarga
fflush = descarga de memoria

vetor no c++ {
    .push_back() <-- insere valores no vetor;
    .erase() <-- remove valores do vetor;
  }
}

Aula 24/08/26{

    struct {
        Recurso antigo, para criar TIPOS do programador;
        Ideia de encapsulamento;
        forma um conjunto heterogêneo de dados;
    }

    leitura de arquivos {
        introdução a leitura de arquivos;
        #include <fstream>;
        fizemos um codigo ler linha por linha;
    }
}


## Aula 28/09/26 
    # Desenvolvimento de programas:
    # Uso de structs combinados com listas ou arrays ou vetores

    # Manipulação de arquivos texto (plain texto: csv, xml, json, toon)

    # Organização do código em módulos ou modularização
    - métodos sem retorno - há presença da palavra void
        - procedimentos ou procedure
        - linguagens como C, C++, Java, C#

        void nomeProcedimento(tipo param1, tipo param2, tipo param3, ...) {
            //codigos
        }

        ou 

        void nomeProcedimento() {
            //codigos
        }


    - métodos com retorno - há presença da palavra return
        - funções ou function
        - linguagens como C, C++, Java, C#

        tipo nomeFuncao(tipo param1, tipo param2, tipo param3, ...) {
            //codigos

            return valor_daquele_tipo;
        }

        ou

        tipo nomeFuncao() {
            //codigos

            return valor_daquele_tipo;
        }


    IMPORTANTE:
            - parâmetro (param) ou argumento (arg)
                - é uma referência para dentro do código

            - operação é o conjunto de ações desejadas no programa
                - método é uma forma particular de resolver aquela operação

            - Sistema ou um programa composto por N funcionalidades
                - Alternativa atual
                    - uma funcionalidade abaixo da outra (programação sequencial e a la script)
                - Decomposição funcional
                    - criar módulo para um conjunto de funcionalidades
                        - possibilidade de reuso
                        - facilidade de manutenção
            - como identificar no meio de um código se um método é SEM RETORNO

                metodo()
                metodo(3,x)


            - como identificar no meio de um código se um método é COM RETORNO

                var = metodo()
                var = metodo(3, x)
                if (metodo(3,x) == true) {
                    
                }







    //modulo1.cpp
    #include <iostream>
    #include <string>
    #include <ctime>
    #define TAM 100000
    
    #include "util.h"
    
    using namespace std;
    
    int main() {
    int vetor[TAM];
    
    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);
    
    return 1;
    }






    //util.h
    
    void popularVetor(int vetor[], int tamanho) {
        //rotina ou uma funcionalidade para popular o vetor com TAM numeros aleatórios
        srand(time(NULL));
        for (int i = 0; i < tamanho; i++) {
            vetor[i] = rand() % 100;
        }
    }
    
    void exibirVetor(int vetor[], int tamanho) {
        //rotina ou uma funcionalidade para exibir o vetor com TAM numeros aleatorios
        for (int i = 0; i < tamanho; i++) {
            cout << vetor[i] << endl;
        }
    }
