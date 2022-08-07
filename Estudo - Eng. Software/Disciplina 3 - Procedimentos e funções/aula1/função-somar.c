#include <stdio.h>
#include <locale.h>
#include <windows.h>

int somar(x, y){
    return  x + y;
}
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int resultado = 0;
    int n1 = 0;
    int n2 = 0;

    printf ("\n Função para somar 2 números.");
    printf("\n Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("\n Digite o segundo número: ");
    scanf("%d", &n2);
    resultado = somar(n1, n2);
    printf("\n O resultado da função %d", resultado);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}
