#include <stdio.h>

void calculadora(float c, float d, float *s, float *p);

int     main(void)
{

    float c,d;
    float s,p;

    c = 2.5;
    d = 3.9;

    calculadora(c, d, &s, &p);
    printf(" %f %f\n", s, p);

    return 0;

}

void calculadora(float c, float d, float *s, float *p)
{

    *s = (c+d);
    *p = (c*d);

}
