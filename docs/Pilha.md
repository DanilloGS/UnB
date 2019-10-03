# Pilhas
Uma pilha é uma estrutura linear para manipulação de dados que segue o esquema LIFO. Last in First out, ou seja, o último que entra é o primeiro que saí.

    6                  |\|                    
    5 |\|              |\|             |\|
    4 |\|              |\|             |\|
    3 |\|              |\|             |\|
    2 |\|              |\|             |\|    
    1 |\|              |X| Desempilha  |\|    
    0 |X| Empilha(1)-> |1| Retorna 1   |X|

    X = Topo

## Pilha com vetores
### Declaração

        # define N 10
        typedef struct pilha{
            int dados[n];
            int topo;
        } pilha;

1. Criação da pilha

        void criaPilha(pilha *p){
            p-> topo = 0;
        }

2. Empilha

        void empilha(pilha *p, int y){
            p->dado[p->topo++]=y;
        }

3. Pilha cheia

        int pilhaCheia(pilha *p){
            return p-> topo == N;
        }

4. Desempilha 

        int desempilha (pilha *p){
            return p->dado[--p->topo]
        }

5. Pilha vazia

        int pilhaVazia(pilha *p){
            return !p -> topo
            // If pilha vazia, p == 0 esle p != 0
        }

**Obs.:** 
- **1 Empilha só pode ser chamado se a pilha não estiver cheia**
- **2. Desempilha só pode ser chamado se a pilha não estiver vazia**

## Criando um módulo para pilha de inteiros

- Um módulo é um par de arquivos de mesmo nome com extensão .h e .c, respectivamente.
- O arquivo .h é chamado **header file** (arquivo interface) e contem protótipos de funçoess. Um arqivo de nome .h possui o seguinte formato
 
		#define _nome.h
		#define _nome.h

		/*Protótipos e constantes*/

		#endif

- O arquivo .c, por sua vez, possui as implementações das funções declaradas no .h

### pilhaInt.h

		#ifndef _pilhaInt.h
		#define _pilhaInt.h
		
		int criaPilha();
		int empilha(int y);
		int desempilha(int *y);
		void destroiPilha();

		#endif

### pilhaInt.c

		static int *pilha;
		static int N, topo;

		int criaPilha(){
			N=10;
			pilha = malloc(N*sizeof(int));
			pilha==NULL	? return 0:return 1;
		} 

		int empilha(int y){
			if(topo == N){
				if((pilha = realloc(pilha, 2*N))==NULL)
					return 0;
				N*=2;
			}
			pilha[topo++]=y;
			return 1;
		}

		int desempilha(int *y){
			if(!topo)
				return 0;
			*y = pilha[--topo];
			return 0;
		}

		void destroiPilha(){
			free(pilha);
		}

### main
		#include "pilhaInt.h"

### Compilar
		gcc -o main main.c pilhaInt.c