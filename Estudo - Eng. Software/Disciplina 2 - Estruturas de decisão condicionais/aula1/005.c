#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;

    printf("\n (1)Para Saldo\n (2) Para extrato\n (3) Para Saque\n (4)Para sair");
    printf("\n Informe a operação desejada: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("\n Saldo");
        break;
    case 2:
        printf("\nExtrato");
        break;
    case 3:
        printf("\nSaque");
        break;
    case 4:
        printf("\nSair");
        break;
    default:
        printf("\nInválido");
    }
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}