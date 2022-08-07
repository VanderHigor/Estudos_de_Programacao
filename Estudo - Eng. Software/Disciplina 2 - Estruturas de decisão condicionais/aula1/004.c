#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int num;
    printf("\n Digite um número inteiro: ");
    scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("\n O número é par");
        }else{
            printf("\n O número é impar");
        }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}