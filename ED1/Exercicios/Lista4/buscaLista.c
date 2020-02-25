#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x) {
    celula *p;
    for (p = le; p != NULL && p->dado != x; p = p->prox);
    return p;
}

celula *busca_rec (celula *le, int x) {
    celula *aux = le->prox;
    if (aux == NULL || aux->dado == x)
        return aux;
    else
        return busca_rec(aux, x);
}