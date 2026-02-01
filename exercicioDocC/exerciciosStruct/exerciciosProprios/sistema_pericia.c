/*
* Programa que permite realizar pericia para Policia Federal a casos de explosoes de caixas bancarios, permitindo cadastro e analise dos pontos feridos de cada caixa
*/
#include <stdio.h>
#include <string.h>

typedef     struct
{

    float   right_size;
    float   left_size;


} BodyATM;

typedef     struct
{

    float   monitor;
    float   keyboard;
    float   cam;

} HeadATM;

typedef     struct
{

    float   money;
    float   notes_receb;

} DeposityCash;

typedef     struct
{

    unsigned int    id;
    char code_family[5];
    HeadATM     head;
    BodyATM     body;
    DeposityCash    deposity_cash;

} ATM;

ATM db_atm[2];

int     registre_ATM(ATM atm);

void    expertise(int id);

int     main()
{
    ATM atm;

    // HEAD
    atm.id = 1;
    strncpy(atm.code_family,"AB-43",sizeof(atm.code_family));
    atm.head.monitor = 0.10;
    atm.head.keyboard = 0.05;
    atm.head.cam = 0.01;

    atm.body.right_size = 0.30;
    atm.body.left_size = 0.10;

    atm.deposity_cash.money = 25010.90;
    atm.deposity_cash.notes_receb = 0.2;

    registre_ATM(atm);
    expertise(atm.id);

    return 0;

}

int     registre_ATM(ATM atm)
{

    for (int i = 0; i < 2; i++)
    {

        if (strcmp(db_atm[i].code_family,atm.code_family)) continue;

        db_atm[i] = atm;
        return 0;

    }

    return 1;

}

void    expertise(int id)
{

   ATM atm;
   for (int i = 0; i < 2; i++)

    {

        if (db_atm[i].id == id)
        {

            atm = db_atm[i];
            break;

        }

    }

    // calc head

    float damage_head = (atm.head.cam+atm.head.keyboard+atm.head.monitor);
    float damage_body = (atm.body.right_size+atm.body.left_size);
    float damage_deposity = (atm.deposity_cash.money+atm.deposity_cash.notes_receb);

    float damage_total = (damage_head+damage_body+damage_deposity);

    double porcentage = (3 * (damage_total/100));

    printf("Analiy ATM %s\n",atm.code_family);

    printf("Porcentage damage: %.2lf\n",(porcentage*100));

}
