#include <stdio.h>
#include <string.h>

typedef struct {

    int memoria;
    char modelo[50]; // Identificador de dominio
    char nome[150];
    int botoes;

} Celular;

int main() {


    char local[50];
    // Inicializador/Construtor
    Celular celular = {4};
    // Via campo direto para strings

    //celular.modelo = "EA-F1-A";
    strncpy(celular.modelo, "EA-F1-A",sizeof(celular.modelo));

    //local = "Local"; NAO E POSSIVEL POIS E NECESSARIO DECLARAR O VETOR INTEIRO
    strncpy(local,celular.modelo,sizeof(local));

    printf("%s",local);

    // Para input em struct

    scanf(" %s %d",celular.nome,&celular.botoes);
    printf("%dg %s %s",celular.memoria,celular.nome,celular.modelo);

    return 0;

}
