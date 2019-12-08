#include <stdio.h>
#include <malloc.h>

typedef struct tempR{
  int valor;
  struct tempR * ant;
  struct tempR * prox;
} Registro;

Registro * criarRegistro(int val){
   Registro* novo = (Registro*) malloc(sizeof(Registro));
   novo->prox = NULL;
   novo->ant = NULL;
   novo->valor = val;
   return novo;
}

int main(){
  Registro* primeiro = NULL;
  primeiro = criarRegistro(10);
  primeiro->prox = criarRegistro(12);
  primeiro->prox->ant = primeiro;
  Registro* temp;
  temp = primeiro;
  primeiro = criarRegistro(15);
  primeiro->prox = temp;
  primeiro->prox->ant = primeiro;
    
  printf("(*primeiro).prox->valor: %d\n",(*primeiro).prox->valor);
  printf("primeiro->prox->valor: %d\n",primeiro->prox->valor);
  printf("primeiro->prox->prox->valor: %d\n",primeiro->prox->prox->valor);
  printf("primeiro->valor: %d\n",primeiro->valor);
  printf("primeiro: %d\n", primeiro);  
  printf("primeiro->prox->ant: %d\n",primeiro->prox->ant);
  printf("primeiro->prox->prox: %d\n",primeiro->prox->prox);

  return 0;
}