#include <stdio.h>
#include <stdlib.h>

typedef struct Deck
{
    struct Carta *inicio;
    struct Carta *fim;
} Deck;

typedef struct Carta
{
    int valor;
    struct Carta *prox;
} Carta;

void inicializar(Deck **d)
{
    *d = malloc(sizeof(Deck));
    (*d)->inicio = NULL;
    (*d)->fim = NULL;
}

void adicionar(Deck **d, int carta)
{
    Carta *nova = malloc(sizeof(Carta));
    nova->valor = carta;
    nova->prox = NULL;
    if ((*d)->inicio == NULL)
    {
        (*d)->inicio = nova;
        (*d)->fim = nova;
    }
    else
    {
        (*d)->fim->prox = nova;
        (*d)->fim = nova;
    }
}

int remover(Deck *d)
{
    int carta;
    Carta *atual;

    atual = d->inicio;
    carta = atual->valor;

    d->inicio = atual->prox;
    if (d->inicio == NULL)
        d->fim = NULL;

    atual = NULL;
    return carta;
}

int main()
{
    Deck *d = NULL;
    int count;
    scanf("%d", &count);
    inicializar(&d);
    while (1)
    {
        for (int i = 1; i < count + 1; i++)
            adicionar(&d, i);

        printf("Cartas descartadas:");

        for (int i = count; i > 1; i--)
        {
            printf(" %d", remover(d));
            adicionar(&d, remover(d));
            if (i > 2)
                printf(",");
        }

        if (d->inicio != NULL)
        {
            printf("\nCarta restante: %d\n", remover(d));
            break;
        }
    }

    return 0;
}
