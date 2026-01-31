#include <stdio.h>
#include <string.h>

#define DEFAULT_SIZE 150
#define CONS_SIZE 2

typedef struct {

    char title[DEFAULT_SIZE];
    char data[50];
    char description[300];

} Compromisso;

Compromisso agenda[CONS_SIZE];

int main() {

    for (int i = 0; i < CONS_SIZE; i++) {

        Compromisso compromisso;

        printf("Digite o titulo de compromisso: ");
        scanf(" %150s",compromisso.title);

        printf("Digite a data de compromisso: ");
        scanf(" %50s",compromisso.data);

        printf("Digite a descrição do compromisso abaixo:\n");
        //fgets(compromisso.description,sizeof(compromisso.description),stdin);
        scanf(" %s",compromisso.description);

        agenda[i] = compromisso;

    }

    for (int i = 0; i < CONS_SIZE; i++) {

        printf("%s %s \n\n%s\n",agenda[i].title,agenda[i].data,agenda[i].description);

    }

    return 0;

}
