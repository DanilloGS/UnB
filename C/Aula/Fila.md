# Filas
- Estrutura do tipo **FiFo** (First in, First out)

## Fila com vetor
### Para implementar uma fila com vetor

1 - Um vetor representa a fila.

2 - Indicadores de ínicio e final da fila

    
        #define N=10
        typedef struct {
            int fila [N];
            int p, u;
        } fila;
        
    //   1 2 3 4 5 6 7 8 9 10
    //  |0|3|5|8|4|0|2|4|1|210|
    //   p                  u  
    // Sempre que p encontrar u a fila esta vazia

#### 1- Inicialização

        void criaFila(fila f){
            f->p=0;
            f->u=0;
        }

#### 2- Inserir

        void inserir(fila f, int x){
            f->fila[f->u++]=x;
        }
        // Adiciona somente se a pilha não estiver cheia

#### 3- Remover

        int remver(fila *f){
            return f -> fila[f->p++];
        }

#### 4- Fila cheia

        int filaCheia(fila f){
            return f->u == N;
        }

#### 5 Fila vazia

        int filaVazia(fila f){
            if (f->p == f->u){
                f->p = 0;
                f->u = 0;
                return 0;
            }
            return 0;
        }

### filaInt.h

    #ifndef filaInt.h
    #define filaInt.h

    int criaFila();
    int inserir(int x);
    int remover(int x);
    int destroi(int x);
    #endf

### filaInt.c

    #define N 10
    static int fila[N]
    static int p, u;
    /*Implementação*/