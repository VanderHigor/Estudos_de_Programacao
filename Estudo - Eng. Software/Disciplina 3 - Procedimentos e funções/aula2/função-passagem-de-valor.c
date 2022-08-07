#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int main(){

    int result = somar(10, 15);
    printf("\n Resultado da soma = %d", result);
    return 0;
}