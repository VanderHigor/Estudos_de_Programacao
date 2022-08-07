#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float orcamento;
    printf("\n Digite o valor do orçamento: ");
    scanf("%f", &orcamento);
        if (orcamento >= 10000)
        {
            printf("\n João e Maria vão fazer uma viagem internavional");
        }else
        {
            printf("\n João e Maria vão fazer uma viagem nacional");
        }
        return 0;
     SetConsoleOutputCP(CPAGE_DEFAULT);
        

        
}