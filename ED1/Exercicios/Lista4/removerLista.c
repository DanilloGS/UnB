#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p) {
    if (p->prox != NULL) {
        celula *aux = p->prox;
        int dado = p->dado;
        p->prox = aux->prox;
        free(aux);
        return dado;
    }
}

void remove_elemento (celula *le, int x) {
    celula *anterior, *proximo;
    anterior = le;
    proximo = anterior->prox;
    while (proximo != NULL){
        if (proximo->dado == x) {
            anterior->prox = proximo->prox;    
            free(proximo);
            return;
        }
        anterior = proximo;
        proximo = proximo->prox;
    }
}

void remove_todos_elementos (celula *le, int x) {
    celula *anterior, *proxima, *aux;
    anterior = le;
    proxima = anterior->prox;
    while (proxima != NULL) {
        if (proxima->dado == x) {
            aux = proxima;
            anterior->prox = proxima->prox;
            proxima = proxima->prox;
            free(aux);
        }  
        else {        
            anterior = proxima;
            proxima = proxima->prox;
        }
    }
}