#include <stdio.h>
#include <locale.h>
#include <windows.h>

float calculoIMC(){
    float peso, altura, IMC;

    printf("\n Informe a altura: ");
    scanf("%f", &altura);
    printf("\n Informe o peso: ");
    scanf("%f", &peso);
    IMC = peso / (altura * altura);

    return IMC;
}

int main(){

    float IMC;

    printf("## C A U C U L A D O R A  D E  I M C ##\n");
    IMC = calculoIMC();
    printf("\n IMC = %.2f", IMC);
    if(IMC < 18.5){
        printf("\n Status: Abaixo do peso");
    }else if(IMC >= 18.5 && IMC < 24.9){
        printf("\n Status: Peso ideal");
    }else{
        printf("\n Status: Sobrepeso");
    }
    return 0;
}