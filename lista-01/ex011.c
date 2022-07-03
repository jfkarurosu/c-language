#include <stdio.h>

int main(){
    int num, invN;

    scanf("%d",&num);
    invN = (num%10)*100+((num/10)%10)*10+(num/100)%10;

    printf("%d\n",invN);

    return 0;
}