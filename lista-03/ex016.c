// Salário ++
#include <stdio.h>

int main(){
    int matr,i;
    double valH,hor,sal;

    while (-1)
    {
        scanf("%d%lf%lf",&matr,&hor,&valH);
        if(matr == 0){
            return 0;
        }

        sal = hor*valH;
        printf("%d %.2lf\n",matr,sal);
        
    }


    return 0;
}