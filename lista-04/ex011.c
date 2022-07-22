#include <stdio.h>

void invetVet(int *vet, int num){
    int i,j,aux;

     for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
}

void ordenaVet(int *v, int n){
    int i,j,aux;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void printVet(int *v, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    int i,j,num,aux;
    int vet[10];

    scanf("%d",&num);

    for(i=0; i<num; i++){
        scanf("%d",&vet[i]);
    }

    printVet(vet,num);
    invetVet(vet,num);
    printVet(vet,num);
    ordenaVet(vet, num);
    printf("%d\n%d\n",vet[num-1],vet[0]);

    return 0;
}