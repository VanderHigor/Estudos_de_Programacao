#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float salario_bruto, desc_inss, desc_ir, salario_liquido;

    printf("\n Calculo do salário líquido com desconto do IR e INSS");
    printf("\n Digite o salário bruto: ");
    scanf("%f", &salario_bruto);
        //Cálculo desconto INSS
        if (salario_bruto <= 1045.00){
            desc_inss = salario_bruto * 0.075;
        }else if(salario_bruto <= 2089.30){
            desc_inss = salario_bruto * 0.09;
        }else if(salario_bruto <= 3134.40){
            desc_inss = salario_bruto * 0.12;
        }else{
            desc_inss = salario_bruto * 0.14;
        }
        //Cálculo desconto IR
        if (salario_bruto <= 1903.98){
            desc_ir = 0;
        }else if (salario_bruto <= 2826.65){
            desc_ir = salario_bruto * 0.075;
        }else if (salario_bruto <= 3751.05){
            desc_ir = salario_bruto * 0.15;
        }else if (salario_bruto <= 4664.58){
            desc_ir = salario_bruto * 0.225;
        }else{
            desc_ir = salario_bruto * 0.275;
        }
    salario_liquido = salario_bruto - desc_inss - desc_ir;
    printf("\n Descontos INSS: R$ %.2f", desc_inss);
    printf("\n Descontos IR: R$ %.2f", desc_ir);
    printf("\n Salário líquido: R$ %.2f", salario_liquido);
    
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
    
}