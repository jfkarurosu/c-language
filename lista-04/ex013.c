#include <stdio.h>

int main(){
    int vet[100000];
    int i,j,num,freq,numFr,freqM;

    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d",&vet[i]);
    }

    freq = 0;
    freqM = 0;
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            if(vet[i]==vet[j]){
                freq++;
                if(freq>freqM){
                    freqM = freq;
                    numFr = vet[i];
                }
            }
        }
        freq = 0;
    }

    printf("%d\n%d\n",numFr,freqM);

    return 0;
}