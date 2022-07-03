#include <stdio.h>

int main(){
    int num,mil,cem,dez,uni;

    scanf("%d",&num);

    if(num>9999 || num <= 0){
        printf("Numero invalido!");
    }else{
        mil = num/1000;
        cem = (num%1000)/100;
        dez = ((num%1000)%100)/10;
        uni = num%10;

        //========================================
        if(num/1000 != 0){
            printf("(quarta ordem) %d = ",num);
            if(mil == 1){
                printf("1 unidade de milhar");
            }else{
                printf("%d unidades de milhar",mil);
            }
            if(cem == 1){
                printf(" + 1 centena");
            }else if(cem > 1){
                printf(" + %d centenas",cem);
            }
            if(dez == 1){
                printf(" + 1 dezena");
            }else if(dez > 1){
                printf(" + %d dezenas",dez);
            }
            if(uni == 1){
                printf(" + 1 unidade");
            }else if(uni > 1){
                printf(" + %d unidades",uni);
            }

            // decomposição final
            printf(" = %d",(mil*1000));
            if(cem != 0 ){
                printf(" + %d",(cem*100));
            }
            if(dez != 0){
                printf(" + %d",(dez*10));
            }
            if(uni != 0){
                printf(" + %d",uni);
            }
        }else if(num/100 != 0){
            printf("(terceira ordem) %d = ",num);
            if(cem == 1){
                printf("1 centena");
            }else if(cem > 1){
                printf("%d centenas",cem);
            }
            if(dez == 1){
                printf(" + 1 dezena");
            }else if(dez > 1){
                printf(" + %d dezenas",dez);
            }
            if(uni == 1){
                printf(" + 1 unidade");
            }else if(uni > 1){
                printf(" + %d unidades",uni);
            }

            // decomposição final
            printf(" = %d",(cem*100));
            if(dez != 0){
                printf(" + %d",(dez*10));
            }
            if(uni != 0){
                printf(" + %d",uni);
            }
        }else if(num/10 != 0){
            printf("(segunda ordem) %d = ",num);
            if(dez == 1){
                printf("1 dezena");
            }else if(dez > 1){
                printf("%d dezenas",dez);
            }
            if(uni == 1){
                printf(" + 1 unidade");
            }else if(uni > 1){
                printf(" + %d unidades",uni);
            }

            // decomposição final
            printf(" = %d",(dez*10));
            if(uni != 0){
                printf(" + %d",uni);
            }
        }else if(num!= 0){
            printf("(primeira ordem) %d = ",num);
            if(uni == 1){
                printf("1 unidade");
            }else if(uni > 1){
                printf("%d unidades",uni);
            }

            // decomposição final
            printf(" = %d",uni);
        }
    }

    printf("\n");
    return 0;
}