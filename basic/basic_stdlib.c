#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    // EXIT_SUCCESS é um formato formal da lib stdlib.h para retornar 0 sucesso
    printf("Valor de sucesso: %d\n",EXIT_SUCCESS);

    // EXIT_FAILURE é um formato formal da lib stdlib.h para retornar 1 falha no processo
    printf("Valor de falha: %d\n",EXIT_FAILURE);

    return EXIT_SUCCESS;
    
}
