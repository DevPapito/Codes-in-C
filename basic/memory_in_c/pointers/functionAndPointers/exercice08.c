#include <stdio.h>
#include <math.h>

void calc_esfera(float r, float *area, float *volume);

int     main(void)
{
    float r;
    float area, volume;

    r = 3;

    calc_esfera(r, &area, &volume);

    printf("Area: %f\nVolume: %f\n", area, volume);

    return 0;

}

void calc_esfera(float r, float *area, float *volume)
{

    *area = round(4 * M_PI * pow(r,2));
    *volume = round((4 * M_PI * pow(r,3))/3);

}
