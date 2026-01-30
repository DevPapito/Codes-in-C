/*
* Um programa destinado a produzir a media aritmetica de nota de n juizes, aonde a nota mais baixa e nota mais alta sao descartados
*/

#include <stdio.h>
#include <math.h>

float nota_baixa;
float nota_alta;
int juiz = 6;

void selecionar_baixa_alta_nota(float nota_anterior, float nota_atual);
float incremento_nota(float nota_anterior, float nota);
double media_nota(float nota_somada);

float input_nota(float nota, int index) {

    printf("Digite a nota do juiz: %d\n",index);
    printf(">>> ");
    scanf(" %4f",&nota); // Passivo de falha de conversao | problema de \n resolvido
    return nota;

}

int main() {

    float nota_atual;
    float nota_anterior;
    float nota_somada;

    do {

        nota_atual = input_nota(nota_atual,1);
        if (nota_atual < 0 || nota_atual > 10) printf("\nSomente notas válidas entre zero e dez!\n");

    }while(nota_atual < 0 || nota_atual > 10);

    nota_baixa = nota_atual;
    //nota_alta = nota_atual;
    nota_anterior = nota_atual;

    selecionar_baixa_alta_nota(nota_anterior, nota_atual);

    for (int i = 1; i < juiz; i++) {

        do {
            nota_atual = input_nota(nota_atual,i+1);
            if (nota_atual < 0 || nota_atual > 10) printf("\nSomente notas válidas entre zero e dez!\n");

        }while(nota_atual < 0 || nota_atual > 10);

        selecionar_baixa_alta_nota(nota_anterior, nota_atual);

        nota_somada = incremento_nota(nota_anterior, nota_atual);

        nota_anterior = nota_atual;

    }
    printf("\n-- TABELA FINAL --\n");
    printf("Media das notas: %f\nNota mais alta: %f\nNota mais baixa: %f\n",ceil(media_nota(nota_somada)),
                                                        nota_alta,
                                                        nota_baixa);

    return 0;
}

void selecionar_baixa_alta_nota(float nota_anterior, float nota) {

    if (nota > nota_anterior) {

        nota_alta = nota;

        // somente usar sinal <
        //if (nota_anterior < nota_baixa) nota_baixa = nota_anterior;

    }else {

        nota_baixa = nota;

        //if (nota_anterior > nota_alta) nota_alta = nota_anterior;

    }

    return ;

}

float incremento_nota(float nota_anterior, float nota) {

    return nota = nota+nota_anterior;

}

double media_nota(float nota_somada) {

    return nota_somada / juiz;

}
