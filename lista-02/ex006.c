//Reajuste salarial
#include <stdio.h>

int main(){
    double sal,res;

    scanf("%lf",&sal);
    
    if(sal>300){
        res = sal+(sal*30/100);
    }else{
        res = sal+(sal*50/100);
    }

    printf("SALARIO COM REAJUSTE = %.2lf\n",res);

    return 0;
}