#include <stdio.h>

int main(){
    int vet[1000], ind[1000];
    int num,i,j,aux, auxI;

    while(-1){
        scanf("%d",&num);
        if(num<=0){
            return 0;
        }else{
            for(i=0; i<num; i++){
                scanf("%d",&vet[i]);
                ind[i] = i;
            }

            for(i=0; i<num; i++){
                for(j=i+1; j<num; j++){
                    if(vet[i]>vet[j]){
                        aux = vet[i];
                        vet[i] = vet[j];
                        vet[j] = aux;
                        auxI = ind[i];
                        ind[i] = ind[j];
                        ind[j] = auxI;
                    }
                }
            }
            
            printf("%d %d\n",ind[num-1],vet[num-1]);
        }
    }
    
}
