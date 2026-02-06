/*
*   Um programa que permite entender o basico de ponteiros
*   e ver como é o comportamento do operador de indireção = * e operador de endereço = &
*/
#include <stdio.h>

int main()
{

    float soma = 10; // Alocando um espaço e estrutura de tipo no endereço de memoria na stack
    float *ponteiro; // Alocando um espaço e estruutra de tipo no endereço da memoria na stack

    ponteiro = &soma; // Agora a variavel ponteiro esta apontando ao endereco de memoria de soma

    // Podemos verificar isso analisando o valor de soma e seu respectivo endereco

    printf("Valor da variável soma: %f\n",soma); // Retorna o valor armazenado no endereço da variável
    printf("Endereço da variável soma: %p\n",&soma); // Retorna o endereço da variável
    printf("Valor da variável ponteiro: %f\n",*ponteiro); // Retorna o valor armazenado no endereço apontado a variavel de ponteiro
    printf("Endereço da variável ponteiro: %p\n",&ponteiro); // Retorna o enderço da variável de ponteiro
    printf("Endereço de apontamento da variável ponteiro: %p\n",ponteiro); // Retorna o endereço da variavel apontada pelo ponteiro

    // <tipo> *<variavel> define aquela variavel como um ponteiro
    // &<variavel> retorna o endereco de memoria da variavel visto por %p
    // *<variavel> retorna o valor internizado/indirecionado armazenado ao apontamento da memoria da variavel de ponteiro
    // <variavel_ponteiro> // retorna o valor de ponteiro, pois ponteiros armazenam no seu escopo origial o ponteiro

    return 0;

}
