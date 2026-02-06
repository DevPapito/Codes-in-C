#include <stdio.h>

// Funcao passada sem esperada de atualizacao fora do seu escopo
// Chamamos de passagem por valor, alem que o seu retorno e unico
// Logo toda funcao que se besea por passagem por valor deve retornar
// um unico return em C

void    show_message_string(char message[])
{

    printf("%s\n", message);

}

int     increment(int value)
{
    return value++;
}

// Funcao de passagem de referencia, usada quando queremos retornar mais de um valor dentro de uma funcao. Alem de ser mais rapida que um return dentro de variavis

void    calculadora(int a, int b, int *ptr1, int *ptr2)
{

    *ptr1 = (a+b);
    *ptr2 = (a-b);

}

int     main(void)
{

    // Funcoes baseadas na tecnica de passagem por valor

    show_message_string("Hi");
    int index;
    index = 0;
    index = increment(index);

    // Funcoes baseadas na tecnica de referencia

    int soma;
    int sub;

    // *ptr1 = &soma and *ptr2 = &sub
    calculadora(10, 20, &soma, &sub);

    printf("$%d + %d = %d\n",10,20,soma);
    printf("$%d - %d = %d\n",10,20,sub);

    return 0;

}
