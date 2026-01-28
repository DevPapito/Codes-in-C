#include <stdio.h>
#include <string.h>

int main() {

	char *str; // Uma declaracao direta de ponteiro de caractere, aqui dizemos para o C/Compilador que esse espaco de memoria esta reservado ao characteres
	
	char vector[100]; // Declara um vector, porem apenas com espacos vazios C/Compilador 
	
	char name[] = "Pedro"; // Declara um vector, diretamente com seus espacos alocados em charcater
	
	// Para referencias de printagem nao declaramos & para apontar aos strings  
	printf("%s\n",name);

	printf("Digite seu nome: ");
	scanf("%s",str);
	printf("Seu nome: %s",str);

}
