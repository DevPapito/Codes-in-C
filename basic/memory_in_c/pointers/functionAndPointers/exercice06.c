#include <stdio.h>
#include <math.h>

void    movimento(float s0, float v0, float a, float t, float *s, float *v);

int     main(void)
{

    float s0,v0,a,t;
    float s,v;

    s0 = 3.0f;
    v0 = 10.0f;
    a = 5.0f;
    t = 3.0f;

    movimento(s0, v0, a, t, &s, &v);

    printf("%f %f\n", s, v);

    return 0;

}

void movimento(float s0, float v0, float a, float t, float *s, float *v)
{

    // s
    *s = (s0 + v0 * t+(a * pow(t,2))/2);

    // v
    *v = (v0 + a * t);

}
