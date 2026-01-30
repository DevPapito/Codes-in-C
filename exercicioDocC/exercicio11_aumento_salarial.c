/*
* Esse programa é destinado, ao calculo salarial em base do salario atual, permitindo a insersao via usuario, calculo automatico e retorno instantaneo do novo salario
*/

// Diretiva de pre-compilacao
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Definicao de prototipo de sub-rotina/funcao
float salary_choicer(float salary);
float salary_register();
float calc_salary_increse(float salary, float porcentage);

void show_new_salary_info(float new_salary);

int main(void) {

    float salary = salary_register();
    float new_salary = salary_choicer(salary);
    show_new_salary_info(new_salary);

    return EXIT_SUCCESS;

}

float salary_choicer(float salary) {

    float porcentage = 0;

    if (salary > 1300.00) {

        porcentage = 0.05;

    }else if (salary > 1100.00) {

        porcentage = 0.15;

    }else if (salary > 900.00) {

        porcentage = 0.25;

    }else if (salary > 700.00) {

        porcentage = 0.35;

    }else if (salary > 500.00) {

        porcentage = 0.45;

    }else {

        porcentage = 0.55;

    }

    return calc_salary_increse(salary, porcentage);

}

float salary_register() {

    float salary = 0;
    do {

        printf("Type value of your current salary: ");
        scanf(" %99f",&salary);

        if (salary <= 0) printf("Salary must should bigger whay zero!\n");

    }while(salary <= 0);

    return round(salary);

}

float calc_salary_increse(float salary, float porcentage) {

    return salary * (1 + porcentage / 100);

}

void show_new_salary_info(float new_salary) {

    printf("\n------------\n");
    printf("New Salary: $%.2f",new_salary);
    printf("\n------------\n");

}
