#include <stdio.h>
#include <stdlib.h>
typedef struct lista
{
    int dado;
    struct lista *prox;
} lista;

void criar(lista **l, int dado)
{
    if (*l == NULL)
    {
        *l = malloc(sizeof(lista));
        (*l)->dado = dado;
        (*l)->prox = NULL;
    }
    else
    {
        lista *nova = malloc(sizeof(lista));
        nova->dado = dado;
        lista *aux = *l;
        while (aux->prox != NULL)
            aux = aux->prox;
        aux->prox = nova;
        nova->prox = NULL;
    }
}
void printFila(lista *l)
{
    lista *aux = l;
    while (aux != NULL)
    {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}
void swap(lista **a, lista **b)
{
    int aux = (*a)->dado;
    (*a)->dado = (*b)->dado;
    (*b)->dado = aux;
}
void sort(lista **l)
{
    int inversao;
    do
    {
        inversao = 0;
        lista *aux = *l;
        while (aux->prox != NULL)
        {
            if (aux->prox->dado < aux->dado)
            {
                swap(&aux, &aux->prox);
                inversao = 1;
            }
            aux = aux->prox;
        }
    } while (inversao != 0);
}
void sequencialSearch(lista *l, int x)
{
    lista *aux = l;
    while (aux != NULL)
    {
        if (aux->dado == x)
        {
            printf("Existe na lista\n");
            return;
        }
        if (aux->dado > x)
            break;
        aux = aux->prox;
    }
    printf("Não existe na lista\n");
}
void removerPilha(lista **l)
{
    lista *aux = *l;
    while (aux->prox->prox != NULL)
        aux = aux->prox;
    free(aux->prox);
    aux->prox = NULL;
};
void removerFila(lista **l)
{
    *l = (*l)->prox;
};
void removerX(lista **l, int x)
{
    lista *aux = *l;
    while (aux != NULL)
    {
        if (aux->prox != NULL)
        {
            if (aux->prox->dado == x)
            {
                aux->prox = aux->prox->prox;
                return;
            }
        }
        else if (aux->dado == x){
            aux = NULL;
            return;
        }
        aux = aux->prox;
    }
    printf("Não existe na lista\n");
};
int main()
{
    lista *l = NULL;
    criar(&l, 6);
    criar(&l, 5);
    criar(&l, 4);
    criar(&l, 3);
    criar(&l, 2);
    criar(&l, 1);
    printFila(l);
    sort(&l);
    removerX(&l, 3);
    removerX(&l, 5);
    printFila(l);
    return 0;
}
