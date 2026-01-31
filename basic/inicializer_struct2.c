#include <stdio.h>

typedef struct {

   char nome[150];
   int idade;
   float peso;

} Pessoa;

int main() {

    // Inicializador/Construtor
    Pessoa pessoa01 = {"Pietor Ezio",19,49.5};
    printf("Nome: %s Idade: %d Peso: %f",pessoa01.nome,pessoa01.idade,pessoa01.peso);

    return 0;

}
