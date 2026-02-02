#include <stdio.h>

int main()
{

    int pg = 120;
    float livro = 145.60;

    // & -> Operador de endereço
    // Seu objetivo é localizar enderecos de memoria de variaveis

    // No printf utilizamos o %p para ver os endereços
    printf("Valor de pg = %d\n",pg);
    printf("Endereço de pg = %p\n",&pg);
    printf("Valor de livro = %f\n",livro);
    printf("Endereço de livro = %p\n",&livro);

    return 0;

}
