#include <stdio.h>

int main(){
    int num,inv,d1,d2,d3,d4,d5;

    scanf("%d",&num);

    if(num>=100000){
        printf("NUMERO INVALIDO\n");
        return 0;
    }

    if(num>=10000){
        d1 = num%10;
        d2 = num/10%10;
        d3 = num/100%10;
        d4 = num/1000%10;
        d5 = num/10000%10;
        inv = d1*10000+d2*1000+d3*100+d4*10+d5;
    }else if(num>=1000){
        d1 = num%10;
        d2 = num/10%10;
        d3 = num/100%10;
        d4 = num/1000%10;
        inv = d1*1000+d2*100+d3*10+d4;
    }else if(num>=100){
        d1 = num%10;
        d2 = num/10%10;
        d3 = num/100%10;
        inv = d1*100+d2*10+d3;
    }else if(num>=10){
        d1 = num%10;
        d2 = num/10%10;
        inv = d1*10+d2;
    }else{
        d1 = num%10;
        inv = d1;
    }
    
    if(num == inv){
        printf("PALINDROMO\n");
    }else{
        printf("NAO PALINDROMO\n");
    }

    return 0;
}