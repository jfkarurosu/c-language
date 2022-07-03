#include <stdio.h>

int main(){
    int hor,min,seg,segT;

    scanf("%d %d %d",&hor, &min, &seg);

    segT = hor*3600+min*60+seg;

    printf("O TEMPO EM SEGUNDOS E = %d\n",segT);

    return 0;
}