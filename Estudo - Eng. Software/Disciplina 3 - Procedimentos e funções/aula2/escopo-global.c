#include <stdio.h>

int x = 10;

void testar(){
    x = 2 * x;
}
int main(){

    printf("\n Valor de x global = %d", x);
    testar();
    printf("\n Valor de x global alterado em testar() = %d", x);
    return 0;
}