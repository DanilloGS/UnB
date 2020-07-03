# Filas
- Estrutura do tipo **FiFo** (First in, First out).

## Fila com Vetor
### Declaração
```
    typedef struct fila {
        int *dados;
        int p, u, N;
    } fila;
```
### Inicialização
```
    void criaFila(fila *f) {
        f->N = 10;
        f->dados = malloc(f->N*sizeof(int));
        f->p = 0;
        f->u = 0;
    }
```
### Fila Cheia
```
        int filaCheia(fila *f){
            return f->u == N;
        }
```
### Inserir
```
    void inserir(fila *f, int x) {
        if (filaCheia(f)) {
            f->N*=2;
            f->dados = realloc(f->dados,f->N*sizeof(int));
        }
        f->dados[f->u] = x;
        f->u++;
    }
```
### Remover
```
    int remover(fila *f, int *y){
        if(f->p == f->u) 
            return 0;
        *y = f->dados[f->p];
        f->p++;
        return 1;
    }
```
### Destruir
```
    void destruir(fila *f) {
        free(f->dados);
    }
```

## Fila Circular com Vetor
### Declaração
```
    typedef struct fila {
        int *dados;
        int p, u, N;
    } fila;
```
### Inicialização
```
    void criaFila(fila *f) {
        f->N = 10;
        f->dados = malloc(f->N*sizeof(int));
        f->p = 0;
        f->u = 0;
    }
```
### Inserir
```
    int inserir(fila *f, int x) {
        f->dados[f->u] = x;
        f->u = (f->u+1)%f->N;
        return 1;
    }
```
### Remover
```
    int remover(fila *f, int *y) {
        if(f->p == f->u) 
            return 0;
        *y = f->dados[f->p];
        f->p = (f->p+1)%f->N;
        return 1;
    }
```
### Destruir
```
    void destruir(fila *f) {
        free(f->dados);
    }
```

## Fila Circular com Lista Encadeada
### Declaração
```
    typedef struct celula {
        int dado;
        struct celula *prox;
    } celula;
```
### Inicialização
```
    celula *criaFila() {
        celula *novo = malloc(sizeof(celula));
        novo->prox = novo;
        return novo;
    }
```
### Inserir
```
    void inserir(celula *f, int x) {
        celula *novo = malloc(sizeof(celula));
        novo->dado = x;
        novo->prox = f->prox;
        f->prox = novo;
    }
```
### Remover
```
    int remover(fila *f, int *y) {
        if(f->prox == f) {
            return 0;
        }
        celula *lixo = f->prox;
        *y = lixo->dado;
        f->prox = lixo->prox;
        free(lixo);
        return 1;
    }
```
### Destruir
```
    void destruir(celula *f) {
        int lixo;
        while(remover(f, &lixo));
        free(f);
    }
```