#include <stdio.h>

int     main(void)
{

    int n = 50;
    int *pn;

    pn = &n;

    *pn = *pn+10;

    printf("Valor de n %d\n", n);
    printf("Valor de pn %d\n", *pn);
    printf("Endereco de n %p\n", (void*) &n);
    printf("Endereco de pn %p\n", (void*) &pn);

    return 0;

}
