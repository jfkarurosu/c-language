// Maior segmento crescente de uma sequência ++
#include <stdio.h>

int main(){
    int n,num,aux,seq,maiSeq;

    scanf("%d",&n);
    aux = -1;
    seq = 0;
    maiSeq = 0;

    while(n--){
        scanf("%d",&num);
        if(num>aux){
            seq++;
            aux = num;
            if(seq>maiSeq){
                maiSeq = seq;
            }
        }else{
            seq = 1;
            aux = num;
        }
    }

    printf("O comprimento do segmento crescente maximo e: %d\n",(maiSeq-1));

    return 0;
}