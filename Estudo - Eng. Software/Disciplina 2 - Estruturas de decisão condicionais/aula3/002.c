#include <stdio.h>

int main(){
    int  contador;

    printf("\n Digite um numero para contagem regressiva: ");
    scanf("%d", &contador);

    for(contador; contador >=1; contador--){
        printf("\n %d", contador);
    }
    return 0;
}