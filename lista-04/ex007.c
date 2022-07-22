// Acumulado de Elementos
#include <stdio.h>
#include <string.h>

void ordena_vet(int vet[], int tam){
    int i,j,aux;

    for(i=0; i<tam; i++){
        for(j=i+1; j<tam; j++){
            if(vet[i]>vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void menor_igual(int vet[], int tam){
    int i,j,nuns = 0;

    for(i=0; i<=vet[tam-1]; i++){
        for(j=0; j<tam; j++){
            if(i==vet[j]){
                nuns++;
            }
        }
        nuns =+ nuns;
        printf("(%d) %d\n",i,nuns);
    }
}

int main(){
    int vetor[10000];
    int t_vet,i;

    do
    {
        scanf("%d",&t_vet);
        if(t_vet == 0) return 0;

        for(i=0; i<t_vet; i++){
            scanf("%d", &vetor[i]);
        }

        ordena_vet(vetor, i);
        menor_igual(vetor, i);

    } while (t_vet != 0);
    

    return 0;
}
