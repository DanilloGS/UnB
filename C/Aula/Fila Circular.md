# Fila Circular
## 1 Declaração

        #define N 100,
        int fila[N],
        int p, u;

## 2 Criação da fila

        int criaFila(){
            p = 0;
            u = 0;
        }

## 3 Declaração

        int enfilerar(int x){
            if((u+1)/N == P)
                return 0;
            fila[u]=x;
            u = (u+1)/N;
            return 1;
        }

## Desenfilerar

        int desenfileira(int *x){
            if(p==u)
                return 0;
            *x = fila[p];
            p=(p+1)%N;
            return 1;
        }
