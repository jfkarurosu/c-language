#include <stdio.h>

int main(){
    double custof, distr, imp, custot;

    scanf("%lf %lf %lf",&custof, &distr, &imp);

    custot = custof + (distr/100*custof) + (imp/100*custof);

    printf("O VALOR DO CARRO E = %.2lf\n",custot);
    
    return 0;
}