#include <stdio.h>

int     main(void)
{

    int num;
    int *pnum;

    num = 10;
    pnum = &num;

    printf("Address of num: %p Value: %d\n", (void*) &num, num);
    printf("Address of pnum: %p Value: %p\n", (void*) &pnum, (void*) pnum);

    return 0;

}
