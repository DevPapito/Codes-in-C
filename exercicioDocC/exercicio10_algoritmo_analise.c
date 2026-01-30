#include <stdio.h>
#include <math.h>

int main(void) {

    double fat,E;
    int i,j,n;

    n = 4;
    for (i = 1; i <= n; i++) {

        fat = 1;
        for (j = 1; j <= n; j++) {

            fat=fat * j;

        }
        E=E+(1/fat);

    }
    printf("O valor da variável E é %lf ", ceil(E));

    return 0;

}
