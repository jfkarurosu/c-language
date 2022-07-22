#include <stdio.h>

int main(){
    int vet[5000];
    int n,i,soma = 0;

    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&vet[i]);
        soma += vet[i];
    }
    printf("%d\n",soma);

    return 0;
}