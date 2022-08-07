#include <stdio.h>

int* gerarRamdomico(){

    static int r[10];
    int a;

    for(a = 0; a < 10; a++){
        r[a] = rand() % 100;
        printf("\n r[%d] = %d", a, r[a]);
    }
    return r;
}

int main(){

    int *p;
    int i;

    p = gerarRamdomico();
    for(i = 0; i < 10; i++){
        printf("\n p[%d] = %d", i, p[i]);
    }
    return 0;
}