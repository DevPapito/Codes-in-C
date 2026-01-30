/*
* Esse programa é destinado a pegar n voltas de uma corrida e n competidores e realizar medias aritmeticas das suas voltas, permitindo ver a media de volta de cada piloto em um placar como ver qual foi o piloto com a media em menor tempo, sendo o ganhador
*/
#include <stdio.h>
#include <math.h>

short numero_jogador = 0;

float calcular_tempo_medio(float tempo_acumulado);
int buscar_jogador_menor_tempo(float tempo_jogador[]);

// Aprendizado nesse sistema NAO MISTURE NUNCA fgets com scanf, passivo sempre de overlay buffer
int main() {

    numero_jogador = 5;
    short volta_corrida = 3;
    float tempo_jogador = 0;

    char nome[100];
    char nomes_jogadores[5][100];
    float tempos_jogadores[5];

    for (int i = 0; i < numero_jogador; i++) {

        printf("Cadastre nome do competidor %d\n",i+1);
        printf(">>> ");
        scanf("%99s",nome); // formato scanf e facil de implementar, porem passivo de falha e overlay de buffer com \n
        //fgets(nome, sizeof(nome), stdin);

        for (int j = 0; j < 100; j++) {

            nomes_jogadores[i][j] = nome[j];

        }

        printf("Digite o tempo de uma volta do competidor %d\n",i+1);
        printf("Abaixo: \n");
        printf(">>> ");
        scanf("%f",&tempo_jogador);
        //fgets(tempo_jogador, sizeof(tempo_jogador), stdin);

        for (int j = 0; j < volta_corrida; j++) {

            tempo_jogador += tempo_jogador;

        }
        tempos_jogadores[i] = calcular_tempo_medio(tempo_jogador);

    }
    int jogador_mais_rapido = buscar_jogador_menor_tempo(tempos_jogadores);

    for (int i = 0; i < numero_jogador; i++) {

        printf("Nome competidor: %s\nSeu tempo médio: %.3f\n\n",nomes_jogadores[i],
                                      tempos_jogadores[i]);

    }
    printf("-- Jogador mais rápido --\nNome: %s\nTempo: %.3f\n",nomes_jogadores[jogador_mais_rapido],
                                                            tempos_jogadores[jogador_mais_rapido]);

    return 0;

}

float calcular_tempo_medio(float tempo) {

    return (tempo / numero_jogador);

}

int buscar_jogador_menor_tempo(float tempo[]) {

    float guardar = tempo[0];
    int index = 0;

    for (int i = 1; i < numero_jogador-1; i++)  {

        if (ceil(guardar) > ceil(tempo[i])) {

            index = i;
            guardar = tempo[i];

        }

    }

    return index;

}
