#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha{
    char *frase;
    int topo;
} Pilha;

void novaPilha(Pilha *p, int size){
    p->frase = malloc((size)*sizeof(char)+1);
    p->topo = size;
}
void empilhar (Pilha *p){
    scanf("%s", p->frase);  
}
int comparar(Pilha *p){
    for (int i = 0, j = p->topo-1; i <= p->topo-1; i++, j--)
        if (p->frase[i]!=p->frase[j])
            return 0;
    return 1;
}
int destruir(Pilha *p){
    free(p->frase);    
}
int main(int argc, char const *argv[])
{
    int size;
    Pilha *p = NULL;
    p = malloc(sizeof(Pilha));
    scanf("%d", &size);
    novaPilha(p, size);
    empilhar(p);
    comparar(p)?printf("1\n"):printf("0\n");
    destruir(p);
    free(p);
    return 0;
}
