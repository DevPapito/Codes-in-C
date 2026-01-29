#include <stdio.h>

int main(void) {

	// Tipos primitivos

	signed char var0; // Aproximadamente 8 bits | -128 a 127
	printf("%c",var0);

	unsigned char var1; // Aproximadamente 8 bits | 0 a 255
	printf("%c",var1); 

	// 8 * s = 8 bits, notacao e dessa maneira por conta que um int tem o minimo de 8 bits mas podendo chegar mais valores   
	// int >= 8
	signed int var2; // 8 * s | -2^8s-1 a +2^8s-1
	printf("%d",var2);

	unsigned int var3; // 8 * s | 2^8s-1
	printf("%d",var3);

	// Numero flutantes

	float var4; // 32 bits Numero de graus na areia 
	printf("%f",var4);

	double var5; // 64 bits Numero de atomos no universo visivel
	printf("%lf",var5);

	// void Tipo base primitivo

	// Tipos de representacoes de armazenamento

	long double var6; // 80 bits long double > double
	printf("%Lf",var6);

	long long var7; // 64 bits long long > long
	printf("%lld",var7);

	signed short int var8; // geralmente >= 16 bits | -32.768 a +32.767
	printf("%hd",var8);
	
	unsigned short int var9; // geralmente >= 16 bits | 0 65.535
	printf("%hu",var9);

	signed long int var10; // geralmente >= 32 bits | -2.147.483.648 a +2.147.483.647
	printf("%ld",var10);

	return 0;

}
