#include <stdio.h>

int main(){
    int k,j;
    double n,s,i,auxI,res;

    scanf("%lf%lf%d%lf",&n,&i,&k,&s);
    
    auxI = i;
    printf("Tabuada de soma:\n");
    for(j=0; j<k; j++){
        res = n+i;
        printf("%.2lf + %.2lf = %.2lf\n",n,i,res);
        i += s;
    }

    i = auxI;
    printf("Tabuada de subtracao:\n");
    for(j=0; j<k; j++){
        res = n-i;
        printf("%.2lf - %.2lf = %.2lf\n",n,i,res);
        i += s;
    }

    i = auxI;
    printf("Tabuada de multiplicacao:\n");
    for(j=0; j<k; j++){
        res = n*i;
        printf("%.2lf x %.2lf = %.2lf\n",n,i,res);
        i += s;
    }

    i = auxI;
    printf("Tabuada de divisao:\n");
    for(j=0; j<k; j++){
        res = n/i;
        printf("%.2lf / %.2lf = %.2lf\n",n,i,res);
        i += s;
    }

    return 0;
}