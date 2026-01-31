#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_SIZE 100
#define DB_SIZE 5


typedef struct {

    unsigned int id;
    char name[DEFAULT_SIZE];
    char autor[DEFAULT_SIZE];
    char genero[DEFAULT_SIZE];
    double price;

} Book;

Book db_books[DB_SIZE];

int create_book(Book book);

int main() {

    char names[DB_SIZE][DEFAULT_SIZE] = {
                                            {"Programas em C"},
                                            {"Programas em Java"},
                                            {"Programas em Dart"},
                                            {"Programas Kotlen"},
                                            {"Programas em C++"}
                                        };

    for (int i = 0; i < DB_SIZE; i++) {

        Book book = {i};
        strncpy(book.autor,"Alfredo",sizeof(book.autor));
        strncpy(book.genero,"Aventura",sizeof(book.genero));
        book.price = 5.2;

        strncpy(book.name,names[i],sizeof(book.name));

        db_books[i] = book;

    }

    for (int i = 0; i < DB_SIZE; i++) {

        printf("Nome: %s\n",db_books[i].name);

    }

    return EXIT_SUCCESS;

}

