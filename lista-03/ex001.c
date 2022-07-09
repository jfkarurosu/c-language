// Arrecadação de Jogos +
#include <stdio.h>

int main(){
    int test, quant, i;
    double pop, ger, arq, cad,total;

    scanf("%d",&test);

    for(i=1; i<=test; i++){
        scanf("%d %lf %lf %lf %lf",&quant,&pop,&ger,&arq,&cad);
        total = (quant*pop/100)*1+(quant*ger/100)*5+(quant*arq/100)*10+(quant*cad/100)*20;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n",i,total);
    }    

    return 0;
}