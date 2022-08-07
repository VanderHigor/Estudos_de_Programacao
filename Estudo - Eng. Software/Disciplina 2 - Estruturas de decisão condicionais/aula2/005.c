#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float soma = 0;
    float valor;
    int opcao;

    do {
        printf("\n M E N U   DE   O P Ç Õ E S");
        printf("\n 1. Para Deposito");
        printf("\n 2. Para Saque");
        printf("\n 3. Para Saldo");
        printf("\n 4. Para Sair");
        printf("\n Informe uma opção: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                printf("\n Informe o valor: ");
                scanf("%f", &valor);
                soma += valor;
                break;
            case 2:
                printf("\n Informe o valor: ");
                scanf("%f", &valor);
                soma -= valor;
                break;
            case 3:
                printf("\n Saldo atual = R$ %.2f", soma);
                break;
            case 4:
                printf("\n Saindo...");
                break;
            default:
                printf("\n Opção inválida!");
        }
    }while (opcao != 4);
        printf("\n\n Fim das operações!");
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}