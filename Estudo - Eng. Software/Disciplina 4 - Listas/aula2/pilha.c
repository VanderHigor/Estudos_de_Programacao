#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

struct No{
    int info;
    struct No* proximo;
};

struct pilha{
    struct No* topo;
    int tamanho;
};

struct pilha* criar(){
    struct pilha* nova_pilha = (struct pilha*) malloc(sizeof(struct pilha));
    if (nova_pilha != NULL) {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }
    return nova_pilha;
}

void empilhar(struct pilha* p, int item){
    assert (p != NULL);
    struct No* novo_no = (struct No*)malloc(sizeof(struct No));

    if(novo_no != NULL){
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}

int desempilhar(struct pilha* p){
    assert(p !=NULL);
    assert(p->topo != NULL);

    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--;
    free(aux);
    return elemento;
} 

int topo(struct pilha* p){
    assert(p != NULL);
    assert(p->topo != NULL);
    struct No* topo = p->topo;
    return topo->info
}

int tamanho(struct pilha* p){
    assert(p != NULL);
    return p->tamanho;
}

bool vazia(struct pilha* p){
    assert(p != NULL);
    return (p->topo == NULL);
}

void liberar(struct pilha* p){
    assert(p != NULL);
    while(vazia(p) == false){
        desempilhar(p);
    }
    free(p);
}

int main(){

    struct pilha* minha_pilha = criar();
    int num;

    printf("Digite os 5 numeros:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num);
        empilhar(minha_pilha, num);
    }

    printf("\n\n Sequencia invertida: ");
    for(int i = 0; i < 5; i++){
        printf("%d", desempilhar(minha_pilha));
    }

    return 0;  
}