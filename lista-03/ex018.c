// Companhia de Teatro +++
#include <stdio.h>

int main(){
    double i,vIng,vIni,vFim,inter,var,nIng,luc,mFim,mLuc,mIngr;

    scanf("%lf%lf%lf",&vIng, &vIni, &vFim);

    mLuc = 0;

    for(i=vIni; i<=vFim; i++){
        inter = vIng-i;
        if(inter<0){
            var = inter/0.5*30;
        }else{
            var = inter/0.5*25;
        }
        nIng = 120+var;
        luc = (nIng*i)-(nIng*0.05)-200;
        
        if(luc>mLuc){
            mLuc = luc;
            mFim = i;
            mIngr = nIng;
        }

        printf("V: %.2lf, N: %.lf, L: %.2lf\n",i,nIng,luc);
    }

        printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %.lf\n",mFim,mLuc,mIngr);


    return 0;
}