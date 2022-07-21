#include <stdio.h>

int main(){
    int vet[5000];
    int i,n;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&vet[i]);
    }

    for(i=0; i<n; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");

    return 0;
}