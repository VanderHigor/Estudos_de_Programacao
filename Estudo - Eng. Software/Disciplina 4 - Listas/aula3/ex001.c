#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct cadastroCliente{
    char *name [30], *nascimento [10], *cpf [14];
    struct cadastroCliente* proximo;
    struct cadastroCliente* anterior;
}cadastro;

typedef struct numeroDeRegistro{
    cadastro* inicio;
    cadastro* fim;
    int quantidade;
}registros;

registros* criar(){
    registros* novoRegistro = (registros*) malloc(sizeof(registros));
    if(novoRegistro != NULL){
        novoRegistro->inicio = NULL;
        novoRegistro->fim = NULL;
        novoRegistro->quantidade = 0;
    }
    return novoRegistro;
}

bool vazia(registros* rgto){
    assert(rgto != NULL);
    if(rgto->inicio == NULL){
        return true;
    }else{
        return false;
    }
}

void inserir(registros* rgto, int pos, char *nome, char *nascimento, char *cpf){
    assert(rgto != NULL);
} 

int main(void){
    // Your code here!
    
}