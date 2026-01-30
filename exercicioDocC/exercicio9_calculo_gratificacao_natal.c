#include <stdio.h>
#include <stdlib.h>

float hor_ex;
float hor_falt;

void registre_data_value();
float choicer_gratification(double sh,float gratification);
double calc_sh();
void show_info(float gratification);

int main(void) {

    float gratification;

    registre_data_value();
    double sh = calc_sh(hor_ex,hor_falt);

    gratification = choicer_gratification(sh,gratification);

    show_info(gratification);

    return EXIT_SUCCESS;

}

void show_info(float gratification) {

    printf("Tempo falta: %.1f\nTempo extra: %.1f\nValor de gratificação R$ %.2f\n",hor_falt,
                                                                                hor_ex,
                                                                                gratification);

}

float choicer_gratification(double sh, float gratification) {

    if (sh >= 2200) {

        gratification = 600.00;

    }else if (sh > 1700) {

        gratification = 500.00;

    }else if (sh > 1000) {

        gratification = 400.00;

    }else if (sh > 500) {

        gratification = 300.00;

    }else {

        gratification = 200.00;

    }

    return gratification;

}

double calc_sh() {

    return hor_ex-0.5*(hor_falt);

}

void registre_data_value() {

    do {

        printf("Digite as suas horas extras: ");
        scanf(" %10f",&hor_ex);
        printf("Digite as suas faltas: ");
        scanf(" %10f",&hor_falt);

    }while(hor_ex < 0 || hor_falt < 0);

}
