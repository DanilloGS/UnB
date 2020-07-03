# Lista Encadeada
- É uma estrutura linear composta de nós. Esses nós podem não ocupar posições sequenciais na memória, assim sendo, cada nó deve saber onde está o próximo elemento.
- É extremamente vantajosa em relação a um vetor se houver a necessidade de manipular dados no mesmo.

```
     _______    _______    _______    _______    _______
    |D0|prox|->|D1|prox|->|D2|prox|->|D3|prox|->|D4|prox|->NULL
     -------    -------    -------    -------    ------- 
        Nó
```
- A estrutura de um nó.
  
```
    typedef struct celula {
        int dado;
        struct celula *prox;
    }
```

## Criação de listas encadeadas
- Utilizar um ponteiro para o primeiro elemento.
- Utilizar um nó cabeça para apontar para a próxima célula (Nó cabeça não possui dado).
  - O uso de um nó cabeça é útil para que estados da lista encadeada sejam mais consistentes.
  - Para acessar o primeiro elemento utliza-se:
  ```
    celula *le;
    le->prox;
  ```
### Inicializar uma nova célula
```
    void startList(celula **le) {
        *le = malloc(sizeof(celula));
        if(*le == NULL) exit(EXIT_FAILURE)
        (*le)->prox = NULL;
    }
```

## Impressão
```
    void printList(celula *le){
        if(le != Null) {
            printf("%d\n", le->dado);
            printLista(le->prox);
        }
    }
```
- **Complexidade:** O(n);
  
## Busca
```
    celula searchOnList(celula *le, int x) {
        if (le == NULL || le->dado == x)
            return le;
        else 
            return buscaLista(le->prox, x);
    }
```
- **Complexidade:** O(n);
  
## Remoção
### Remover Primeira Célula
```
    int removeFirst(celula *le) {
        celula *aux = le->prox;
        int dado = aux->dado;
        le->prox = aux->prox;
        free(aux);
        return dado;
    }
```
- **Complexidade:** O(1);

### Remover Célula X
```
    void removeN(celula *le, int x) {
        celula *p;
        for(p = le; p->prox != NULL && p->prox->dado != x; p = p->prox);
        if(p -> prox != NULL) {
            celula *aux = p->prox;
            p->prox = aux->prox;
            free(aux);
        }
    }
```
- **Complexidade:** O(n);
  
## Inserção
### Inserir em Posição Qualquer
```
    void insert(celula *le, int x) {
        celula *nova = malloc(sizeof(celula));
        nova->dado = x;
        if(nova == NULL) exit(EXIT_FAILURE);
        nova->prox = le->prox;
        le->prox = nova;
    }
```
- **Complexidade:** O(1);

### Inserir em Após Célula N
```
    void insertAfterN(celula *le, int n, int x) {
        celula *anterior, *proxima, *nova;
        nova = malloc(sizeof(celula));
        nova->dado = x;
        anterior = le;
        proxima = le->prox;
        while(proxima != NULL && proxima != n) {
            anterior = proxima;
            proxima = proxima->prox;
        }
        nova->prox = proxima;
        anterior->prox = nova;    
    } 
```
- **Complexidade:** O(n);

## Destruir Lista
```
    void destroy(celula *le) {
        while(le->prox != NULL)
            removeFirst(le);
        free(le);
    }
```