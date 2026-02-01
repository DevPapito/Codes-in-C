/*
* Um sistema que simula o funcionamento de sistema de dicionario, em base de pesquisa
O sistema permite uma pesquisa apartir da palavra-chave/parte da palavra
*/
#include <stdio.h>
#include <string.h>

#define SIZE 20

typedef struct
{
    char    word[50];
    char    description[120];

} DicionaryWord;


DicionaryWord dicionary[SIZE];

int     registre_dicionary(char word[], char description[]);
DicionaryWord    search_word(char word[]);

int     main()
{

    registre_dicionary("Batata","Alimento, vegetal, fruto da natureza");
    DicionaryWord word = search_word("Batata");
    printf(" %s\n%s",word.word,word.description);


}

int     registre_dicionary(char word[], char description[])
{

    for (int i = 0; i < SIZE; i++)
    {

        if (strcmp(dicionary[i].word, word) == 0) continue;

        strncpy(dicionary[i].word,word,sizeof(dicionary[i].word));
        strncpy(dicionary[i].description,description,sizeof(dicionary[i].description));

        return 0;

    }

    return 1;

}

DicionaryWord search_word(char word[])
{

    for (int i = 0; i < SIZE; i++)
    {

        if (strcmp(dicionary[i].word, word) != 0) continue;

        return dicionary[i];

    }

    DicionaryWord dc;
    return dc;

}
