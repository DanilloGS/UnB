#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    int dado;
    int *prox;
} Lista;

void newLista(Lista *l){
    l->dado = 0;
    l->prox = NULL;
}

void addToEmpty(Lista *l, int value){
    l->dado = value;
}

void pop(Lista *l){
    Lista *before, *after;
    before = l;
    after = l->prox;
    while (after->prox!=NULL){
        before = after;
        after = after->prox;
    }
    before = NULL;
}

void append(Lista *l, int value){
    Lista *nova, *before, *after;
    before = l;
    after = l->prox;
    nova = malloc(sizeof(Lista));
    while (after->prox != NULL){
        before = after;
        after = after->prox;
    }
    nova->prox = after;
    before->prox = nova;
}
void printLista(Lista *l){
    Lista *aux = l;
    while (aux->prox!=NULL)
    {
        printf("%d", aux->dado);
        aux=aux->prox;
    }
}

int main(){
    Lista *l = malloc(sizeof(Lista));
    newLista(l);
    append(l, 2);
    append(l, 2);
    append(l, 2);
    append(l, 2);
    printLista(l);
    
    return 0;
}
