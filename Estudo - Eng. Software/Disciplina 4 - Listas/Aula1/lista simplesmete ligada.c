#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

struct No{
    int info;
    struct No* proximo;
};

struct Lista{
    struct No* inicio;
    int tamanho;
};

struct Lista* criar(){
    struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista));
    if(nova_lista != NULL){
        nova_lista->inicio = NULL;
        nova_lista->tamanho =0;
    }
    return nova_lista;
}

bool vazia(struct Lista* li){
    assert(li != NULL);
    if(li->inicio == NULL){
        return true;
    }else{
        return false;
    }
}

void inserir(struct Lista* li,int pos, int item){
    assert(li != NULL);
    assert(pos >=0 && pos <= li->tamanho);
    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    novo_no->info = item;
    if(pos == 0){
        novo_no->proximo = li->inicio;  
        li->inicio = novo_no;
    }else{
        struct No* aux = li->inicio;
        for(int i = 0; i < pos - 1; i++){
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++;
}

void imprimir(struct Lista* li){
    assert(li != NULL);
    printf("\n Lista: ");
    struct No* aux = li->inicio;
    for(int i = 0; i < li->tamanho; i++){
        printf("\n Posição[%d] Valor [%d] ", i, aux->info);    
        aux = aux->proximo;
    }
}

int tamanho(struct Lista* li){
    assert( li != NULL);
    return li->tamanho;
}

int obter(struct Lista* li, int pos){
    assert(li != NULL);
    if( pos >= 0 && pos < li->tamanho){
        struct No* aux = li->inicio;
    for(int i = 0; i < pos; i++){
        aux = aux->proximo;
    }
    return aux->info;
    }else{
        printf("\n Ops... Esse item não está na lista!");
    }  
}

int remover(struct Lista* li, int pos){
    assert(vazia(li) == false);

    if(pos >= 0 && pos < li->tamanho){
        struct No* ant = NULL;
        struct No* aux = li->inicio;
        for(int i = 0; i < pos; i++){
            ant = aux;
            aux = aux->proximo;
        } 
        if(ant == NULL){
            li->inicio = aux->proximo;
        }else{
            ant->proximo = aux->proximo;
        }

        int elemento = aux->info;
        li->tamanho--;
        free(aux);
        printf("\n O item %d foi removido!", elemento);
        return elemento;
    }else{
        printf("\n Ops... Esse item não está na lista!");
    }
}

void liberar(struct Lista* li){
    while(vazia(li) == false){
        remover(li,0);  
    }
    free(li);
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    struct Lista* minha_lista = criar();
    int opcao, valorAdd, valorRmv, valorBuca;
    inserir(minha_lista,0,5);
    inserir(minha_lista,0,3);
    inserir(minha_lista,2,6);
    inserir(minha_lista,1,0);
    inserir(minha_lista,4,7);
    inserir(minha_lista,1,2);
    inserir(minha_lista,5,6);
    inserir(minha_lista,3,4);
    do{
        printf("\n === OPÇÕES DA LISTA ===");
        printf("\n 1 - Inserir item a lista\n 2 - Remover item da lista\n 3 - Buscar item da lista\n 4 - Tamanho da lista\n 5 - Liberar lista\n 6- Sair");
        printf("\n Opção: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("\n Digite o Valor que deseja inserir: ");
                scanf("%d", &valorAdd);
                inserir(minha_lista,0,valorAdd);
                printf("\n O valor %d foi adicionado", valorAdd);
                break;
            case 2:
                imprimir(minha_lista);
                printf("\n Digite a poição do valor que deseja remover: ");
                scanf("%d", &valorRmv);
                remover(minha_lista, valorRmv);
                break;
            case 3:
                imprimir(minha_lista);
                printf("\n Digite a poição do valor que deseja obter: ");
                scanf("%d", &valorBuca);
                printf("\n O Valor obtido foi: %d", obter(minha_lista, valorBuca));
                break;
            case 4:
                imprimir(minha_lista);
                printf("\n Valores armazenados na lista: %d", tamanho(minha_lista));
                break;
            case 5:
                liberar(minha_lista);
                break;
            case 6:
                printf("\n Saindo...");
                break;
            default:
                printf("\n opção inválida!");
        }
    }while(opcao != 6);
    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}