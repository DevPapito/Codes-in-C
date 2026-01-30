#include <stdio.h>

int main() {

    char nome[100];
    char nomes[2][100];

    for (int r = 0; r < 2; r++) {

        printf("\nDigite o nome do usuario %d abaixo: \n",r+1);
        printf(">>> ");

        //scanf("%99s",nome);
        fgets(nome, sizeof(nome), stdin);

        for (int c = 0; c < 100; c++) {

            nomes[r][c] = nome[c];

        }

        //fgets(nomes, sizeof(nomes), stdin);
        printf("%s\n",nomes[r]);

    }

}
