#include <stdio.h>
#include <math.h>

int main() {

	printf("raiz: %.1f",sqrt(64.0));
	printf("\nraiz com exp e log e readint: %.5f",exp(1/2*log(64.0)));
	printf("\n%.5f",sin(45*M_PI/180)+0.0001);
	printf("\npotencia com exp e log e formatar: %.2f",exp(3*log(8))+0.0001);
	printf("\npotencia com exp e log sem formatar: %f",exp(3*log(8))+0.0001);
	printf("\npotencia com operador ** e formatar: %.2f",pow(8,3));
	printf("\nraiz cubica: %.2f",exp(1/3*log(8)));
	printf("\nabsoluto: %.2f",fabs(-8));
	printf("\nabsoluto: %.2f",fabs(8));
	printf("\ncovertendo para inteiro 5.5: %d",(int)5.5);
	printf("\ncovertendo para inteiro 6.5: %d",(int)6.5);
	printf("\ncovertendo para inteiro 6.5+0.0001: %d",(int)(6.5+0.0001));
	printf("\ncovertendo para inteiro 5.51: %d",(int)5.51);
	printf("\ncovertendo para inteiro 5.45: %d",(int)5.45);
	printf("\ncovertendo para real 87: %.3f",(float)87);
	printf("\ncovertendo para int 3/4: %d\n",(int)3/4);

}
