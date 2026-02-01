/*
* Um programa que permite cadastro e listagem em base de topicos genero e nota de Filmes
*/
#include <stdio.h>
#include <string.h>

#define DEFAULT_SIZE 150
#define DB_SIZE 25

typedef     struct
{

    char    nome[DEFAULT_SIZE];
    float   nota;
    char    categoria[DEFAULT_SIZE];

} Filme;

Filme   db_filmes[DB_SIZE];
Filme    lista_filmes[DB_SIZE];

int     cadastro_filme(Filme filme);
void   listagem(float nota, char genero[]);

int     main()
{

    char    categoria_local[] = "terror";
    Filme   filme;

    if (strcmp(categoria_local, "terror") == 0)
    {

        strncpy(filme.categoria, "terror", sizeof(filme.categoria));
        strncpy(filme.nome, "Assasinato louco 3", sizeof(filme.nome));
        filme.nota = 5.3;


    }else if (strcmp(categoria_local, "acao") == 0)
    {

        strncpy(filme.categoria, "acao", sizeof(filme.categoria));
        strncpy(filme.nome, "Corridas e Carro Bravos 23", sizeof(filme.nome));
        filme.nota = 9.6;

    }


    if(cadastro_filme(filme) != 0)
        printf("Nao Cadastrado!");
    else
        printf("Cadastado!");

    listagem(0,categoria_local);

}

int     cadastro_filme(Filme filme)
{

    for (int j = 0; j < DB_SIZE; j++)
    {

        if (strcmp(db_filmes[j].nome, filme.nome) == 0) continue;

        db_filmes[j] = filme;

        return 0;

    }


    return 1;

}

void    listagem(float nota, char genero[]) {


    for (int i = 0; i < DB_SIZE; i++)
    {

        if (db_filmes[i].nota == nota || strcmp(db_filmes[i].categoria, genero) == 0)
        {

            lista_filmes[i] = db_filmes[i];

        }

    }

    for (int i = 0; i < DB_SIZE; i++)
    {

        if (lista_filmes[i].nota < 1) continue;

        printf("Nome: %s\nCategoria: %s\nNota: %2.2f\n",lista_filmes[i].nome,
                                                    lista_filmes[i].categoria,
                                                    lista_filmes[i].nota);

    }

}
