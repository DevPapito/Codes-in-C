#include <stdio.h> // #include e #define sao pre carregamentos de arquivos externos, pre carregados na memoria
/*
Permitindo o uso das fucoes e regitros antecipadamente
*/

char hi[] = "Hello"; // Uma variavel global, seu escopo e basicamente em todo o programa
/*
Onde todas as functions e a main podem ver essa variavel, carrega no corpo de compilacao e nao depende de uma fuction
ser carregada na stack memory para assim carregar as suas variaveis, totalmente idepentente
*/
void hello(); // Define prototipo de pre sub-rotina/function
/*
Permiti entao, carregar a function de pre sub-rotina/fucao na memoria, podendo escrever seu codigo
apos a estrutura do main, como e pre carregada antes do main
*/

int main() {

    hello();

}

void hello() {

    printf("%s",hi);

}
