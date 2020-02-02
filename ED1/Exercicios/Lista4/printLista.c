#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le) {
    celula *p;
    for ( p = le->prox; p != NULL; p=p->prox)
        printf("%d -> ", p->dado);
    printf("NULL\n");
    return le;    
}

void imprime_rec (celula *le) {
    celula *aux = le->prox;
    if (aux == NULL) {
        printf("NULL\n");
    }
    else {
        printf("%d -> ", aux->dado);
        imprime_rec(aux);
    }
}