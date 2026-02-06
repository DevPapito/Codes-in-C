/*
*   Programa que permite o entendimento das diferecas de variaveis entre funcoes
*/
#include <stdio.h>


/*
O metodo consegue realizar a mostragem normalmente pois cada funcao possue sua stack de execucao,
fazendo assim variaveis de mesmo nome conseguirem se comunicar

Seria algo como da seguinte forma

O que nos vemos:

palavra[] = palavra[]

O que o C ve

0xaaf10c = 0xfffga23B


*/
void    mostrar_palavra(char palavra[])  // string parametro com nome palavra igualmente a main
{

    printf(" %s", palavra);

}

void    realizar_conta(int h, int f)
{

    printf("%d",(a+b));

}

int     main(void)
{

    char palavra[150]; // string com nome palavra
    mostrar_palavra(palavra);

    int a = 10;
    int b = 20;
    realizar_conta(a,b); // ira compilar da mesma forma

    return 0;

}
