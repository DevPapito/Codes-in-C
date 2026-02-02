/*
*   Entendendo as propriedades de ponteiro e memoria em C e computadores
*/
#include <stdio.h>

int elemento; // Variaveis de escopo global/static sempre sao zeradas pelo C

int main()
{

    int conta; // Sempre evitar de utilizar variaveis apenas inicalizadas
    // Desconmentar comentario abaixo
    //conta = 752.20;
    printf("O valor da contado mês é %hd\n",conta+10+elemento);
    printf("O valor do elemento é %d\n",elemento+10);

    return 0;

}
