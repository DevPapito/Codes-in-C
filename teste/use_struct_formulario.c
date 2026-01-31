/*
* Programa de formulario aonde recebemos o cpf em int, email, nickname, ano de nascimento e senha
*/
#include <stdio.h>
#include <string.h>

//#define SIZE_STRING 150;

typedef struct {

    long long cpf; // Identificador unico de dominio
    int id;  // Identificador unico tecnico
    int ano_nascimento;
    char email[150];
    char nickname[150];

} User;

int main() {

    User user01;

    user01.cpf = 70323012159;
    user01.id = 0;
    user01.ano_nascimento = 2007;
    strncpy(user01.email,"pietroeziosuzano@gmail.com",sizeof(user01.email)); // Inserão de string, vindo da lib string.h
    strncpy(user01.nickname,"Pietro Ezio",sizeof(user01.nickname));

    printf("%lld %d %d %s %s",user01.cpf,user01.id,user01.ano_nascimento,user01.email,user01.nickname);

    return 0;

}
