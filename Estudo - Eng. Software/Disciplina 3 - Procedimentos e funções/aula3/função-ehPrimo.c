#include <stdio.h>

int ehPrimo(int n){
    return ehPrimoAux(n, 2);
}

int ehPrimoAux(int n, int x){
    if(x == n){
        return 1;
    }else if(n % x == 0){
        return 0;
    }else{
        return ehPrimoAux(n, x + 1);
    }
}

int main(){

    int resultado = 0, n;

    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    resultado = ehPrimo(n);
    if(resultado == 1){
        printf("\n O numero %d e primo!", n);
    }else{
        printf("\n O numero %d não é primo!", n);
    }
    return 0;
}