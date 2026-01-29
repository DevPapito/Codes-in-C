#include <stdio.h>
#include <stdlib.h>

int main(void) {

    signed short int value01, value02;

    printf("Digite um numero: ");
    scanf("%hd",&value01);

    printf("Digite outro numero: ");
    scanf("%hd",&value02);

    // simple condition/Decisao simples

    if (value01 <= 0 && value02 <= 0) return EXIT_FAILURE;

    // compost condition/Decisao composta

    if (value01 > value02) {

        printf("Valor %d é maior que valor %d\n",value01,value02);

    } else if (value01 == value02) {


        printf("Valor %d é igual a valor %d\n",value01,value02);

    } else {

        printf("Valor %d é menor que valor %d\n",value01,value02);

    }

    switch(value01) {

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Valor %d é tamanho decimal!\n",value01);
            break;
        default:
            printf("Valor %d é maior que 9\n",value01);

    }

    printf("Sistema finalizado corretamente!\n");

	return EXIT_SUCCESS;

}
