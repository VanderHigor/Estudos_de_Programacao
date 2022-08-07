#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

#define TAM_NOME 30

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT= GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);

    char nome[TAM_NOME];
    int i;

    printf("\n Digite o nome do(a) Aluno(a): ");
    fflush(stdin);
    fgets(nome, TAM_NOME, stdin);
    printf("\n Nome ANTES da mudança: %s", nome);
    for(int i = 0; i < TAM_NOME; i++){
        nome[i] = toupper(nome[i]);
    }
    printf("\n Nome DEPOIS da mudança: %s", nome);
SetConsoleOutputCP(CPAGE_DEFAULT);

}