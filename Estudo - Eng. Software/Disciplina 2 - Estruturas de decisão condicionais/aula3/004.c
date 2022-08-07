#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define VET_TAM 5

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAUT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[VET_TAM];
    int num, i=0, achou = 0;

            //Preenche Vetor
    for(int i=0; i < VET_TAM; i++){
        printf("\n Entre com um número: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n\n Informe o núemero a ser encontrado: ");
    scanf("%d", &num);
        while(i < VET_TAM){
            if(vetor[i] == num){
                achou=1;
                break;
            }
            i++;
        }
    if(achou == 1){
        printf("\n O número %d foi encontrado na posição %d do vetor", num, 1);
    } else{
        printf("\n O número %d não foi encontrado no vetor", num);
    }
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAUT);
}