#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int valor;
    int identificador;
    int proxima;
    celula *prox;
} celula;

void busca_e_insere (int x, int y, celula *le){
   celula *anterior, *atual, *nova;
   nova = malloc (sizeof (celula));
   nova->valor = x;
   anterior = le;
   atual = le->prox;
   while (atual != NULL && atual-> != y) {
      anterior = atual;
      atual = atual->prox;
   }
   nova->prox = atual;
   anterior->prox = nova;
}
int main(int argc, char const *argv[])
{
    celula l;
    int identificador, valor, proxima, count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++){
        
    }
    return 0;
}
