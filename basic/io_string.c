#include <stdio.h>

int main() {

    char nome[50];
    // Formato de leitura que nao considera espacos, nao otimizado
    //scanf("%s",nome); // Nunca usamos & pois string se tem multiplos pontos de endereco

    //scanf("%20s",nome); // Formato de scanf otimizado com limite de cabecalho para buffer
                        // Caso o cabecalho passe do limite nao a risco de OutErrorOfMemoryLeak

    fgets(nome,sizeof(nome), stdin); // Metodo recomendado, permiti leitura de espacos e otimizado
    printf("%s",nome);

}
