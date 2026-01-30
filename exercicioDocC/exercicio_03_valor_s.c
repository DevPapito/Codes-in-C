#include <stdio.h>
#include <math.h>

int main(void) {

    int input = 0;
    int fim,i,j,x,exp,num_ter,den,D,fat,S;
    num_ter = 3;
    x = 3;
    S = 0;
    D = 1;

    for (i = 1; i <= num_ter; i=i+1) {

        fim = D;
        fat = 1;
        for (j=1; j <= fim; j=j+1) {

            fat = fat * j;

        }
        exp = i+1;
        if (exp % 2 == 0) {

            S = S - (pow(3,exp))/fat;

        }else {

            S = S + (pow(3,exp))/fat;

        }
        if (D==4) {
            den = -1;
        }
        if (D==1) {
            den = 1;
        }
        if (den == 1) {

            D = D + 1;

        }else {
            D = D - 1;
        }
        printf("%d",S);
        scanf("%d",&input);

    }
    printf("%d",S);
    return 0;

}
