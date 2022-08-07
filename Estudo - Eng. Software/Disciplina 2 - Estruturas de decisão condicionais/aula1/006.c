#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char x;
    float valor, desc, total;
    
    printf("\n Digitee o valor da compra: ");
    scanf("%f", &valor);
    printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
    printf("\n a. para azul");
    printf("\n v. para vermelho");
    printf("\n b. para branco");
    printf("\n Digite sua opção: ");
    scanf("%s", &x);

    switch (x)
    {
    case 'a':
        printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento");
        desc = 30;
        break;
    case 'v':
        printf("\n Você escolheu a cor vermelha, seu descontoerá de 20 por cento");
        desc = 20;
        break;
    case 'b':
        printf("\n Você escolheu a cor branco, seu deconto será de 10 por cento");
        desc = 10;
        break;
    default:
        printf("\n Opção inválida, não será concedido desconto");
        desc = 0;
    }
    total = valor - (valor * desc/100);
    printf("\n O valor da sua compra é R$ %.2f", total);

    SetConsoleOutputCP(CPAGE_DEFAULT);
}