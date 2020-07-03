#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
int *dados;
int N, topo;
} pilha;

int desempilha (pilha *p, int *y) {
    if (p->topo == 0) 
        return 0;
    p->topo -= 1;
    *y = p->dados[p->topo];
    return 1;
}