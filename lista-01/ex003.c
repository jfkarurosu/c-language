#include <stdio.h>

#define PI 3.14159

int main(){
    double raio, alt, areT, areC, areL, totV;

    scanf("%lf %lf",&raio, &alt);

    areC = PI*raio*raio;
    areL = 2*PI*raio*alt;
    areT = 2*areC + areL;
    totV = areT*100;

    printf("O VALOR DO CUSTO E = %.2lf\n",totV);

    return 0;
}