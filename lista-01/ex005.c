#include <stdio.h>
#include <math.h>

int main(){
    double h,a,vol,areB;

    scanf("%lf %lf", &h, &a);

    areB = (3*a*a*sqrt(3))/2;
    vol = (areB*h)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n",vol);

    return 0;
}