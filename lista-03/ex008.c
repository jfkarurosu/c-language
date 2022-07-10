#include <stdio.h>
 
int main(){
    int a,b, ano = 0;
 
    scanf("%d%d",&a,&b);
 
    while(a<b){
        a = a+(a*3/100);
        b = b+(b*1.5/100);
        ano++;
    }
 
    printf("ANOS = %d\n",ano);
    
    return 0;
}