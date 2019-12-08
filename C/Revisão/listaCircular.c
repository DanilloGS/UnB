#include<stdio.h>
#include<stdlib.h>
typedef struct lista{
    int dado;
    struct lista *prox;
}lista;

void criar(lista **l, int dado){
    if (*l == NULL){
        *l = malloc(sizeof(lista));             
        (*l)->dado = dado;
        (*l)->prox = *l;           
    }
    else
    {
        lista *nova = malloc(sizeof(lista));
        nova->dado = dado;
        lista *aux = *l;
        while (aux->prox != *l)
            aux = aux->prox;
        aux->prox = nova;
        nova->prox = *l;
    }
}
void printFila(lista *l){
    lista *aux = l;
    do {
        printf("%d ", aux->dado);
        aux=aux->prox;
    } while (aux!=l);
    printf("\n");
}
void swap(lista **a, lista **b){
    int aux = (*a)->dado;
    (*a)->dado = (*b)->dado;
    (*b)->dado = aux;    
}
void ordenar(lista **l){
    int inversao;
    do
    {
        inversao = 0;
        lista *aux = *l;
        do {
            if (aux->prox->dado < aux->dado){
                swap(&aux, &aux->prox);
                inversao = 1;
            }
            aux = aux->prox;
        } while (aux->prox!=*l);
    } while (inversao != 0);
}
void sequencialSearch(lista *l, int x){
    lista *aux = l;
    do {
        if (aux->dado == x){
            printf("Existe na lista\n");
            return;
        } 
        if (aux->dado > x){
            break;
        }
        aux = aux->prox;
    } while (aux!=l);
    printf("Não existe na lista\n");
}
void removerPilha(lista **l){
    lista *aux = *l;
    do {
        aux = aux->prox;
    } while (aux->prox != *l);
    aux->dado = 0;    
};
void removerX(lista **l, int x){
    lista *aux = *l;
    do {
        if (aux->prox->dado == x)
        {
            aux->prox = aux->prox->prox;
            return;
        }
        aux = aux->prox;
    } while (aux != l);
    printf("Não existe na lista\n");
};
int main()
{
    lista *l = NULL;
    criar(&l, 50);
    criar(&l, 11);
    criar(&l, 2);
    criar(&l, 17);
    criar(&l, 33);
    criar(&l, 24);
    printFila(l);
    ordenar(&l);
    printFila(l);
    sequencialSearch(l, 11);
    removerPilha(&l);
    removerPilha(&l);
    printFila(l);
    return 0;
}
