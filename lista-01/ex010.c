#include <stdio.h>

int main(){
    int num, newN, dig;

    scanf("%d",&num);
    dig = ((num/100)%10+((num/10)%10)*3+(num%10)*5)%7;
    newN = num*10+dig;

    printf("O NOVO NUMERO E = %d\n",newN);

    return 0;
}