#include <stdio.h>

int ultimo_vezes(int vet[], int tam){
    int i,vezes = 0;

    for(i=0; i<tam; i++){
        if(vet[tam-1]==vet[i]) vezes++;
    }
    return vezes;
}

int nota_maior(int vet[], int tam, int * maior){
    int i, j, mais, ind=0;

    mais = vet[0];

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(mais < vet[j]){
                ind = i;
                *maior = vet[i];
                mais = vet[i];
            } 
        }
    }
    return ind;
}

int main(){
    int quant,i,maior, vezes, ind;
    int nuns[10000];
    
    scanf("%d",&quant);
    
    for(i=0; i<quant; i++){
        scanf("%d",&nuns[i]);
        if(nuns[i]>=0 && nuns[i]<=10) continue;
        else break;
        
    }
    vezes = ultimo_vezes(nuns, quant);

    printf("Nota %d, %d vezes\n", nuns[quant-1], vezes);

    ind = nota_maior(nuns, quant, &maior);

    printf("Nota %d, indice %d\n", maior, ind);

    return 0;

}