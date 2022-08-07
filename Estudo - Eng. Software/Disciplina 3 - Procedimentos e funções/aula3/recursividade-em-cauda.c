#include <stdio.h>

int fatorialCauda(int n){
   return fatorialAux(n,1);
}
int fatorialAux(int n, int parcial){
    if(n != 1){
        return fatorialAux(n - 1, parcial * n);
    }else{
        return parcial;
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    resultado = fatorialCauda(n);
    printf("\n Resultado do fatorial = %d", resultado);
    return 0;
}