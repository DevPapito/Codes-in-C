/*
*   Um programa que se utiliza uma cadeia de ponteiros, aonde o ponteiro 2 utiliza o endereco do ponteiro
*/

#include <stdio.h>

int     main(void)
{

    int valor = 100;
    int *p1;
    int **p2; // Um ponteiro que espera o corpo e outro ponteiro

    p1 = &valor;
    p2 = &p1;

    **p2 = 150;

    printf("Valor de variavel valor: %d\n", valor);
    printf("Valor de variavel p1: %d\n", *p1);
    printf("Valor de variavel de cadeia de ponteiro p2: %d\n", **p2);


    printf("Endereco da variavel valor: %p\n", (void*) p1);
    printf("Endereco de variavel ponteiro p1: %p\n", (void*) p2);
    printf("Valor de variavel de cadeia de ponteiro p2: %p\n", (void*) &p2);

    return 0;

}
