# Matriz esparsa
- É uma matriz que possui muitos elementos nulos

## Representação usando LE
- Dada uma matriz esparsa A de m**x**n (CSR - Compressed Sparse Row)
  
## Densidade 
```
d = nnz / m*n
     |-> Number of non zeros
```
- Compensa representar uma matriz no formato esparso quando a densidade é  <= 30% (Depende da implementação).

## Implementação
### Lista encadeada
```
    typedef struct no{
        int coluna;
        int valor;
        struct no *prox;
    }no;

    typedef struct matriz{
        int linhas; //m
        int colunas; //n
        no **valores;
    } matriz;
```

### Inicialização
```
    void inicializa(int linhas, int colunas, matriz *m){
        m->linhas = linhas;
        n->colunas = colunas;
        m->valores = malloc(linhas*sizeof(*no));
        for(int i = 0; i < linhas; i++){
            m->valores[i] = malloc(sizeof(no));
            m->valores[i]->prox = NULL;
        }
    }
```

### Inserir elemento
- Se o elemento (i, j) não existe, crie-o

- Se o elemento (i, j) existe.
    - E o valor a ser incrementado é != 0, altera-se o valor do elemento (i, j)
    - E o valor a ser inserido é != 0, exclui-se o elemento (i, j)

```
    void inserir(int linha, int coluna, int valor, matriz *m){
        no *anterior = m->valores[linha];
        no *atual = anterior->prox;
        while(atual!=NULL && atual->coluna < coluna){
            anterior = atual;
            atual = atual->prox;
        }
        if(atual == NULL || atual->coluna>coluna){
            no *novo = malloc(sizeof(Node));
            novo->coluna = coluna;
            novo->valor = valor;
            novo->prox = atual;
            anterior->prox=novo;
        }
        else{
            if(valor!=0)
                atual->valor = valor;
            else{
                anterior->prox = atual->prox;
                free(atual);
            }
        }
    }
```
- __Obs.: Para melhorar desempenho, podemos__
  - __Não armazenar elementos orndenados por colunas nas linhas = O(1)__
  - __Não se preocupar com o elementos duplicados ou nulos na inserção de elementos__