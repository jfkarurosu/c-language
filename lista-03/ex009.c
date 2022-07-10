// Fatorial
#include <stdio.h>

int main(){
    int n,fat,i;

    scanf("%d",&n);

    if(n == 0){
        fat = 1;
    }else{
        fat = n;
        for(i=n-1; i>0; i--){
            fat = fat*i;
        }
    }

    printf("%d! = %d\n",n,fat);


    return 0;
}