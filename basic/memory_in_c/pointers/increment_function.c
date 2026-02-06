#include <stdio.h>

void increment(int *pointer);

int     main(void)
{

    int index;
    int index2;
    int *pindex;

    index = 0;
    index2 = 0;

    pindex = &index;

    increment(pindex);

    pindex = &index2;

    increment(pindex);
    increment(pindex);

    pindex = NULL; // Deixa ponteiro vazio

    printf("Valor de index 1: %d\n", index);
    printf("Referencia de memoria de index 1: %p\n", (void*) &index);
    printf("Valor de index 2: %d\n", index2);
    printf("Referencia de memoria de index 2: %p\n", (void*) &index2);
    printf("Referencia de memoria apontada por pindex: %p\n", (void*) pindex);

    return 0;

}

void    increment(int *pointer)
{

    *pointer += 1;

}
