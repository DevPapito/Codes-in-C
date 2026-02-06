#include <stdio.h>

int     main(void)
{

    double var1;
    double *pvar1;

    var1 = 12.5;

    pvar1 = &var1;

    *pvar1 = 30.4;

    printf("Endereco de memoria de var1: %p\n", (void*) &var1);
    printf("Endereco de memoria da memoria armazenada de pvar1: %p\n", (void*) pvar1);

    return 0;

}
