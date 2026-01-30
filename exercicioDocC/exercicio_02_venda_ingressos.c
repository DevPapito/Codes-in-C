/*
* Sistema que permite o calculo de lucro maximo em base de lucro liquido de venda de ingressos
*/
#include <stdio.h>

int lucromax = 0;
int ingressosmax = 0;
int precomax = 0;

int despesas = 200;

int lucro_liquido(int ingressos,double preco);
int locacao_ingressos(int ingressos);
double desvaloriza_preco(double preco);
void mostrar_lucro_max();

int main(void) {

    double preco = 5;
    int ingressos = 120;
    int lucro = 0;

    while(preco > 1) {

        lucro = lucro_liquido(ingressos,preco);

        printf("LUCRO: %d | PREÇO: %lf\n",lucro,preco);

        if (lucro >= lucromax) {

            lucromax = lucro;
            precomax = preco;
            ingressosmax = ingressos;

        }

        ingressos = locacao_ingressos(ingressos);
        preco = desvaloriza_preco(preco);

    }

    mostrar_lucro_max();
    return 0;

}

int lucro_liquido(int ingressos, double preco) {

    return ((ingressos*preco)-despesas);

}

int locacao_ingressos(int ingressos) {

    return (ingressos + 26);

}

double desvaloriza_preco(double preco) {

    return (preco - 0.5);

}

void mostrar_lucro_max() {

    printf("LUCROMAX: %d\nINGRESSOMAX: %d\nPRECOMAX: %d\n",lucromax,ingressosmax,precomax);

}
