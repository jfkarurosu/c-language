// Número Primo ++
#include <stdio.h>

int main(){
    int num,i,div = 0;

    scanf("%d",&num);
    if(num<1){
        printf("Numero invalido!\n");
        return 0;
    }
    
    for(i=1; i<=10; i++){
        if(num%i == 0){
            div++;
        }
    }

    if(div < 2){
        printf("PRIMO\n");
    }else{
        printf("NÃO PRIMO\n");
    }
    
    return 0;
}