#include <stdio.h>
#include <string.h>

#define DEFAULT_SIZE 150
#define DB_SIZE 20

int runtime = 1; // TRUE

typedef struct {

    unsigned int id;

    char nome[DEFAULT_SIZE];
    char data_lancamento[DEFAULT_SIZE];
    char diretor[DEFAULT_SIZE];
    char tematica[DEFAULT_SIZE];

} Filme;


Filme db_moves[DB_SIZE];

int create_move(Filme filme);
Filme read_move(char search[]);

int main() {

    short mode = 0;
    short confirm = 0;
    char search[DEFAULT_SIZE];
    do {

        printf("1 registre move | 2 view a move | 3 exit\n");
        printf("$moves>");
        scanf(" %hd",&mode);

        switch(mode) {

            case 1:

                Filme filme;

                printf("Type move name: ");
                scanf(" %s",filme.nome);

                printf("Type launche date of move: ");
                scanf(" %s",filme.data_lancamento);

                printf("Type director of move: ");
                scanf(" %s",filme.diretor);

                printf("Type tematic of move: ");
                scanf(" %s",filme.tematica);

                printf("Tem certeza que deseja criar o filme? 0 para sim | 1 para nao: ");
                scanf(" %hd",&confirm);

                if (confirm == 1) break;

                if(create_move(filme) != 0) {

                    printf("Não foi possivel criar o filme! Pois o mesmo já está cadastrado!\n");

                }else {

                    printf("Filme %s registado com sucesso!\n",filme.nome);

                }

                break;

            case 2:

                printf("Search name of move in searchbar: \n");
                printf("===========\n");
                printf("Search here: ");
                scanf(" %200s",search);
                printf("===========\n");

                Filme local_filme = read_move(search);

                if (strcmp(local_filme.nome,search) != 0) {

                    printf("Não foi possivel encontrar o filme!\n");

                }else {


                    printf("Nome: %s\nData lançamento: %s\nDiretor: %s\nTematica: %s\n",local_filme.nome,
                                                                            local_filme.data_lancamento,
                                                                            local_filme.diretor,
                                                                            local_filme.tematica);
                }

                break;

            case 3:
                runtime = 0;

        }

    } while(runtime);

    return 0;

}

int create_move(Filme filme) {

    for (int i = 0; i < DB_SIZE; i++) {

        if(sizeof(db_moves[i].nome) == 0) continue;

        filme.id = i;

        db_moves[i] = filme;
        return 0;

    }

    return 1;

}

Filme read_move(char search[]) {

    for (int i = 0; i < DB_SIZE; i++) {

        if (strcmp(search, db_moves[i].nome) != 0) {
            Filme f;
            return f;

        } else {

            return db_moves[i];

        }

    }


}
