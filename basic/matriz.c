#include <stdio.h>
#include <stdlib.h>

int length = 5;
int espaco_valores = 20;

int main(void) {

    // Alocação de vetor direto
    // Sem declaracao de valor

    float valores[20];
    valores[0] = 100.0f;

    char nome[] = {'P','e','d','r','o'};

    char second_nome[] = "Souza";

    for (int i = 0; i < espaco_valores; i++) {

        printf("%f\n",valores[i]);

    }

    // Codigo com exemplo de vazamento de memoria
    for (int i = 0; i < 2; i++) {

        for (int y = 0; y < length; i++) {

            printf("%c\n%c",nome[i],second_nome[i]);

        }

    }

    return EXIT_SUCCESS;

}
