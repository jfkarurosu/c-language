// Cálculo da Área de um Triângulo
#include <stdio.h>
#include <math.h>

int main(){
    double t,l1,l2,l3,a;

    scanf("%lf %lf %lf",&l1,&l2,&l3);
    t = (l1+l2+l3)/2;
    a = sqrt(t*(t-l1)*(t-l2)*(t-l3));

    printf("A AREA DO TRIANGULO E = %.2lf\n",a);

    return 0;
}