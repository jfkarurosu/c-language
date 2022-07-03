#include <stdio.h>

int main(){
    int num, cem, cinq, dez, um;

    scanf("%d",&num);
    cem = num/100;
    cinq = (num%100)/50;
    dez = ((num%100)%50)/10;
    um = (((num%100)%50)%10);

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n",cem,cinq,dez,um);

    return 0;
}