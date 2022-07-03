#include <stdio.h>

int main(){
    int conta;
    double cons,contaf;
    char tipo;

    scanf("%d%lf%*c%c",&conta,&cons,&tipo);

    switch (tipo)
    {
    case 'R':
        contaf = cons*0.05+5;
        break;
    case 'C':
        if(cons>80){
            cons = cons-80;
            contaf = cons*0.25+500;
        }else{
            contaf = 500;
        }

        break;
    case 'I':
        if(cons>100){
            cons = cons-100;
            contaf = cons*0.04+800;
        }else{
            contaf = 800;
        }
        break;
    default:
        break;
    }

    printf("CONTA = %d\nVALOR DA CONTA = %.2lf\n",conta,contaf);
    

    return 0;
}