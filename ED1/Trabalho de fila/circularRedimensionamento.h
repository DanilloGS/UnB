#ifndef CIRCULARREDIMENSIONAMENTO_H
#define CIRCULARREDIMENSIONAMENTO_H

    typedef struct Queue{
    int N;
    int *queue;
    int p, u;
    } Queue;

    Queue *newQueue(Queue *f);
    Queue *insert(Queue *f, int valueAdded);
    int resizeQueue(Queue *f);
    Queue *removeOne(Queue **f);
    int queueFull(Queue *f);
    int queueEmpty(Queue *f);
    int queueSize(Queue *f);
    void printQueue(Queue *f);

#endif