#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float nota_final;

    printf("\n Digite a nota do aluno: ");
    scanf("%f", &nota_final);

    if (nota_final >= 60)
    {
        printf("\n Aprovado");
    }else if (nota_final >= 50){
        printf("\n Recuperação");
    }else{
        printf("\n Reprovado");
    }
 return 0;

    SetConsoleOutputCP(CPAGE_DEFAULT);

}