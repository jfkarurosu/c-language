// Soma de progressão aritmética +
#include <stdio.h>

int main(){
    int a1, r, n, i, total = 0;
    
    scanf("%d %d %d",&a1,&r, &n);
    
    for(i=1; i<=n; i++){
        total += a1+(i-1)*r;
    }
    
    printf("%d\n",total);
 
    return 0;
}