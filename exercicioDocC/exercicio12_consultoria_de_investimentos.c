/*
* Esse programa tem como o proposito o calculo do investimetno de clientes em base de tipo de investimento como no final a somatoria de todos os investimentos
*/

#include <stdio.h>
#include <math.h>

//int investements_codes[] = {1,2,3,4};
char investiments_names[4][150] = {
                                    {"Poupança"},
                                    {"Poupança plus"},
                                    {"Fundos de renda fixa"},
                                    {"Fundos de renda variável"}
                                };
int client_code = 1;


double investement_total;
double rendiment_total;

// Protitipo de sub-rotina/funcao
double choicer_investiment_type();

double registre_investement();
double calc_monthly_investement_of_rendiment(double investiment, float porcentage);

void sum_all_investement(double all_investement);
void sum_all_rendiment(double all_rendiment);

void show_investement(int type_code_invest, double investement, double rendiment);

int main(void) {

    do {

        double investement = registre_investement();
        double rendiment = choicer_investiment_type(investement);
        show_investement(client_code,investement,rendiment);

    }while(client_code > 0);
    printf("\n\nInvestement Total: %.2f\nRendiment Total: %.2f\n",investement_total, rendiment_total);

}

double choicer_investiment_type(double investement) {

    double rendiment;
    switch(client_code) {

        // 50 = 0.50 5 = 0.05  0.5 = 0.005
        case 1:
            rendiment = calc_monthly_investement_of_rendiment(investement,0.006);
            break;
        case 2:
            rendiment = calc_monthly_investement_of_rendiment(investement,0.011);
            break;
        case 3:
            rendiment = calc_monthly_investement_of_rendiment(investement,0.018);
            break;
        case 4:
            rendiment = calc_monthly_investement_of_rendiment(investement,0.025);
            break;
        default:
            break;

    }

    sum_all_rendiment(rendiment);
    sum_all_investement(investement);

    return rendiment;

}

double registre_investement() {

    double invest;
    printf("Type your investement: ");
    scanf(" %50lf",&invest);

    printf("Type code to investement type: ");
    scanf(" %50d",&client_code);

    return invest;

}

double calc_monthly_investement_of_rendiment(double investiment,float porcentage) {

    return (investiment * (1 + porcentage/100));

}

void show_investement(int client_code, double investement, double rendiment) {

    switch (client_code) {

        case 1:
            printf("\nInvestement: %s\n",investiments_names[0]);
            printf("Investiment: %.2lf\nRendiment: %.2lf\n",investement,rendiment);
            break;
        case 2:
            printf("\nInvestement: %s\n",investiments_names[1]);
            printf("Investiment: %.2lf\nRendiment: %.2lf\n",investement,rendiment);
            break;
        case 3:

            printf("\nInvestement: %s\n",investiments_names[2]);
            printf("Investiment: %.2lf\nRendiment: %.2lf\n",investement,rendiment);
            break;
        case 4:

            printf("\nInvestement: %s\n",investiments_names[3]);
            printf("Investiment: %.2lf\nRendiment: %.2lf\n",investement,rendiment);
            break;
        default:
            printf("Sem investimento finalizado!\n");

    }

}

void sum_all_rendiment(double rendiment) {

    rendiment_total += rendiment;

}

void sum_all_investement(double investement) {

    investement_total += investement;

}
