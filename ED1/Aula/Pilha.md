# Pilhas
- Estrutura do tipo **LiFo** (Last in, First out).
```
    6 -                  |0|                    
    5 - |0|              |0|               |0|
    4 - |0|              |0|               |0|
    3 - |0|              |0|               |0|
    2 - |0|              |0|               |0|    
    1 - |0|  Empilha(2)  |2| Desempilha(2) |0|    
    0 - |1|              |1|               |1| Return(1)

    X = Topo
```
## Pilha com Vetores
### Declaração
```
    typedef struct pilha {
        int *dados;
        int topo;
        int N
    } pilha;
```
### Criação da pilha
```
    void criaPilha(pilha *p) {
        p->N = 10;
        p->dado = malloc(p->N*sizeof(int));
        p->topo = 0;
    }
```
### Pilha cheia
```
    int pilhaCheia(pilha *p) {
        return p->topo == p->N;
    }
```
### Pilha vazia
```
    int pilhaVazia(pilha *p) {
        return !p->topo
    }
```
### Empilha
```
    void empilha(pilha *p, int x) {
        if (pilhaCheia(p)) {
            p->dados = realloc(p->dados, 2*p->N*sizeof(int));
            p->N *= 2; 
        }
        if (p->dados == NULL) 
            exit(EXITFAILURE);
        p->dado[p->topo] = x;
        p->topo++;
    }
```
### Desempilha 
```
    int desempilha (pilha *p) {
        if(pilhaVazia(p))
            return p->dado[p->topo];
        else {
            p->topo--;
            return p->dado[p->topo];
        }
    }
```
### Destruir
```
    int destruirPilha(pilha *p) {
        free(p->dados);
    }
```

## Pilha com Lista Encadeada
### Declaração
```
    typedef struct pilha {
        int dado;
        struct pilha *anterior;
    } pilha;
```
### Criação da pilha
```
    pilha *criaPilha() {
        pilha p = malloc(sizeof(pilha));
        p->anterior = NULL;
        return p;
    }
```
### Empilha
```
    void empilha(pilha *p, int x) {
        pilha *novo = malloc(sizeof(pilha));
        novo->dado = x;
        novo->anterior = p->anterior;
        p->anterior = novo;
    }
```
### Desempilha 
```
    int desempilha (pilha *p) {
        pilha *lixo = p->anterior;
        int dado = lixo->dado;
        p->anterior = lixo->anterior;
        free(lixo);
        return dado;
    }
```
### Destruir
```
    void destruirPilha(pilha *p) {
        while (p->prox != NULL)
            desempilha(p);
        free(p);
    }
```