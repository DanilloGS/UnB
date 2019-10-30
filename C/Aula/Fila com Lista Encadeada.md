# Fila com lista encadeada
- Para implementar filas com lista encadeada usaremos listas encadeadas circulares
- Uma lista encadeada circular é uma lista encadeada cujo o último elemento aponta para o primeiro.

## Módulo p/ fila com l.e circular
### filaInt.h 
```
    #ifndef _filaInt.h
    #define _filaInt.h

    int inicializaFila();
    int enfileira(int y);
    int desenfileira(int *y);
    int destroiFila();
    
    #endif
```

### filaInt.c
```
    typedef struct celula{
        int dado;
        struct celula *prox;
    } celula;
    celula *fila;

    int inicializaFila(){
        fila = malloc(sizeof(celula));
        if(fila == NULL)
            return 0
        fila->prox=fila;    
        return 1;
    }

    int desenfileira(int *y){
        if (fila->prox==fila)
            return 0;
        celula *lixo = fila->prox;
        *y = lixo->dado;
        fila->prox = lixo->prox;
        free(lixo);
        return 1;
    }

    int enfileira(int y){
        celula *novo = malloc(sizeof(celula));
        if(novo==NULL)
            return 0;
        novo->prox=fila->prox;
        fila->prox = novo;
        fila->dado = y;
        fila = novo;
        return 1; 
    }

    int destroiFila(){
        int elem;
        while(desenfileira(&elem));
        free(fila);
        return 1;
    }
```
