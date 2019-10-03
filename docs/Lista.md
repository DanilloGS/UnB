# Listas Encadeadas

## O que é uma lista
- Estrutura de dados dinâmica que tem a capacidade de adicionar ou remover elementos sem mudar o lugar de outros elementos, não precisa definir um tamanho máximo com em vetores.

## Exemplos
        _____    _ 
        |1|2|...|N|
         | |->Proximo
         |-> Dado

* Um dado N está sempre ligado à um dado N+1

        struct celula{
            int dado;
            struct celula *prox; /* É o ponteiro que aponta para o próximo elemento que pode estar em qualquer lugar;*/
        }

        int v[5]; // Alocação automática
        int *v = malloc(5*sizeof(int)); // Alocação dinâmica
        v[i];
1. Lista sem cabeça: 
            
        celula *l = NULL;

2. Lista com cabeça: 

        celula *l = malloc(sizeof(celula)); 
           |-> prox = NULL;

* Ex.: Faça uma função para imprimir o conteúdo de uma lista encadeado.

        void print_vetor(int v[], int n){
            for(int i = 0; i < n ; i++){
                printf("%d", v[i]);
            }
        }

        void ptint_vetor(celula *l){
            for(celula*p = l-> prox; p!= NULL; p = p -> prox){
                printf("%d", p=>dado)
            }
        }

> O custo de um algoritimo é quanto tempo ele gasta em temos de entrada, quanto mais laços maior o valor de O(N^i). Se tiver só um ciclo é um algoritmo linear. Dependde de quantos Ciclos aninhados existem (Um for dentro de outro etc)

