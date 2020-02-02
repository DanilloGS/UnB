#ifndef LISTAENCADEADACIRCULAR_H
#define LISTAENCADEADACIRCULAR_H
    
    typedef struct Queue{
        int dado;
        struct Queue *prox;
    } Queue;
    
    Queue *newQueue(Queue *f);
    Queue *insert(Queue *f, int valueAdded);
    Queue *insertLast(Queue *f, int valueAdded);
    Queue *insertEmpty(Queue *f, int valueAdded);
    Queue *removeOne(Queue **f);
    int queueFull(Queue *f);
    int queueEmpty(Queue *f);
    int queueSize(Queue *f);
    void printQueue(Queue *f);

#endif