#include <stdio.h>
#include <stdlib.h>
#include "vetorTamanhoFixo.h"

Queue *newQueue(Queue *f){
    f = malloc(sizeof(Queue));
    f->p = 0;
    f->u = 0;
    return f;
}

Queue *insert(Queue *f, int valueAdded){
    f->queue[f->u++] = valueAdded;  
    return f;
}

Queue *removeOne(Queue **f){
    printf("\nValor removido = %d\n", (*f)->queue[(*f)->p]);
    (*f)->queue[(*f)->p] = 0;
    (*f)->p+=1;
    return *f;
}

int queueFull(Queue *f){
    return f->u == N-1;
}

int queueEmpty(Queue *f){
    return f->p == f->u;
}

int queueSize(Queue *f){
    return f->u-f->p;
}

void printQueue(Queue *f){
    for (int i = 0; i < f->u; i++){
        if (f->queue[i]==0)
            printf(" xxx |");        
        else
            printf("  %d  |", f->queue[i]);
    }
    printf("\n");
    if (f->p == 0){
        printf("   p");
    }
    else
        for (int i = 0; i < f->p; i++)
        {
            printf("      ");
            if (i+1 == f->p)
                printf("   p");            
        }
    
    for (int i = 0; i < f->u-f->p; i++){
        if (i+1 == f->u-f->p){
			if (f->queue[i+1]>=10)
                printf(" ");
            if (f->queue[i+1]>=100)
                printf(" ");
            if (f->queue[i+1]>=1000)
                printf(" ");
            if (f->queue[i+1]>=10000)
                printf(" ");
            printf("u");    
        }
		else if(i+1 != f->u && i > 0){
			printf(" ");
            if (f->queue[i+1]>=10){
			    printf(" "); 
            }
        }
		printf("     ");
    }
    
    printf("\n");
}