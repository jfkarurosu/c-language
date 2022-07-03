//Valor de y dado x
#include <stdio.h>

int main(){
    int x,y;

    scanf("%d",&x);

    if(x>1){
        y = x*x;
    }else if(x==1){
        y = 0;
    }else{
        y = x;
    }

    printf("Y = %d\n",y);

    return 0;
}