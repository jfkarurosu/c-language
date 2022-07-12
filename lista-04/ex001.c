// Achei +
#include <stdio.h>

int main(){
    int vet[99999], busca[999];
    int tamV,tamB,i,j,status;

    scanf("%d",&tamV);
    for(i=0; i<tamV; i++){
        scanf("%d",&vet[i]);
    }
    scanf("%d",&tamB);
    for(i=0; i<tamB; i++){
        scanf("%d",&busca[i]);
    }

    for(i=0; i<tamB; i++){
        status = 0;
        for(j=0; j<tamV; j++){
            if(busca[i]==vet[j]){
                printf("ACHEI\n");
                status = 1;
            }
        }
        if(status != 1){
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}