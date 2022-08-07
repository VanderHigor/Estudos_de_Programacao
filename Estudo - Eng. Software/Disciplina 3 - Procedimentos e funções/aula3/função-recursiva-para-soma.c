#include <stdio.h>

int somar(int valor){
    if(valor == 0){
        return valor;
    }else{
        return valor + somar(valor - 1);
    }
}

int main(){

    int n, resultado;

    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    resultado = somar(n);
    printf("\n Resultado = %d", resultado);
    return 0;
}