/*
* Programa que permite alteracao de um valor y por apartir de um ponteiro e amostragem do endereco e valor da variavel y, junto do valor de indirecao do ponteiro
*/
#include <stdio.h>

int     main(void)
{

    int y;
    int *py;

    y = 5;
    py = &y;

    //
    *py = 20;

    printf("Valor de y: %d\n", y);
    printf("Valor apontado por py: %d\n", *py);
    printf("Endereco de y: %p\n", (void*) &y);
    printf("Endereco de py: %p\n", (void*) &py);

    return 0;

}
