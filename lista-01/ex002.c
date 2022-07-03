#include <stdio.h>

int main(){
    double fah, pol, cel, mm;

    scanf("%lf %lf", &fah, &pol);

    cel = (5*(fah-32))/9;
    mm = pol*25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n",cel);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n",mm);


    return 0;
}