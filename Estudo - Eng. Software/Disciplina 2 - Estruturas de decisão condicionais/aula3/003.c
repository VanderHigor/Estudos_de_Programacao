#include <stdio.h>

#define VET_TAM 5

int main(){
    int num[VET_TAM];

        for(int i = 0; i < VET_TAM; i++){
            printf("\n Entre com um numero: ");
            scanf("%d", &num[i]);
            printf("\n O valor digitado foi %d", num[i]);
        }
        return 0;
}