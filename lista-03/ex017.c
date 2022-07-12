// Cálculo da raiz quadrada Metodo Babilonico +++
#include <stdio.h>

int main(){
    double n,r,a,erro,e;

    scanf("%lf%lf",&n,&e);
    r = 1;
    a = n;
    erro = n-(r*r);
    while(-1){
        if(erro<e){
            return 0;
        }

        r = (r+a)/2;
        a = n/r;
        erro = n-(r*r);
        if(erro<0){
            erro *= -1;
        }

        printf("r: %.9lf, erro: %.9lf\n",r,erro);
    }
}