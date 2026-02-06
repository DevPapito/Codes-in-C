#include <stdio.h>

int     main(void)
{

    int var01;
    int *pvar01;

    var01 = 20;

    pvar01 = &var01;

    printf("Value of var01: %d\n", var01);
    printf("Value of pvar01: %d\n", *pvar01);
    printf("Address memory of var01: %p\n", (void*) pvar01);
    //printf("Address memory of var01: %p\n", (void*) &var01);
    printf("Address memory of pvar01: %p\n", (void*) &pvar01);


    return 0;

}
