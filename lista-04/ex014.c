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

int main(){
    int vet[10000];
    int i,num;
    double med,soma;

    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d",&vet[i]);
    }
    ordenaVet(vet,num);
    if(num%2 == 0){
        soma = vet[(num/2)-1]+vet[(num/2)];
        med = soma/2;
    }else{
        med = vet[num/2];
    }

    printf("%.2lf\n",med);

    return 0;
}