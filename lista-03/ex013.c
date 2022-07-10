#include <stdio.h>

int main(){
    int num, par = 0, impar = 0;
    double medPar = 0,medImpar = 0;

    while(-1){
        scanf("%d",&num);
        if(num == 0){
            medPar /= par;
            medImpar /= impar;
            printf("MEDIA PAR: %.2lf\n",medPar);
            printf("MEDIA IMPAR: %.2lf\n",medImpar);
            
            return 0;
        }
        
        if(num%2 == 0){
            medPar += num;
            par++;
        }else{
            medImpar += num;
            impar++;
        }
    }

}