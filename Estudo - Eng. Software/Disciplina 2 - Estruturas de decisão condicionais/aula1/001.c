#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
        if (idade >= 18)
        {
            printf("\n Você já pode tirar sua carteira de Habilitação, você é maior de 18 anos");
        }else{
            printf("\n Você não pode tirar sua carteira de Habilitação, você é menor de 18 anos");
        }
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
        
}