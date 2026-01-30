#include <stdio.h>
#include <stdlib.h>

int idade_em_2045(int ano_nascimento);
int idade_base_ano_nascimento(int ano_nascimento);

int ano_atual = 2026;

int main() {

    int ano_nascimento = 0;

    do {

        printf("Digite ano que voce nasceu abaixo:\n");
        printf(">> ");
        scanf("%d",&ano_nascimento);

        if (ano_nascimento <= 0) printf("Ano nao pode ser negativo!\n");

    }while(ano_nascimento <= 0);

    printf("Sua idade: %d\nSua idade em 2045: %d\n",idade_base_ano_nascimento(ano_nascimento),
                                                    idade_em_2045(ano_nascimento));

    return EXIT_SUCCESS;

}

int idade_em_2045(int ano_nascimento) {

    return abs(2045 - ano_nascimento);

}

int idade_base_ano_nascimento(int ano_nascimento) {

    return abs(ano_atual - ano_nascimento);

}
