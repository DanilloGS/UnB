#include <stdio.h>
#include <stdlib.h>

#define N = 10;

typedef struct pilha{
    int dado[N];
    int topo;
} pilha;

void criarPilha(pilha *p);
void empilha(pilha *p, int x);
int pilhaCheia(pilha *p);
int remover(pilha *p);
int pilhaVazia(pilha *p);
int printPilha(pilha *p);

int main(int argc, char const *argv[]){
    pilha *l;
    criarPilha(l);
    empilha(l, 1);

    printPilha(l);
    return 0;
}

void criarPilha(pilha *p){
    p->topo = 0;
}
void empilha(pilha *p, int x){
    p->dado[p->topo++] = x;
}
int pilhaCheia(pilha *p){
    return p->topo == N;
}
int remover(pilha*p){
    return p->dado[p->topo--]; 
}
int pilhaVazia(pilha *p){
    return p->topo <= 0;
}
int printPilha(pilha *p){
    for (int i = 0; i < p -> topo; i++){
        printf("%d\n", p -> dado[i]);
    }
}