// Quadrado de pares +
#include <stdio.h>

int main(){
    int num,quad,par;

    scanf("%d",&num);

    if(num>5 && num<2000){
        par = 2;
        do
        {
            quad = par*par;
            printf("%d^2 = %d\n",par,quad);
            par+=2;
        } while (par<=num);
        
    }

    return 0;
}