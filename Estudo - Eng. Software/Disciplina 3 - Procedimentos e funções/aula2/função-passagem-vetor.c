#include <stdio.h>

void inserir(int a[]){
    int i;
    for(i = 0; i < 3; i++){
        printf("\n Digite um valor: ",i);
        scanf("%d", &a[i]);
    }
}
void imprimir(int b[]){
    int i;
    for(i = 0; i < 3; i++){
        printf("\n Numero[%d] = %d", i, 2 * b[i]);
    }
}

int main(){

    int numeros[3];
    printf("\n Preenchendo o Vetor...");
    inserir(numeros);
    printf("\n\n Dobro dos valor informados:");
    imprimir(numeros);
    return 0;
}