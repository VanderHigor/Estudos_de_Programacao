#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char parar;
    float nota;

    do{
        printf("\n Digite a nota final do aluno ( min: 0, max: 10 ): ");
        scanf("%f", &nota);
            if(nota < 0 || nota > 10){
                printf("\n Nota inválida.");
            }
    }while(nota <0 || nota > 10);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}