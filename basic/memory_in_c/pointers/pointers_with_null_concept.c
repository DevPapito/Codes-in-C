#include <stdio.h>

int     main(void)
{

    // Pointeiros NULL

    int *p1 = NULL; // stdio.h  stdlib.h stddef.h
    int *p2 = 0; // Conceito igual a null porem em numero

    // Ponteiros void

    int num = 200;

    void *p3 = p2;

    int *p4 = (int* )p3; // Otimo para ponteiros polimorficos em C

    // Inicializar tipo de sizeof com void

    size_t size = sizeof(void*); // Deve-se ser um ponteiro void* e nao void
    // size_t size = sizeof(void); // Formato errado

    return 0;

}
