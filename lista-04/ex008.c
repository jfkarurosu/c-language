#include <stdio.h>

int main(){
    int vet[32];
    int i,num,j=-1;

    while(scanf("%d",&num)){
        if(num==0) printf("%d",0);
        for(i=0; num!=0; i++){
            vet[i] = num%2;
            num = num/2;
            j++;
        }
        for(i=j; i>-1; i--){
            printf("%d",vet[i]);
        }
        printf("\n");
        j=-1;
    }

    return 0;
}