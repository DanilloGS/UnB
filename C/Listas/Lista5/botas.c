#include <stdio.h>
#include <stdlib.h>

typedef struct BotaLado
{
    int tamanho;
    struct BotaLado *prox;
} BotaLado;

typedef struct Bota
{
    struct BotaLado **valores;
} Bota;

void inicializa(Bota **b)
{
    (*b)->valores = malloc(2 * sizeof(BotaLado *));
    for (int i = 0; i < 2; i++)
    {
        (*b)->valores[i] = NULL;
    }
}

int inserirBuscar(char lado, int tamanho, Bota **b)
{
    int ladoNum = 0, par = 1;
    if (lado != 'E')
    {
        ladoNum = 1;
        par = 0;
    }

    BotaLado *nova = malloc(sizeof(BotaLado));
    nova->tamanho = tamanho;

    BotaLado *aux = (*b)->valores[par];
    if (aux != NULL)
    {
        while (aux != NULL)
        {
            if (aux->tamanho == nova->tamanho)
            {   
                printf("aux->tamanho: %d|nova->tamanho: %d\n", aux->tamanho, nova->tamanho);
                nova = NULL;
                free(nova);
                return 1;
            }
            aux = aux->prox;
        }
    }
    nova->prox = (*b)->valores[ladoNum];
    (*b)->valores[ladoNum] = nova;
    return 0;
}

int main()
{
    int tamanho, total;
    char lado;
    while (scanf("%d", &total) != EOF)
    {
        int pares = 0;
        Bota *b = NULL;
        b = malloc(sizeof(Bota));
        inicializa(&b);
        while (total--)
        {
            scanf("%d %c", &tamanho, &lado);
            inserirBuscar(lado, tamanho, &b)?pares++:pares;
        }
        printf("%d\n", pares);
        free(b);
    }
    return 0;
}
