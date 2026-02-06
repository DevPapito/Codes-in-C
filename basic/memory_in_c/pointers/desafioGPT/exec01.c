/*
*   Um programa que permite a mostragem dos valores de dado da variavel x, endereco da variavel x, valor apontado por variavel de ponteiro e o endereco da variavel de ponteiro
*/
#include <stdio.h>

int     main(void) // Caso nao aja parametros de entrada, usamos a referencia void, para dizer que o minimo de recebimento e ZERO/NULO
{

    float x = 10;
    float *px;

    // Apontando variavel ponteiro para endereco da variavel comum
    px = &x;

    printf("Valor de x: %f\n", x);
    printf("Endereco de x: %p\n", (void*) &x); // E aconselhado realizar o casting para tipo de estrutura ponteiro nulo, para mantr a previsibilidade do recebimento %p ao printf
    printf("Valor apontado por px: %f\n", *px);
    printf("Endereco de px: %p\n", (void*) &px);

    return 0;

}
