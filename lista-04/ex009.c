#include <stdio.h>
#include <math.h>

int main(){
    double vet[1000];
    double n,x1,y1,z1,x2,y2,z2;
    int i,j=1;

    scanf("%lf",&n);
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    scanf("%lf%lf%lf",&x2,&y2,&z2);
    vet[0] = sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
    
    if(n>2){
        for(i=1; i<n-1; i++){
            x1 = x2;
            y1 = y2;
            z1 = z2;
            scanf("%lf%lf%lf",&x2,&y2,&z2);
            vet[i] = sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
        j++;
        }
    }
    for(i=0; i<j; i++){
        printf("%.2lf\n",vet[i]);
    }

    return 0;
}