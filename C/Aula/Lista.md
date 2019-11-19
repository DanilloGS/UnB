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

## Lista
        type def struc celula{
            int dado;
            struct celula *prox;
        } celula;

        celula *l = malloc(sizeof(celula));

        int buscaVetor(int v[], int n, int x){
            for(int = 0; i < n; i++){
                if(v[i]==x){
                    return i;
                }
            }
            return -1;
        }

- O custo para inserir um elemento numa lista é constante, e bem mais barato que num vetor, que é linear. Em contrapartidada, acessar um elementonum vetor O(1), enquanto num vetor é O(n).

        int removeVetor(int *v, int n){
            int elem = v[0];
            for(int i=1; i < n; i++){
                v[i-1] = v[i];
            }
            return elem;
        }

        int removeInicioLista(celula *l){
            celula *lixo = l->prox;
            l->prox = lixo->prox;
            int elem = lixo -> dado;
            free(lixo);
            return elem;
        }

        int removeListaN(celula *l, int i){ // i >= 1
            int elem, celula *p = l;
            for(int j = 0; j < i-1 && p != NULL; j++,p = p -> prox);
            if (p != NULL)
                return removeInicoLista(p);
        }