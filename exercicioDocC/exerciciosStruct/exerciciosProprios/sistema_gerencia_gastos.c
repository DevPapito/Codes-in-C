/*
* Um sistema que permite o gerenciamento de gastos baseado em categoria
* emitindo apos no final um relatorio dos gastos
*
*/
#include<stdio.h>

typedef struct
{

    float   imposto_geral;
    float   imposto_br;

} Texes;

typedef struct
{

    float   conta_agua;
    float   conta_luz;
    float   conta_energia;
    float   aluguel;

} Homing;

typedef struct
{

   float    cafe_manha;
   float    almoco;
   float    janta;

} Fooding;

typedef struct
{
   Texes    texe;
   Homing   home;
   Fooding  food;

} User;

void relatorio(User user);

int main()
{

    User user = {
                    {0.10, 0.20}, // Texas
                    {15.5, 20.1, 30.2, 300.50}, // Homming
                    {12.1, 64.21, 56.2} // Fooding
                };

    relatorio(user);

    return 0;
}

void relatorio(User user)
{

    printf("-- Impostos gerais --\nImposto Internaciona: $%5.3f\nImposto nacional: $%5.3f\n----\n",
                                                                    user.texe.imposto_geral,
                                                                    user.texe.imposto_br);

    printf("-- Impostos moradias --\nImposto da agua: $%5.3f\nImposto da energia: $%5.3f\nAlugel: $%5.3f\n----\n",user.home.conta_agua,
                                    user.home.conta_luz,
                                    user.home.aluguel);

    printf("-- Gastos alimentacao --\nCafe da manha: $%5.2f\nAlmoco: $%5.2f\nJanta: $%5.2f\n----\n",
                                                                    user.food.cafe_manha,
                                                                    user.food.almoco,
                                                                    user.food.janta);
    float impostos = (user.texe.imposto_geral+user.texe.imposto_br);
    float moradia = (user.home.conta_agua+user.home.conta_energia+user.home.conta_luz+user.home.aluguel);
    float alimentacao = (user.food.cafe_manha+user.food.almoco+user.food.janta);

    float total = (moradia+alimentacao * impostos);

    printf("Gastos totais: $%2.2f",total);

}
