#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2) {
    celula *p = l->prox;
    while (p != NULL){
        if (p->dado%2 != 0) {
            l1->prox = p;
            p = p->prox;
            l1->prox->prox = NULL; 
            l1 = l1->prox; 
        }
        else {
            l2->prox = p;
            p = p->prox;
            l2->prox->prox = NULL; 
            l2 = l2->prox; 
        }
        
    }
    
}