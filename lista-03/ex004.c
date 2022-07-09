// Série de pares +
#include <stdio.h>

int main(){
    int n,quant;

    scanf("%d%d",&n,&quant);
    if(n%2 != 0){
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }else{
        while(quant--){
            printf("%d ",n);
            n += 2;
        }
    }

    printf("\n");
    
    return 0;
}