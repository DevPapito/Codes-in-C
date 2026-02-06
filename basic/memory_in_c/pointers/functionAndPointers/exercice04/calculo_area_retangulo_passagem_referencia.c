#include <stdio.h>

void area_retangulo(double largura, double altura, double *area)
{

    *area = (largura*altura);

}

int     main(void)
{

    double largura;
    double altura;
    double area;

    largura = 32.1;
    altura = 32.2

    area_retangulo(largura, altura, &area);

    printf("Altura: %lf\nLargura: %lf\nArea: %lf\n", altura,largura, area);

    return 0;

}
