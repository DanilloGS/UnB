#include <stdio.h>
#include <stdlib.h>
#include "circularRedimensionamento.h"

Queue *newQueue(Queue *f)
{
    f = malloc(sizeof(Queue));
    f->p = 0;
    f->u = 0;
    f->N = 1000;
    f->queue = calloc(f->N, sizeof(int));
    return f;
}
Queue *insert(Queue *f, int valueAdded)
{
    f->queue[f->u] = valueAdded;
    f->u = (f->u + 1) % f->N;
    return f;
}
int resizeQueue(Queue *f)
{
    int j;
    f->queue = (int *)realloc(f->queue, 2 * f->N * sizeof(int));
    if (f->p > f->u)
    {
        if (f->N - f->p > f->u)
        {
            for (int i = 0, j = f->N; i < f->u; i++, j++)
                f->queue[j] = f->queue[i];
            f->u += f->N;
        }
        else
        {
            for (int i = f->N - 1, j = 2 * f->N - 1; i >= f->p; i--, j--)
                f->queue[j] = f->queue[i];
            f->p = j + 1;
        }
    }
    f->N = 2 * f->N;
    return 1;
}
Queue *removeOne(Queue **f)
{
    ;
    printf("Valor removido = %d\n", (*f)->queue[(*f)->p]);
    (*f)->queue[(*f)->p] = 0;
    (*f)->p += 1;
    return (*f);
}
int queueFull(Queue *f)
{
    return f->u == f->N - 1;
}
int queueEmpty(Queue *f)
{
    return f->p == f->u;
}
int queueSize(Queue *f)
{
    return f->u - f->p;
}
void printQueue(Queue *f)
{
    for (int i = 0; i < f->u; i++)
    {
        if (f->queue[i] == 0)
            printf(" xxx |");
        else
            printf("  %d  |", f->queue[i]);
    }
    printf("\n");
    if (f->p == 0)
    {
        printf("   p");
    }
    else
        for (int i = 0; i < f->p; i++)
        {
            printf("      ");
            if (i + 1 == f->p)
                printf("   p");
        }

    for (int i = 0; i < f->u - f->p; i++)
    {
        if (i + 1 == f->u - f->p)
        {
            if (f->queue[i + 1] >= 10)
                printf(" ");
            if (f->queue[i + 1] >= 100)
                printf(" ");
            if (f->queue[i + 1] >= 1000)
                printf(" ");
            if (f->queue[i + 1] >= 10000)
                printf(" ");
            printf("u");
        }
        else if (i + 1 != f->u && i > 0)
        {
            printf(" ");
            if (f->queue[i + 1] >= 10)
            {
                printf(" ");
            }
        }
        printf("     ");
    }

    printf("\n");
}