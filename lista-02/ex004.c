#include <stdio.h>

int main(){
    int horas;
    double pag;

    scanf("%d",&horas);
    pag = horas/3*10;
    pag = pag + (horas%3)*5;

    printf("O VALOR A PAGAR E = %.2lf\n",pag);

    return 0;
}