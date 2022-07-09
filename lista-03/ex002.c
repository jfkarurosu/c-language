// Conversão de temperatura +
#include <stdio.h>

int main(){
    int i;
    double fah, cel;

    scanf("%d",&i);

    while(i--){
        scanf("%lf",&fah);
        cel = (5*(fah-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",fah,cel);
    }

    return 0;
}