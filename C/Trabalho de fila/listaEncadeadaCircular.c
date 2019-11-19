#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaCircular.h"

Queue *newQueue(Queue *f){
	f = malloc(sizeof(Queue));
    f->prox = NULL;
    return f;
}
Queue *insert(Queue *f, int valueAdded){
	if (f->prox == NULL){
		f->dado = valueAdded;
		f->prox = f;
		return f;
	}
	Queue *aux = malloc(sizeof(Queue));
	aux->dado = valueAdded;
	aux->prox = f->prox;
	f->prox = aux;
	f = aux;

	return f;
}
Queue *removeOne(Queue **f)
{
    printf("\nValor removido: %d\n", (*f)->prox->dado);
    (*f)->prox->dado = 0;
    // *f = (*f)->prox; 
    (*f)->prox = (*f)->prox->prox;
    return *f;
}
int queueFull(Queue *f){
    // Nunca fica cheia
    return 0;
}
int queueEmpty(Queue *f){
    return f->prox == NULL;
}
int queueSize(Queue *f){
    struct Queue *p;
	int count = 0;
	p = f->prox;
	do
	{   
        if (p->dado != 0)
            count++;       
		p = p->prox;
	} while (p != f->prox);
    if (count == 0)
        f->prox = NULL;
    return count;
}
void printQueue(Queue *f){
	Queue *p;
    int count = 0;
	p = f->prox;
	do
	{
        count++;
		printf("  %d  |", p->dado);
		p = p->prox;
	} while (p != f->prox);
	printf("\n");
	printf("   p");	
    for (int i = 0; i < count; i++){
		if (i+1 == count)
			printf("u");
		else if(i+1 != count && i > 0)
			printf(" ");
		printf("     ");
	}
}