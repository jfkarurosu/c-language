#include <stdio.h>
#include <math.h>

int main(){
    double massaM, acelM, seg, esp, vel,trab;

    scanf("%lf %lf %lf",&massaM, &acelM, &seg);

    esp = acelM*seg*seg/2;
    vel = acelM*3.6*seg;
    trab = massaM*1000*acelM*seg*acelM*seg/2;

    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n",vel,esp,trab);

    return 0;
}