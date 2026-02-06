#include <stdio.h>

double area_retangulo(double lado, double altura)
{

    return (lado*altura);

}

int     main(void)
{

    double altura;
    double largura;
    double area;

    altura = 32.2;
    largura = 32.1;

    area = area_retangulo(altura, largura);

    printf("Altura: %lf\nLargura: %lf\nArea: %lf\n", altura, largura, area);

    return 0;

}
