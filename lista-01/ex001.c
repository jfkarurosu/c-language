#include <stdio.h>

int main(){
    double sal, kw, valKw, cons,fim;

    scanf("%lf", &sal);
    scanf("%lf", &kw);

    valKw = (sal*70/100)/100;
    cons = kw*valKw;
    fim = cons-(cons*10/100);

    printf("Custo por kW: R$ %.2lf\n",valKw);
    printf("Custo do consumo: R$ %.2lf\n",cons);
    printf("Custo com desconto: R$ %.2lf\n",fim);

    return 0;
}