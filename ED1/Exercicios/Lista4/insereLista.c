#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x) {
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = le->prox;
    le->prox = nova;
}

void insere_antes(celula *le, int x, int y) {
    celula *anterior, *proxima, *nova;
    anterior = le;
    proxima = anterior->prox;
    while (proxima != NULL && proxima->dado != y) {
        anterior = proxima;
        proxima = proxima->prox;
    }
    nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = proxima;
    anterior->prox = nova;
}