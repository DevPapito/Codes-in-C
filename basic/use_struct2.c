#include <stdio.h>
#include <string.h>

typedef struct {

    long codigo;
    char nome[100];
    float preco;

} Pessoa;

int main() {

    Pessoa pessoa;

    scanf("%ld %s %f",&pessoa.codigo,pessoa.nome,&pessoa.preco);

    printf("%ld %s %5.2f",pessoa.codigo,pessoa.nome,pessoa.preco);

    getchar();
    return 0;

}
