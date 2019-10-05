# Pilhas com lista encadeada 
## Como implementar pilha usando L.E?
- Como representar o topo
- Como insterir (empilhar) um elemento
- Como remover (desempilhar) um ememento

### 1- Declaração

        typedef struct celula{
            int dado;
            struct celula *ant; // anterior
        };

### 2- Inicialização 

        void criaPilha(celula *pilha){
            pilha = mallocc(sizeof(celula));
            pilha -> ant = null;
        }

### 3- Inicialização 

        void empilhar(celula *pilha, int x){
            celula *novo;
            novo = malloc(sizeof(celula));
            novo->dado = x;
            novo->ant = topo->ant;
            top->ant = novo;
        }

### 4- Remoção

        int desempilha (celula *pilha){
            if(pilha->ant != NULL){
                celula *lixo = pilha->ant;
                int x = lixo->dado;
                pilha->ant = lixo->ant;
                free(lixo);
                return x;
            }
            return 0;
        }
        // Desempilha não funciona se a pilha estiver vazia (Sem o If)

### 5- Pilha vazia

        int pilhaVazia(celula *pilha){
            return pilha->ant == NULL;
        }

### 6- Destruição da Pilha

        void destroi(celula *pilha){
            if(pilha->ant != NULL){
                destroi(pilha->ant);
            }
            free(pilha);
        }
---
## pilha_Int.h

    #ifndef _pilha_Int.h
    #define _pilha_Int.c

    int criaPilha();
    int empilha(int x); 
    int desempilha(int *x);
    int destroi();

    #endif

## pilha_Int.c

    #include <stdlib.h>

    typedef struct celula{
        int dado;
        celula pilha *ant;
    };
    
    static celula *topo;

    /*Implementações*/