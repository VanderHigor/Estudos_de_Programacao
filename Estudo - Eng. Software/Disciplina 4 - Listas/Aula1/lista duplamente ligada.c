#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <locale.h>
#include <windows.h>

struct No{
    int info;
    struct No* anterior;
    struct No* proximo;
}; 

struct ListaDupla{
    struct No* inicio;
    struct No* fim;
    int tamanho;
};

struct ListaDupla* criar(){
    struct ListaDupla* nova_lista = (struct ListaDupla*) malloc(sizeof(struct ListaDupla));
    if(nova_lista !=NULL){
        nova_lista->inicio = NULL;
        nova_lista->fim = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

bool vazia(struct ListaDupla* li){
    assert(li != NULL);
    if(li->inicio == NULL){
        return true;
    }else{
        return false;
    }
}

int tamanho(struct ListaDupla* li){
    assert( li != NULL);
    return li->tamanho;
}

void liberar(struct ListaDupla* li){
    while(vazia(li) == false){
        remover(li,0);  
    }
    free(li);
}

void inserir(struct ListaDupla* li, int pos, int item){
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);

    struct No* novo_no = (struct No*) malloc(sizeof(struct ListaDupla));
    novo_no->info = item;
    if(pos == 0){
        novo_no->anterior = NULL;
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
        if(li->fim = NULL){
            li->fim = novo_no
        }
    }else if(pos == li->tamanho){
        novo_no->anterior = li->fim;
        novo_no->proximo = NULL;
        li->fim->proximo = novo_no;
        li->fim = novo_no;
    }else {
        struct No* aux = li->inicio;
        for(int i; i < pos - 1; i++){
            aux = aux->proximo;
        }
        novo_no->anterior = aux;
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no
    }
    li->tamanho++;
}

int remover(struct ListaDupla* li, int pos){
    assert(vazia(li) == false);
    assert(pos >= 0 && pos < li->tamanho);
    struct No* aux = NULL;

    if(pos == 0){
        aux = li->inicio;
        li->inicio = aux->proximo
        if(li->inicio == NULL){
            li->fim = NULL;
        }else{
            li->inicio->anterior = NULL;
        }
    }else if(pos = li->tamanho -1){
        aux = li->fim;
        li->fim = aux->anterior;
        li->fim->proximo = NULL;
    }else{
        struct No* ant = NULL;
        aux = li->inicio;
        for( int i = 0; i < pos; i++){
            ant = aux;
            aux = aux->proximo
        }
        ant->proximo = aux->proximo;
        aux->proximo->anterior = ant;
    }
    int elemento = aux->info;
    li->tamanho--;
    free(aux);
    return elemento;
}

int obter(struct ListaDupla* li, int pos){
    assert (pos != NULL);
    assert(pos >= 0 && pos < li->tamanho);
    struct No* aux;

    if(pos == 0){
        aux = li->inicio;
    }else if(pos == li->tamanho){
        aux = li->fim;
    }else(
        aux = li->inicio;
        for(int i = 0; i < pos; i++){
            aux = aux->proximo
        }
    )
    return aux->info;
}

int main(){

    return 0;
}