// Maior segmento igual de uma sequência ++
#include <stdio.h>

int main(){
    int n,num,aux,seq,maiSeq;

    scanf("%d",&n);
    aux = -1;
    seq = 0;
    maiSeq = 0;

    while(n--){
        scanf("%d",&num);
        if(num==aux){
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

    printf("A maior subsequência de elementos iguais possui %d elementos.\n",maiSeq);

    return 0;
}