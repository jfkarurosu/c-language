#include <stdio.h>
int main(){
    double a,b,c,d,e,f,Dg,Dx,Dy,x,y;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);

    Dg = a*e-b*d;
    Dx = c*e-b*f;
    Dy = a*f-c*d;
    x=Dx/Dg;
    y=Dy/Dg;

    printf("O VALOR DE X E = %.2lf\n",x);
    printf("O VALOR DE Y E = %.2lf\n",y);

    return 0;
}