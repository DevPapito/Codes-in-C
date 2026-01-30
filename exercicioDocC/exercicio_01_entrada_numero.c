/*
* Esse programa tem o objetivo de receber um numero inteiro e permitir calculo de
quadrado do numero
raiz quadrada
raiz cubica
*/

// Diretivas de pre-compilacao
#include <stdio.h>
#include <math.h> // Precisa conter a flag -lm para linkador GNU encontrar a lib real
#include <stdlib.h>

// Definicao de protitipo de funcao/sub-rotina
double quadrado_do_numero(int numero);
double raiz_quadrada(int numero);
double raiz_cubica(int numero);

int main(void) {

    int numero;

    do {

        printf("Programa ira calcular um numero digitado e descobrir seu quadrado, raiz quadrada e raiz cubica\n");
        printf("Digite um numero: ");

        scanf("%d",&numero);

        if (numero <= 0) printf("\nNumero deve ser maior ou igual a 1\n");

    }while(numero <= 0);

    printf("Quadrado: %.3lf\nRaiz Quadrada: %.3lf\nRaiz Cubica: %.3lf\n",quadrado_do_numero(numero),
                                                                    raiz_quadrada(numero),
                                                                    raiz_cubica(numero));

    return EXIT_SUCCESS;

}

// Calculo do quadrado de um numero e baseado em n numero multiplicado por ele mesmo
double quadrado_do_numero(int numero) {

    return (numero * numero);

}

// Usamos a funcao pronta da lib math.h sqrt para descobrir a raiz quadrada do numero
double raiz_quadrada(int numero) {

    return (double)sqrt(numero);

}

// Usamos a funcao pronta da lib math. cbrt para descobrir a raiz cubica do numero
double raiz_cubica(int numero) {

    return (double)cbrt(numero);

}
