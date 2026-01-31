#include <stdio.h>
#include <math.h>

#define QUANTI_ITEM 1

typedef struct {

    int valor;

} Item;

typedef struct {

    Item itens[QUANTI_ITEM];

} Caixa;


int main() {

    // Inicializacao

    // Nao sei inicializar campos de itens de forma direta
    //Item itens[] = {10,"Batata"};
    Caixa caixa;
    caixa.itens[0].valor = 10;

    return 0;

}
