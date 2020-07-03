#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *enfileira (celula *f, int x) {
    celula *nova = malloc(sizeof(celula));
    if (nova == NULL)
        return NULL;
    nova->dado = x;
    nova->prox = f->prox;
    f->prox = nova; 
    return f->prox;
}

// celula *startFila () {
//     celula *p = malloc(sizeof(celula));
//     p->prox = p;
//     return p;
// }
// printFila (celula *p) {
//     celula *l;
//     for (l = p->prox; l != p; l = l->prox) {
//         printf("%d ", l->dado);
//     }
//     printf("\n");
// }
// int main() {
//     celula *p = startFila();
//     enfileira(p, 1);
//     enfileira(p, 2);
//     enfileira(p, 3);
//     enfileira(p, 4);
//     enfileira(p, 5);
//     printFila(p);
//     return 0;
// }
