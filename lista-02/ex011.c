#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,x1,x2,raiz,aux;

    scanf("%f %f %f",&a,&b,&c);

    if(a!=0){
        delta = (pow(b,2)-4*a*c);
        raiz = sqrt(delta);
        x1 = (-b+(raiz))/(2*a);
        x2 = (-b-(raiz))/(2*a);

        if(x1>x2){
            aux = x1;
            x1 = x2;
            x2 = aux;
        }

        if(delta < 0){
            printf("RAIZES IMAGINARIAS\n");
        }else{
            if(delta > 0){
                printf("RAIZES DISTINTAS\n");
                printf("X1 = %.2f\n",x1);
                printf("X2 = %.2f\n",x2);
            }else if(delta == 0){
                printf("RAIZ UNICA\n");
                printf("X1 = %.2f\n",x1);
            }
        }
    }

    return 0;
}
