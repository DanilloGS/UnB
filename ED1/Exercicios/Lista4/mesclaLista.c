#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3) {
    celula *p, *q;
    p = l1->prox;
    q = l2->prox;
    while (p != NULL && q != NULL){
        if (q->dado < p->dado){
            l3->prox = q;
            q = q->prox;
            l3 = l3->prox;
        }
        else {
            l3->prox = p;
            p = p->prox;
            l3 = l3->prox;
        }
    }
    if (p == NULL) {
        l3->prox = q;
        l3 = l3->prox;
    }
    else {
        l3->prox = p;
        p = p->prox;
        l3 = l3->prox;
    }
}