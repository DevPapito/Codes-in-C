#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int counter = 0;

    do {

        printf("Countou %d\n",counter);
        counter++;

    }while(counter < 10);

    while(counter > 2) {

        printf("Decrement: %d\n",counter);
        counter--;

    }

    for (int i = 0; i < counter+1; i++) {

        printf("Indice: %d\n",i);

    }

    return EXIT_SUCCESS;

}
