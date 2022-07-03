#include <stdio.h>

int main(){
    double nota;

    scanf("%lf",&nota);

    if(nota>=9 && nota<=10){
        printf("NOTA = %.1lf CONCEITO = A\n",nota);
    }else if(nota>=7.5){
        printf("NOTA = %.1lf CONCEITO = B\n",nota);
    }else if(nota>=6){
        printf("NOTA = %.1lf CONCEITO = C\n",nota);
    }else{
        printf("NOTA = %.1lf CONCEITO = D\n",nota);
    }

    return 0;
}