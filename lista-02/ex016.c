#include <stdio.h>

int main(){
    int n1,n2,n3,a,b,c,aux;
    char A,B,C; // Letras a serem lidas

    scanf("%d %d %d\n",&n1,&n2,&n3);
    scanf("%c%c%c",&A,&B,&C);

    if(n1>=0 & n1<1000 & n2>=0 & n2<1000 & n3>=0 & n3<1000)
    {
        // Para ordenar os numeros em ordem crescente
        if(n1>n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
        }
        if(n1>n3){
            aux=n1;
            n1=n3;
            n3=aux;
        }
        if(n2>n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
        //==============================================
        a = n1;
        b = n2;
        c = n3;

        if(B == 67 & C == 66) // ACB
        { 
            printf("%d %d %d\n",a,c,b);
        }else if(A == 66 & B == 65) // BAC
        {
            printf("%d %d %d\n",b,a,c);
        }else if(A == 66 & B == 67) // BCA
        {
            printf("%d %d %d\n", b,c,a);
        }else if(A == 67 & C == 65) // CBA
        {
            printf("%d %d %d\n",c,b,a);
        }else if(A == 67 & B == 65) // CAB
        {
            printf("%d %d %d\n",c,a,b);
        }else{
            printf("%d %d %d\n",a,b,c);
        }

    }else
    {
        printf("NUMERO INVALIDO\n");
    }

    return 0;
}