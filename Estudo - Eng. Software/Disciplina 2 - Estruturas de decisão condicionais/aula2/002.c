#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char parar;
    float nota;
    printf("\n Digite a nota final do aluno: ");
    scanf("%f", &nota);
    while(nota < 0 || nota >10){
        printf("\n Nota inválida! Digite a nota final do aluno: ");
        scanf("%f", &nota);
    }
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}