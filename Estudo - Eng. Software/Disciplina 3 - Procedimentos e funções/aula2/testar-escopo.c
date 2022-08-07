#include <stdio.h>

int testar(){
    int x = 10;
    return x;
}

int main(){
    
    int x = 20;

    printf("\n Valor de x na funcao main() = %d", x);
    printf("\n Valor de x na funcao testar() = %d", testar());

    return 0;
}