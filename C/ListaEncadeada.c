#include <stdio.h>
#include <stdlib.h>
typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void insere(int x, celula *p);
int printCelula(celula *p);
void buscar(int x, celula *p);
void buscaEInsere(int x, int y, celula *p);
void destruir(int x, celula *p);

int main(int argc, char const *argv[]){
    celula first, last;
    celula *l = &first, *aux = l;

    first.dado = 10;
    last.dado = 100;
    first.prox = &last;
    last.prox = NULL;
    
    insere(2,l);
    insere(8,l->prox);
    insere(7,l->prox->prox);
    puts("Antes");
    printCelula(l);

    puts("Depois");
    buscaEInsere(999, 7, l);
    printCelula(l);
    
    return 0;
}
void insere(int x, celula *p){
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->dado = x;
    nova->prox = p->prox;
    p->prox = nova;
}
int printCelula(celula *p){
    printf("%d\n", p->dado);
    if (p->prox!=NULL){
        return printCelula(p->prox);
    }
}
void buscar(int x, celula *p){
    celula *aux;
    int bool = 0;
    aux = p;
    while (aux!=NULL && aux->dado!=x){
        aux = aux->prox;
        if (aux->dado == x){
            printf("Existe na lista\n");
            bool++;
            break;
        }
    }
    if (bool == 0){
        printf("Não existe existe na lista\n");
    }
    
}
void destruir(int x, celula *p){
    celula *before, *next;
    before = p;
    next = p->prox;
    while (next->prox != NULL && next->dado != x){
        before = next;
        next = next->prox;
    }
    if (before != NULL){
        before->prox = next->prox;
        free(next);
    }
    
}
void buscaEInsere(int x, int y, celula *le){
   celula *p, *q, *nova;
   nova = malloc (sizeof (celula));
   nova->dado = x;
   p = le;
   q = le->prox;
   while (q != NULL && q->dado != y) {
      p = q;
      q = q->prox;
   }
   nova->prox = q;
   p->prox = nova;
}