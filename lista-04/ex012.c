#include <stdio.h>

void ordenaVet(int v[], int n){
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

void printVet(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\n",v[i]);
    }
}

int main(){
    int num,i;
    int vet[1000];

    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d",&vet[i]);
    }
    ordenaVet(vet,num);
    printVet(vet,num);

    return 0;
}