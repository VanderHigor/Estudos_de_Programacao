#include <stdio.h>

int fatorial(int valor){
    if(valor != 1){
        return valor * fatorial(valor - 1);
    }else{
        return valor;
    }
}

int main(){

    int n, resultado;

    printf("\n Digite uma numero inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("\n Resultado = %d", resultado);
    return 0;
}