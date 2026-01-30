#include <stdio.h>

int quantidade_juiz = 6;

float input_nota(float nota, int index) {

    do {

        printf("Digite a nota do juiz %d abaixo:\n",index);
        printf(">>> ");
        scanf(" %4f",&nota);

    }while(nota < 0 || nota > 10);

    return nota;

}

int main() {

    float notas[quantidade_juiz];
    float nota_atual;

    for (int i = 0; i < quantidade_juiz; i++) {

        nota_atual = input_nota(nota_atual,i+1);
        printf("%.3f",nota_atual);

    }

}
