#include <stdio.h>

int main(){
    int l,c,nFim,nTime;

    scanf("%d",&nTime);

    nFim = 0;
    if(nTime <= 1){
        printf("Campeonato invalido!\n");
    }else{

        for(l = 1; l<=nTime; l++){
            for(c = l; c<=nTime; c++){
                if(l != c){
                    nFim++;
                    printf("Final %d: Time%d X Time%d\n",nFim,l,c);
                }
            }
        }

    }

    return 0;
}