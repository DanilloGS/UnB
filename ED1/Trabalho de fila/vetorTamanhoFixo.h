#ifndef VETORTAMANHOFIXO_H
#define VETORTAMANHOFIXO_H
#define N 1000

    typedef struct{
    int queue[N];
    int p, u;
    } Queue;

    Queue *newQueue(Queue *f);
    Queue *insert(Queue *f, int valueAdded);
    Queue *removeOne(Queue **f);
    int queueFull(Queue *f);
    int queueEmpty(Queue *f);
    int queueSize(Queue *f);
    void printQueue(Queue *f);

#endif