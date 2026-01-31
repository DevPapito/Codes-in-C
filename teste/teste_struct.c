#include <stdio.h>

typedef struct {

    unsigned int ID;
    char CPF[16];

} pessoa;

int main() {

    // Convencional na comunidade em C struct em PascalCase | CamelCase

    //Pessoa pessoa_local;
    //Pessoa pessoa_instancia;

    // Projeto raiz Kernel Linux usa tudo em snake_case

    pessoa pessoa_instancia;

    return 0;

}
