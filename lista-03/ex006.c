#include <stdio.h>

int main(){
    int i,n;
    double total=0;

    scanf("%d",&n);

    if(n<=0){
        printf("Numero invalido!\n");
    }else{
        
        for(i=1; i<=n; i++){
            total += 1/(double)i;
        }
        
        printf("%.6lf\n",total);
        
        return 0;
        
    }

    return 0;
}