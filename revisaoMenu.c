#include <stdio.h>
#include <stdlib.h>

// Codigo exemplo para menu de opções

int main() {

    int opcao;
    //do {
        printf("Menu principal\n");
        printf("1 - Popular vetor com numeros aleatorios\n");
        printf("2 - Listar vetor populado\n");
        printf("3 - Sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);
        
    //} while (opcao != 3);

    switch (opcao) {
        case 1:
            printf("Populando o vetor\n");
            break;
        case 2:
            printf("listando o vetor\n");
            break;
        case 3:
            printf("programa encerrado\n");
            break;
        default:
            printf("Opção invalida... Redigite\n");
            break;
    }

    return 1;
}