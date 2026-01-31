#include <stdio.h>
#include <string.h>

#define DEFAULT_CHAR_SIZE 100

typedef struct {

    unsigned int id;  // ID tecnicno
    char nome[DEFAULT_CHAR_SIZE];  // ID dominio
    char raca[DEFAULT_CHAR_SIZE];

} Animal;

typedef struct {

    unsigned int id; // ID tecnicno
    char nome[DEFAULT_CHAR_SIZE];
    char email[DEFAULT_CHAR_SIZE];
    long telefone; // ID dominio
    char nome_animal[DEFAULT_CHAR_SIZE];

} Cliente;

int main() {

    // Com cadastro via terminal

    Animal animal01 = {0,"Rex","Pencher"};
    Cliente cliente01 = {0,"Marcos","marcos@gmail.com",114959201};
    strncpy(cliente01.nome_animal,animal01.nome,sizeof(cliente01.nome_animal));


    printf("-- INFO CADASTRO --\n");
    printf("Nome: %s\nEmail: %s\nTelefone: %ld\nNome do seu animal: %s\n",cliente01.nome,cliente01.email,cliente01.telefone,cliente01.nome_animal);

    // Com cadastro via input

    Animal animal02;
    animal02.id = 1;
    Cliente cliente02;
    cliente02.id = 1;

    printf("Digite seu nome abaixo, para iniciar o cadastro: \n");
    printf(">>> ");
    scanf(" %200s",cliente02.nome);

    printf("Digite seus meios de contato na seguinte ordem \"email telefone\" abaixo: \n");
    printf(">>> ");
    scanf(" %200s %ld",cliente02.email,&cliente02.telefone);

    printf("Digite as informações para cadastro do seu animal na seguinte ordem \"nome do animal raça\" abaixo: \n");
    printf(">>> ");
    scanf(" %200s %200s",animal02.nome,animal02.raca);

    Cliente clientes[2];
    clientes[0] = cliente01;
    clientes[1] = cliente02;

    Animal animais[2];
    animais[0] = animal01;
    animais[1] = animal02;

    for (int i = 0; i < 2; i++) {

        if (clientes[i].nome_animal == animais[i].nome || clientes[i].id == animais[i].id) {

            printf("%s é dono do %s\n",clientes[i].nome, animais[i].nome);

        }

    }

    getchar();
    return 0;

}
