#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int qtde_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

    do {
        printf("\n Digite a nota do aluno %d: ", qtde_notas + 1);
        scanf("%f", &nota);
        qtde_notas += 1;
        soma_notas += nota;
        printf("\n Digite 1 para informar outra nota ou 2 para encerrar: ");
        scanf("%d", &opcao);
    }while (opcao != 2);

    printf("\n Quantidade de alunos = %d", qtde_notas);
    media = soma_notas / (float) qtde_notas;
    printf("\n Média das notas %.2f", media);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}