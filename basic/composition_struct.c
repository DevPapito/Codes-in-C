#include <stdio.h>

typedef struct {

    int x;
    int y;

} Ponto;

typedef struct {

    Ponto p1;
    Ponto p2;
    Ponto p3;

} Triangulo;

int main() {

    Triangulo triangulo;

    // Ponto 1
    triangulo.p1.x = 10;
    triangulo.p1.y = 10;

    triangulo.p2.x = 20;
    triangulo.p2.y = 50;

    triangulo.p3.x = 65;
    triangulo.p3.y = 10;

    printf("Triangulo: (%d %d), (%d %d), (%d %d)",triangulo.p1.x,triangulo.p1.y,
                                                triangulo.p2.x,triangulo.p2.y,
                                                triangulo.p3.x,triangulo.p3.y);
    return 0;

}
