#include <stdio.h>

int main(){

    int linha, coluna;
    int matriz[3][3];
    int eh_diagonal;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("\n Digite o valores da Matriz para [linha %d, e coluna %d]: ", linha+1,coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(coluna != linha && matriz[linha][coluna] != 0){
                eh_diagonal = 0;
            }
        }
    }
    if(eh_diagonal == 1){
        printf("\n\n Sua matriz e diagonal!");
    }else{
        printf("\n\n Sua Matriz nao e diagonal!");
    }
    return 0;
}