#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //Matriz incial
    int mat[3][5] = {
        1, 1, 1, 0, -1,
        1, 1, 1, 1, 1,
        0, 0, -1, -1,-1
    };
    int opcao;
    int numVoo;
    int reservou;

    do{
        printf("\n 1 - Reservar Vôo\n 2- Para Sair\n Infore a opção desejada: ");
        scanf("%d", &opcao);
            switch(opcao){
                case 1:
                    printf("\n Digite o número do vôo (1-3): ");
                    scanf("%d", &numVoo);
                    reservou = 0;
                        if(numVoo >=1 && numVoo <= 3){
                            for(int i = 0; i < 5 ; i++){
                                if(mat[numVoo - 1][i] == 0){
                                    reservou = 1;
                                    mat[numVoo - 1][i] = 1;
                                    break;
                                } 
                            }
                            if(reservou == 1)  {
                                printf("\n Seu Vôo foi reservado com sucesso!");
                            }else{
                                printf("\n Não há poltronas disponíveis nesse vôo!");
                            }
                        }else{
                            printf("\n Opção inválida!");
                        }
                        break;
                case 2:
                    printf("\n Saindo...");
                    break;
                default:
                    printf("\n Opção inválida!");
            } 
    }while(opcao != 2);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);

}