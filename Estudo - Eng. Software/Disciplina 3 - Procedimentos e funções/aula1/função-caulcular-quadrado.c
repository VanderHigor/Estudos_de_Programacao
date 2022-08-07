#include <stdio.h>
#include <locale.h>
#include <windows.h>

float calcular(){
    float num;
    printf("\nDigite um número: ");
    scanf("%f", &num);
    return num * num;
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float resultado = 0;
    resultado = calcular();
    printf("\nO quadrado do número digitado é %.1f", resultado);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);

}