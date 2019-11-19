#include <stdio.h>
#include <stdlib.h>

#define N 101

typedef struct Pilha{
    int dado[N];
    int topo;
} Pilha;

void novaPilha(Pilha *p){
    p->topo = -1;
}

void empilhar(Pilha *p, int data){
    if (p->topo == N - 1)
        printf("Pilha Cheia\n");
    else{
        p->dado[++p->topo] = data;
    }
}
void desempilhar(Pilha *p){
    if (p->topo == 0 && p->dado[p->topo] == 0){
        printf("Pilha Vazia\n");
    }
    else{
        --p->topo;
    }
}
void printPilha(Pilha *p){
    printf("Normal               Reverse\n");
    printf("-------              -------\n");
    for (int i = p->topo, j = 0; i >= -1, j <= p->topo; i--, j++)
        printf("|  %d  |              |  %d  |\n", p->dado[i], p->dado[j]);
    printf("-------              -------\n");
}

int main(){
    Pilha *p = malloc(sizeof(Pilha));
    novaPilha(p);

    int count, dadoNovo;
    scanf("%d", &count);
    printf("Empilhando:\n");
    for (int i = 0; i < count; i++){
        scanf("%d", &dadoNovo);
        empilhar(p, dadoNovo);
        printf("i=%d: %d\n", i, p->dado[i]);
    }
    scanf("%d", &count);
    for (int i = 0; i < count; i++){   
        desempilhar(p);
    }    
    printf("\nImprimindo:\n");
    printPilha(p);
    return 0;
}
