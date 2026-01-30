/*
* Um programa que se basea em calculo de valor base e valor mensal para produtos de um supermercado
* Sua base e receber valor de preco mensal e preco atual, assim calculando em base das Regras de Negocio do super mercado
*/

#include <stdio.h>

double porcentagem = 0.0;

double calculo_de_porcentagem(double valor, double taxa);
double diminuicao_do_valor(double valor);
double aumento_do_valor(double valor);

int main() {

    int quantidade_venda_mensal;
    double preco_atual;
    double novo_valor;

    printf("Digite a quantidade de vendas mensais: ");
    scanf("%d",&quantidade_venda_mensal);

    printf("Digite o preco atual: ");
    scanf("%lf",&preco_atual);

    if (quantidade_venda_mensal < 500 && preco_atual < 30.00) {

        printf("Bateu em aumento! de 10 \n");
        porcentagem = calculo_de_porcentagem(preco_atual,0.10);
        novo_valor = aumento_do_valor(preco_atual);

    }else if ((quantidade_venda_mensal > 500 && quantidade_venda_mensal < 1200) && preco_atual > 30.00 || preco_atual < 80.00) {

        printf("Bateu em aumento! de 15 \n");
        porcentagem = calculo_de_porcentagem(preco_atual,0.15);
        novo_valor = aumento_do_valor(preco_atual);

    }else {

        printf("Bateu em diminucao! de 20 \n");
        porcentagem = calculo_de_porcentagem(preco_atual,0.20);
        novo_valor = diminuicao_do_valor(preco_atual);

    }

    printf("Novo valor em base de quantidade mensal %d e de preco atual %.2lf\nNovo valor: %.2lf\n",quantidade_venda_mensal,preco_atual,novo_valor);

    return 0;

}

double diminuicao_do_valor(double valor) {

    return (valor * (1-porcentagem));

}

double aumento_do_valor(double valor) {

    return (valor * (1+porcentagem));

}

double calculo_de_porcentagem(double valor, double taxa) {

    return (valor * (taxa / 100));

}
