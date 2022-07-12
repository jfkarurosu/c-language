// Contagem ++
#include <stdio.h>

int main(){
    int vet[999] = {0};
    int num,i,tam,maior = 0;

    do
    {
        scanf("%d",&tam);
    } while (tam < 1);
    
    for(i=0; i<tam; i++){
        scanf("%d",&vet[i]);
    }

    scanf("%d",&num);

    for(i=0; i<tam; i++){
        if(num<=vet[i]){
            maior++;
        }
    }

    printf("%d\n",maior);

    return 0;
}