#include <stdio.h>

int     main(void)
{

    int out;
    int *ptr;

    out = 20;

    ptr = &out;

    printf(" %d\n", out); // 20
    printf(" %d\n", *ptr); // 20

    *ptr = *ptr + out;

    printf(" %d\n", out); // 40

    *ptr = out + 16;

    printf(" %d\n", out); // 56

    return 0;

}
