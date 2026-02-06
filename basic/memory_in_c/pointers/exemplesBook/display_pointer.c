#include <stdio.h>

int     main(void)
{

    unsigned int number = 10;
    unsigned int *pnumber;

    pnumber = &number;

    printf("Show value and anddress basic\n");
    printf("Address of number %p and value %f\n", (void*) pnumber, number);
    printf("Address of pnumber %p and value %p\n", (void*) &pnumber, pnumber);
    printf("Show value and address in hex and octal\n");
    printf("Address of number in hex %o and value %x\n", pnumber, number);
    printf("Address of pnumber in hex %o and value %x\n", &pnumber, pnumber);

    return 0;

}
