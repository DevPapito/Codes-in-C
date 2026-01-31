#include <stdio.h>

typedef struct {

    long long cep;
    int estado_civil;

} InformacaoPessoal;

typedef struct {

    int matricula;
    char nome[100];
    float nota01;
    float nota02;
    InformacaoPessoal informacao_pessoal;

} Aluno;

typedef struct {

    char nome[256];
    long long cpf;
    InformacaoPessoal informacao_pessoal;

} Cliente;

int main() {

    // O {} interno dos inicializadores Aluno e Cliente e o inicializador de InformacaoPessoal
    Aluno aluno = {1032,"Ricardinho",9.2,8.5,{20502401,0}};
    Cliente cliente = {"Cliente grandao legal!",942914915,{20502401,0}};

    printf("%d %s %f %f %lld %d\n",aluno.matricula,aluno.nome,aluno.nota01,aluno.nota02,
            aluno.informacao_pessoal.cep,aluno.informacao_pessoal.estado_civil);

    printf("%s %lld %lld %d\n",cliente.nome,cliente.cpf,
            cliente.informacao_pessoal.cep,cliente.informacao_pessoal.estado_civil);

    return 0;

}
