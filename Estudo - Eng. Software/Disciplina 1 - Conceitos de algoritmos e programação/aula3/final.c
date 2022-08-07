#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define TAM_NOME_CLIENTE 100


struct cliente 
{
    char nome [TAM_NOME_CLIENTE];
    int idade;

};
struct filme
{
    int classificacao_filme;
    int esta_disponivel;
};
int main(void){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    struct cliente cli;
    struct filme fi;
    

printf("\n Informe o nome do cliente: ");
fflush(stdin);
fgets(cli.nome,TAM_NOME_CLIENTE,stdin);

printf("\n Informe a idade do cliente: ");
scanf("%d", &cli.idade);

printf("\n Informe a classificação do filme: ");
scanf("%d", &fi.classificacao_filme);

printf("\n Informe (0) se o filme está disponível e (1) caso contrário: ");
scanf("%d", &fi.esta_disponivel);

printf("\n Cliente %s", cli.nome);
printf("\n Idade: %d anos", cli.idade);
printf("\n Classificação do filme: %d anos", fi.classificacao_filme);
printf("\n Está disponível: %d", fi.esta_disponivel);
printf("\n Filme pode ser locado pelo cliente: %d", (fi.classificacao_filme) && (cli.idade >= fi.classificacao_filme));
printf("\n Anos restantes: %d", (cli.idade < fi.classificacao_filme) * (fi.classificacao_filme - cli.idade));
SetConsoleOutputCP(CPAGE_DEFAULT);

    
}