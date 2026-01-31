#include <stdio.h>
#include <string.h>

typedef struct {

    int matricula;
    char nome[100];
    float nota01;
    float nota02;

} Aluno;

int main() {

    Aluno aluno;
    aluno.matricula = 105421;
    strncpy(aluno.nome, "Maria Bonita",sizeof(aluno.nome));
    aluno.nota01 = 0.352;
    aluno.nota02 = 123.42;

    printf("\n%d %s %1.2f %1.2f",aluno.matricula,aluno.nome,aluno.nota01,aluno.nota02);

    getchar();

    return 0;

}
