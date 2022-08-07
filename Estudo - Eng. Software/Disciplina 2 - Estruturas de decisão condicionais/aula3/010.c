#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define bimestresAnuais 4
#define numeroDeAlunos 4

int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float notasAlunos [numeroDeAlunos][bimestresAnuais] = {0};
    float mediasAlunos [numeroDeAlunos] = {0};
    float media = 0;

    printf("\n insira as 4 notas no Aluno 1: ");
        for(int aluno = 0; aluno < numeroDeAlunos; aluno++){
            for(int notas = 0; notas < bimestresAnuais; notas++){
                scanf("%f", &notasAlunos[aluno][notas]);
                media += notasAlunos[aluno][notas];
            }
            mediasAlunos[aluno] = media / bimestresAnuais;
            media = 0;
            printf("\n Insira as 4 notas no Aluno %i: ", aluno +2);
        }
    for(int aluno = 0; aluno < numeroDeAlunos; aluno++){
        printf("\n A média do aluno %i é %.2f", aluno + 1, mediasAlunos[aluno]);
    }
SetConsoleOutputCP(CPAGE_DEFAULT);
}