/*
* Um programa que realiza a soma de duas variaveis apartir inteiramente de ponteiros
*/
#include <stdio.h>

int main(void)
{

    int a;
    int b;
    int soma;
    int *pa;
    int *pb;
    int *ps;

    a = 3;
    b = 7;

    pa = &a;
    pb = &b;
    ps = &soma;

    *ps = (*pa+*pb);

    printf("Valor de soma: %d\n", soma);
    printf("Endereco de soma: %p\n", (void*)&soma);
    printf("Endereco de ps: %p\n", (void*)ps);
    printf("Endereco de origem ps: %p\n", (void*)&ps);


    return 0;

}
