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
        } // Custo: O(n) - (linear)

        void print_lista(celula *l){
            for(celula *p = l; p!= NULL; p = p -> prox){
                printf("%d", p=>dado)
            }
        } // Custo: O(n) - (linear)

        // Matrizes
        M[n][n]
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                printf("%d", M[i][j]);
        // Custo: O(n²)

        char *str=malloc(n);    
        for(int i=0; i<n; i++)  
            scanf("%s", str);   
        // Custo: O(n²)

        Multiplicação de matrizes:

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                for(k=0; k<n; k++)
                    c[i][j]+=a[i][k]*b[k][j];
        // 'Custo: O(n³)

> O custo de um algoritimo é quanto tempo ele gasta em temos de entrada, quanto mais laços maior o valor de O(N^i). Se tiver só um ciclo é um algoritmo linear. Dependde de quantos Ciclos aninhados existem (Um for dentro de outro etc)

