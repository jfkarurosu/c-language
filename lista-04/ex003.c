#include <stdio.h>

int main(){
    int vet[5000];
    int i,num,j,aux;

    scanf("%d",&num);

    for(i=0; i<num; i++){
        scanf("%d",&vet[i]);
    }
    
    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }

    for(i=0; i<num; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");

    return 0;
}